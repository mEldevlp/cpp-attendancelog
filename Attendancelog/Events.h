#pragma once

#include "MyForm.h"
#include "globalvars.h"
#include "TableForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace Attendancelog;


void MyForm::button1_Click(Object^ sender, EventArgs^ e) //Кнопка НУ
{
	EventColor(button1->BackColor);
}

void MyForm::button2_Click(Object^ sender, EventArgs^ e) //Кнопка УВ
{
	EventColor(button2->BackColor);
}

void MyForm::button3_Click(Object^ sender, EventArgs^ e) //Кнопка Б
{
	EventColor(button3->BackColor);
}

void MyForm::button4_Click(Object^ sender, EventArgs^ e)
{
	if (textBox1->Text == "" || textBox2->Text == "")
		MessageBox::Show("Заполните все поля!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
	{
		if (dataGridView1[0, 0]->Value != nullptr)
		{
			auto result = MessageBox::Show(
				"Вы уверены что хотите создать новую таблицу?\nСтарая удалится!",
				"Подтверждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				ClearAllTable();
				//CreateTable(sender, e);
				NulledCells();

				очиститьToolStripMenuItem->Visible = true;
				подсчитатьToolStripMenuItem->Visible = true;

				MessageBox::Show("Таблица была успешно сформирована и готова к работе", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		else
		{
			//CreateTable();
			NulledCells();

			очиститьToolStripMenuItem->Visible = true;
			подсчитатьToolStripMenuItem->Visible = true;

			MessageBox::Show("Таблица была успешно сформирована и готова к работе", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		groupBoxCreate->Visible = false;
	}
}

void MyForm::подсчитатьToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	СountMain();
}

void MyForm::очиститьToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	auto result = MessageBox::Show(
		"Вы уверены, что хотите очистить таблицу?\nЭтот процесс необратим!",
		"Подтверждение",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		Cursor = System::Windows::Forms::Cursors::WaitCursor;
		for (short i = 0; i <= MAXCOLS; i++)
			for (short j = 0; j < AmountOfPeople; j++)
				if (getColorCell(i, j) != Color::FromArgb(0, 0, 0))
				{
					SetColor(i, j, Color::FromArgb(255, 255, 255));
					if (i > 1)
						SetNullCell(i, j);
				}

		label1->Text = "0";
		label2->Text = "0";
		label3->Text = "0";
		label4->Text = "0";
		Cursor = System::Windows::Forms::Cursors::Cross;
	}
}

void MyForm::button5_Click(Object^ sender, EventArgs^ e)
{
	groupBoxCreate->Visible = false;
}

void MyForm::добавитьЧеловекаToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	AmountOfPeople++;
	short rowind = dataGridView1->CurrentCell->RowIndex;
	dataGridView1->Rows->Insert(rowind);

	for (short j = rowind; j < AmountOfPeople; j++)
	{
		int index;
		index = j + 1;
		SetValueCell(0, j, index);
	}

	for (short i = 0; i < MAXCOLS + 1; i++)
	{
		if (getColorCell(i, rowind + 1) == Color::FromArgb(0, 0, 0))
		{
			SetColor(i, rowind, Color::FromArgb(0, 0, 0));
		}
		if (getColorCell(i, rowind) != Color::FromArgb(0, 0, 0))
		{
			SetColor(i, rowind, Color::FromArgb(255, 255, 255));
		}
	}

	for (short i = 1; i < MAXCOLS - 5; i++)
	{
		dataGridView1[i, dataGridView1->RowCount - 2]->ReadOnly = false;
		dataGridView1[i, dataGridView1->RowCount - 1]->ReadOnly = true;
	}
	dataGridView1_SelectionChanged(sender, e);
}

void MyForm::удалитьЧеловекаToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	AmountOfPeople--;
	short rowind = dataGridView1->CurrentCell->RowIndex;
	dataGridView1->Rows->RemoveAt(rowind);

	for (short j = rowind; j < AmountOfPeople; j++)
	{
		int index;
		index = j + 1;
		SetValueCell(0, j, index);
	}

	dataGridView1->CurrentCell = dataGridView1[0, 0];
	dataGridView1_SelectionChanged(sender, e);
}

void MyForm::сохранитьToolStripMenuItem1_Click(Object^ sender, EventArgs^ e)
{
	SaveAs();
}

void MyForm::dataGridView1_SelectionChanged(Object^ sender, EventArgs^ e)
{
	//Выделение активной ячейки по столбцу и строке
	CurrColNew = dataGridView1->CurrentCell->ColumnIndex;
	CurrRowNew = dataGridView1->CurrentCell->RowIndex;

	short col = CurrColNew;
	short row = CurrRowNew;

	short colold = CurrColOld;
	short rowold = CurrRowOld;

	/*
	dataGridView1->Columns[33]->HeaderCell->Style->BackColor = Color::FromArgb(127, 118, 121);
	dataGridView1->Columns[34]->HeaderCell->Style->BackColor = Color::FromArgb(0, 190, 20);
	dataGridView1->Columns[35]->HeaderCell->Style->BackColor = Color::FromArgb(0, 162, 254);
	dataGridView1->Columns[36]->HeaderCell->Style->BackColor = Color::FromArgb(190, 0, 0);
	*/

	Color& rowheadbackcolornew = dataGridView1->Columns[CurrColNew]->HeaderCell->Style->BackColor;
	int stp = 65;

	if (CurrColOld != CurrColNew || CurrRowOld != CurrRowNew)
	{
		if (rowheadbackcolornew == Color::FromArgb(127, 118, 121))
			rowheadbackcolornew = Color::FromArgb(127, 118 + stp, 121);

		else if (rowheadbackcolornew == Color::FromArgb(0, 190, 20))
			rowheadbackcolornew = Color::FromArgb(0, 190 + stp, 20);

		else if (rowheadbackcolornew == Color::FromArgb(0, 162, 254))
			rowheadbackcolornew = Color::FromArgb(0, 162 + stp, 254);

		else if (rowheadbackcolornew == Color::FromArgb(190, 0, 0))
			rowheadbackcolornew = Color::FromArgb(190, 0 + stp, 0);
		else
			rowheadbackcolornew = Color::FromArgb(255, 245, 194);

		dataGridView1->Columns[CurrColNew]->HeaderCell->Style->BackColor = rowheadbackcolornew;

		short i = 0;
		while (i < colold)
		{
			if (getColorCell(i, rowold) == Color::FromArgb(255, 245, 194))
				SetColor(i, rowold, Color::FromArgb(255, 255, 255));
			i++;
		}

		short j = 0;
		while (j < rowold)
		{
			if (getColorCell(colold, j) == Color::FromArgb(255, 245, 194))
				SetColor(colold, j, Color::FromArgb(255, 255, 255));
			j++;
		}

		short _i = 0;
		while (_i < col)
		{

			if (getColorCell(_i, row) == Color::FromArgb(255, 255, 255))
				SetColor(_i, row, Color::FromArgb(255, 245, 194));
			_i++;
		}

		short _j = 0;
		while (_j < row)
		{
			if (getColorCell(col, _j) == Color::FromArgb(255, 255, 255))
				SetColor(col, _j, Color::FromArgb(255, 245, 194));
			_j++;

		}
	}

	Color& rowheadbackcolorold = dataGridView1->Columns[CurrColOld]->HeaderCell->Style->BackColor;

	if (rowheadbackcolorold == Color::FromArgb(127, 118 + stp, 121))
		rowheadbackcolorold = Color::FromArgb(127, 118, 121);

	else if (rowheadbackcolorold == Color::FromArgb(0, 190 + stp, 20))
		rowheadbackcolorold = Color::FromArgb(0, 190, 20);

	else if (rowheadbackcolorold == Color::FromArgb(0, 162 + stp, 254))
		rowheadbackcolorold = Color::FromArgb(0, 162, 254);

	else if (rowheadbackcolorold == Color::FromArgb(190, 0 + stp, 0))
		rowheadbackcolorold = Color::FromArgb(190, 0, 0);
	else
		rowheadbackcolorold = Color::FromArgb(255, 255, 255);

	if (CurrColOld == CurrColNew)
	{
		dataGridView1->Columns[CurrColOld]->HeaderCell->Style->BackColor = rowheadbackcolornew;
	}
	else
	{
		dataGridView1->Columns[CurrColOld]->HeaderCell->Style->BackColor = rowheadbackcolorold;
	}

	CurrRowOld = CurrRowNew;
	CurrColOld = CurrColNew;
}

void MyForm::убратьЗелёныеСтрокиToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	auto result = MessageBox::Show("Вы уверены, что хотите удалить зелёные строки?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		short i = 0;
		while (i <= MAXCOLS)
		{
			short j = 0;
			while (j < AmountOfPeople)
			{
				if (getColorCell(i, j) == Color::FromArgb(204, 255, 153))
					SetColor(i, j, Color::FromArgb(255, 255, 255));
				j++;
			}
			i++;
		}
	}

	dataGridView1->CurrentCell = dataGridView1[0, 0];
	dataGridView1_SelectionChanged(sender, e);
}

void MyForm::таблицуToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	TableForm^ createtable = gcnew TableForm(this);
	createtable->ShowDialog();
}

void MyForm::шаблонToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	return void();
}

void MyForm::dataGridView1_CellEndEdit(Object^ sender, DataGridViewCellEventArgs^ e)
{
	if (Convert::ToInt16(dataGridView1->CurrentCell->ColumnIndex) != 1)
	{
		try
		{
			//Пробуем сконвертировать значение ячейки в Int32
			Int32 result;
			result = System::Convert::ToInt32(this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);

			if (result > 24)
			{
				MessageBox::Show("Значение <" + result + "> неприемлемо!\nВведите число целого типа или меньше 25\n\nЯчейка: [" + (dataGridView1->CurrentCell->ColumnIndex - 1) + ";" + (dataGridView1->CurrentCell->RowIndex + 1) + "]", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = nullptr;
			}
		}
		catch (Exception^ ex)
		{
			//Если при конвертировании возникает ошибка - показываем окно ошибки и стираем значение ячейки
			MessageBox::Show(ex->Message + "\nВведите число целого типа\n\nЯчейка: [" + (dataGridView1->CurrentCell->ColumnIndex - 1) + ";" + (dataGridView1->CurrentCell->RowIndex + 1) + "]", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = nullptr;
		}
	}
	/*
	if (Convert::ToInt16(dataGridView1->CurrentCell->ColumnIndex) > 1)
	{
		int value = Convert::ToInt16(dataGridView1->CurrentCell->Value);
		if (value > 24)
		{
			MessageBox::Show("Значение <" + value + "> неприемлемо!\nВведите число целого типа или меньше 25\n\nЯчейка: [" + (dataGridView1->CurrentCell->ColumnIndex - 1) + ";" + (dataGridView1->CurrentCell->RowIndex + 1) + "]", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = nullptr;
		}
	}
	*/


	if (dataGridView1->CurrentCell->Style->BackColor == Color::FromArgb(204, 255, 153)) //цвет бабушкины яблоки - (204, 255, 153)
	{
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
		{
			if (dataGridView1[i, dataGridView1->CurrentCell->RowIndex]->Style->BackColor != Color::FromArgb(0, 0, 0))
				dataGridView1[i, dataGridView1->CurrentCell->RowIndex]->Style->BackColor = Color::FromArgb(255, 255, 255);
		}
	}
}

void MyForm::помощьToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	MessageBox::Show("Пользование программой:\nЧтобы начать вести учёт, нужно создать документ (Файл -> Создать), далее ввести ФИО людей в соответствующие ячейки.\n1)Чтобы добавить НЕуважительный пропуск нужно нажать на ячейку и нажать на кнопку \"НУ\"(Ctrl + Q)\n2)Добавить УВажительный пропуск \"УВ\"(Ctrl + W)\n3)Добавить пропуск по болезни \"Б\"(Ctrl + E)\n\nДобавление выходных\nЧтобы добавить выходной день нужно выделить столбец(день) и нажать на плюс\"+\"(Ctrl + Space), добавится чёрная колонна\n\nОбщий подсчёт\nЧтобы подвести итоги месяца необходимо нажать ( Действия - Подсчёт(F12) ), если всё успешно подсчитается, программа вам об этом скажет, может выдать и ошибку если что-то не так", "Помощь", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void MyForm::textBox1_KeyPress(Object^ sender, KeyPressEventArgs^ e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		e->Handled = true;
}

void MyForm::textBox3_KeyPress(Object^ sender, KeyPressEventArgs^ e)
{
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		e->Handled = true;
}

void MyForm::MyForm_KeyDown(Object^ sender, KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Q && (e->Alt || e->Control))
		button1->PerformClick();

	else if (e->KeyCode == Keys::W && (e->Alt || e->Control))
		button2->PerformClick();

	else if (e->KeyCode == Keys::E && (e->Alt || e->Control))
		button3->PerformClick();

	else if (e->KeyCode == Keys::Delete)
		DeleteCell();

	else if (e->KeyCode == Keys::Space && e->Control)
		AddWeekend();

	else if (e->KeyCode == Keys::Delete && e->Control)
		DelWeekend();

	else if (e->KeyCode == Keys::F12)
		СountMain();

	//else if (e->KeyCode == Keys::S && e->Control)
	//	Save();

	else if (e->KeyCode == Keys::S && e->Shift && e->Control)
		SaveAs();
}

void MyForm::добавитьВыходнойToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	AddWeekend();
}

void MyForm::удалитьВыходнойToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	DelWeekend();
}

void MyForm::MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e)
{
	if (changeamount >= 1)
	{
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Вы хотите сохранить изменения?", "Журнал посещаемости", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
			SaveAs();
		else if (result == System::Windows::Forms::DialogResult::No) Application::ExitThread();
		else if (result == System::Windows::Forms::DialogResult::Cancel) e->Cancel = true;
	}
}

void MyForm::MyForm_Load(Object^ sender, EventArgs^ e)
{
	for (int i = 0; i < 33; dataGridView1->Columns[i]->HeaderCell->Style->BackColor = Color::FromArgb(255, 255, 255), i++)
		changeamount = 0;
	PATH = nullptr;
	dataGridView1[0, 0]->Selected;
	CurrRowOld = CurrColOld = 0;
}

void MyForm::dataGridView1_CellValueChanged(Object^ sender, DataGridViewCellEventArgs^ e)
{
	changeamount++;
	if (changeamount == 1)
		MyForm::Text += "*";
}

void MyForm::оПрограммеToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	MessageBox::Show("Клиент Attendancelog\nВерсия 1.5.1\nСборка 08.04.2021\n© Кондрашов Д.В.\nФГБОУ Колледж Росрезерва  \n\nvk.com/indydevlp", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void MyForm::открытьToolStripMenuItem_Click(Object^ sender, EventArgs^ e)
{
	Stream^ mystr = nullptr;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Журнал (*.att)|*.att";

	PATH = nullptr;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ClearAllTable();	//Очистка всей таблицы если были какие-то данные в ней, даже если и не было
		PATH = openFileDialog1->SafeFileName;
		textBox2->Text = PATH;
		if ((mystr = openFileDialog1->OpenFile()) != nullptr)
		{
			StreamReader^ myread = gcnew StreamReader(mystr);

			String^ str;		//Строка в которой будет файл
			String^ tempstr;	//Временная строка для записи по ячейкам

			int lengthcellvalue = 1;		//Длина значения ячейки по умолчанию
			int col = 0; //показывает в какой колонке мы находимся					//	  Делаем старт чтения с
			int j = 0;	 //показывает в какой строчкe мы находимся					//	  dataGridView1[0, 0], т.е с колонки ID dataGridView1[col, j]

			dataGridView1->Rows->Add();		//Создание колонки, должна пройти минимум 1 раз (вспомогательная)

			try
			{
				while ((str = myread->ReadLine()) != nullptr)	//Чтение строки до конца, пока не встретит пустоту
				{
					for (int k = 0; k < str->Length; k += 4)
					{
						int i = k;	//Запоминаем начальное положение
						while (Convert::ToString(str[i + 1]) != "^")	//Подсчёт длины до ^ (значение ячейки)
						{
							lengthcellvalue++;	//Длина значения ячейки до ^
							i++;	//Увеличиваем i, чтобы оказаться перед ^
						}

						int n = k; //Запоминаем позицию для записи во временную строку
						for (int p = 0; p < lengthcellvalue; p++)
						{
							tempstr += str[n]; //Увеличение значения строки(добавляет по 1 символу в строку)
							n++; //Увеличение позиции относительно k(начальной) до ^
						}
						lengthcellvalue = 1; //Обнуляем длину (Делаем её по умолчанию 1)

						if (col > 36) //Если прошли все колонки то переход на новую строку
						{
							j++; // переход на новую строку
							col = 0;	//переход на новую ячейку в новой строке, значение будет [0, j
							dataGridView1->Rows->Add();	//Создание строки

							if (Convert::ToString(tempstr) == "_")	//т.к. символ ( _ ) означал пустую ячейку, делаем проверку
								dataGridView1[col, j]->Value = nullptr; //очищаем ячейку если был символ ( _ )
							else	//Иначе если не ( _ ), то обычная запись
								dataGridView1[col, j]->Value = Convert::ToString(tempstr); //Запись значения ячейки
						}
						else	//То же самое, только если col < 36
							if (Convert::ToString(tempstr) == "_")
								dataGridView1[col, j]->Value = nullptr;
							else
								dataGridView1[col, j]->Value = Convert::ToString(tempstr);


						//Делаем заливку в ячейке (значение после ^)
						if (Convert::ToString(str[i + 2]) == "1")	//Если id = 1, то заливка красным
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(190, 0, 0);

						else if (Convert::ToString(str[i + 2]) == "2")	//Голубой
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(0, 162, 254);

						else if (Convert::ToString(str[i + 2]) == "3")	//Зелёный
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(0, 190, 20);

						else if (Convert::ToString(str[i + 2]) == "4")	//Чёрный
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(0, 0, 0);

						else if (Convert::ToString(str[i + 2]) == "5")	//Белым (обычная ячейка)
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(255, 255, 255);

						else if (Convert::ToString(str[i + 2]) == "6")	//Зелёный (обычная ячейка)
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(204, 255, 153);

						else if (Convert::ToString(str[i + 2]) == "0")	//Ошибка, оранжевый цвет
							dataGridView1[col, j]->Style->BackColor = Color::FromArgb(255, 128, 0);

						col++;				//переход в следующую колонку
						k = i;				//Ставим k в позицию перед ^, чтобы перескочить на новое значение (+4)
						tempstr = "";		//очистка временной строки
						AmountOfPeople = j;	//Запоминаем количество человек
					}
				}
			}
			catch (InvalidCastException^ e)
			{
				auto result = MessageBox::Show("Произошла неизвестная ошибка", "Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				if (result == System::Windows::Forms::DialogResult::OK)
					Application::ExitThread();
				else
					Application::ExitThread();
			}
			finally
			{
				myread->Close();
				for (int i = 1; i < dataGridView1->ColumnCount - 5; i++)
					dataGridView1[i, dataGridView1->RowCount - 1]->ReadOnly = true;

				dataGridView1->Rows->RemoveAt(j);	//Удаляем вспомогательную строку
				MyForm::Text = "Журнал посещаемости " + " [" + PATH + "]";
				DisplayTable();	//Отображаем таблицу
				label6->Visible = false;
				changeamount = 0;
			}
		}
	}
}

void TableForm::button1_Click(Object^ sender, EventArgs^ e)
{
	int amount = Convert::ToInt16(textBox1->Text);
	String^ name = textBox2->Text;
	int date = dateTimePicker1->Value.Month;

	mainform->CreateTable(amount, name, date);

	TableForm::~TableForm();
}

void TableForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	TableForm::~TableForm();
}

