#pragma once
#include "MyForm.h"
#include "globalvars.h"
#include "TableForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace Attendancelog;

void MyForm::AddWeekend()
{
	int colin = dataGridView1->CurrentCell->ColumnIndex;
	if (getColorCell() == Color::FromArgb(0, 0, 0) || colin == 0 || colin == 1 || colin == MAXCOLS || colin == MAXCOLS - 1 || colin == MAXCOLS - 2 || colin == MAXCOLS - 3)
		MessageBox::Show("Невозможно добавить выходной", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
	{
		auto result = MessageBox::Show(
			"Вы уверены что хотите добавить выходной на этот день?",
			"Подтверждение",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			short j = 0;
			while (j < AmountOfPeople)
			{
				SetColor(colin, j, Color::FromArgb(0, 0, 0));
				j++;
			}

		}
	}
}

void MyForm::DelWeekend()
{
	if (getColorCell() != Color::FromArgb(0, 0, 0))
		MessageBox::Show("В этот день нет выходного, удаление невозможно!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
	{
		auto result = MessageBox::Show(
			"Вы уверены что хотите удалить выходной в этот день?",
			"Подтверждение",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			int colin = dataGridView1->CurrentCell->ColumnIndex;
			short j = 0;
			while (j < AmountOfPeople)
			{
				SetColor(colin, j, Color::FromArgb(255, 255, 255));
				j++;
			}
		}
	}
}

void MyForm::ClearAllTable()
{
	for (short j = 0; j < AmountOfPeople; j++)
		dataGridView1->Rows->RemoveAt(0);
}

void MyForm::NulledCells()
{
	for (short i = 2; i < (MAXCOLS - 3); i++)
		for (short j = 0; j < AmountOfPeople; j++)
			if (dataGridView1[i, j]->Value != "" || dataGridView1[i, j]->Value != nullptr)
				SetNullCell(i, j);
}

void MyForm::DisplayTable()
{
	dataGridView1->RowHeadersVisible = false;
	dataGridView1->AllowUserToResizeColumns = false;
	dataGridView1->AllowUserToResizeRows = false;

	dataGridView1->ColumnHeadersHeight = 33;

	dataGridView1->Columns[33]->HeaderCell->Style->BackColor = Color::FromArgb(127, 118, 121);
	dataGridView1->Columns[34]->HeaderCell->Style->BackColor = Color::FromArgb(0, 190, 20);
	dataGridView1->Columns[35]->HeaderCell->Style->BackColor = Color::FromArgb(0, 162, 254);
	dataGridView1->Columns[36]->HeaderCell->Style->BackColor = Color::FromArgb(190, 0, 0);

	очиститьToolStripMenuItem->Visible = true;
	подсчитатьToolStripMenuItem->Visible = true;

	toolStripSeparator1->Visible = true;

	добавитьВыходнойToolStripMenuItem->Visible = true;
	удалитьВыходнойToolStripMenuItem->Visible = true;

	toolStripSeparator2->Visible = true;

	добавитьЧеловекаToolStripMenuItem->Visible = true;
	удалитьЧеловекаToolStripMenuItem->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label6->Visible = true;

	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;

	dataGridView1->Visible = true;
	//dataGridView1->CurrentCell = dataGridView1[0, 0];
}

bool MyForm::isNull(int i, int j)
{
	return (dataGridView1->Rows[i]->Cells[j]->Value == nullptr || dataGridView1->Rows[i]->Cells[j]->Value == "" ? true : false);
}

int MyForm::CheckColor(const Color& backcolor)
{
	if (backcolor == (Color::FromArgb(190, 0, 0)))
		return 1;	/// Красный

	else if (backcolor == (Color::FromArgb(0, 162, 254)))
		return 2;	/// Голубой

	else if (backcolor == (Color::FromArgb(0, 190, 20)))
		return 3;	/// Зелёный

	else if (backcolor == (Color::FromArgb(0, 0, 0)))
		return 4;	/// Чёрный

	else if (backcolor == (Color::FromArgb(255, 255, 255)) || (backcolor == Color::FromArgb(255, 245, 194)))
		return 5;	/// Белый

	else if (backcolor == (Color::FromArgb(204, 255, 153)))
		return 6;	/// Зелёный
	else
		return 0;	/// Ошибка
}

void MyForm::DeleteCell()
{
	int colind = dataGridView1->CurrentCell->ColumnIndex;
	Color& CurrentColorCell = dataGridView1->CurrentCell->Style->BackColor;

	if (colind == 0 || colind == MAXCOLS || colind == MAXCOLS - 1 || colind == MAXCOLS - 2 || colind == MAXCOLS - 3)
		MessageBox::Show("Нельзя удалять служебные ячейки", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
	{
		if (CurrentColorCell == Color::FromArgb(204, 255, 153))
		{
			auto result = MessageBox::Show("Удалить зелёную строку?", "Сообщение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				for (short i = 0; i < dataGridView1->ColumnCount; i++)
				{
					if (dataGridView1[i, dataGridView1->CurrentCell->RowIndex]->Style->BackColor != Color::FromArgb(0, 0, 0))
						dataGridView1[i, dataGridView1->CurrentCell->RowIndex]->Style->BackColor = Color::FromArgb(255, 255, 255);
				}
				MessageBox::Show("Зелёная строка была успешно удалена.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		if (CurrentColorCell != Color::FromArgb(0, 0, 0) && CurrentColorCell != Color::FromArgb(204, 255, 153))
		{
			//dataGridView1->CurrentCell->Style->BackColor = Color::FromArgb(255, 255, 255);
			SetColor(Color::FromArgb(255, 255, 255));
			SetNullCell();
		}
	}
}

void MyForm::SaveAs()
{
	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->DefaultExt = ".att";
	saveFileDialog1->Filter = "Журнал (*.att)|*.att";
	saveFileDialog1->FileName = PATH;

	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			StreamWriter^ myWritet = gcnew StreamWriter(myStream, System::Text::Encoding::UTF8);
			try
			{
				for (short i = 0; i < dataGridView1->RowCount; i++)
					for (short j = 0; j < dataGridView1->ColumnCount; j++)
					{
						Color backcolor_ = dataGridView1->Rows[i]->Cells[j]->Style->BackColor;
						if (!isNull(i, j))
							myWritet->Write(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) + "^" + Convert::ToString(CheckColor(backcolor_)) + "%");
						else
							myWritet->Write("_^" + Convert::ToString(CheckColor(backcolor_)) + "%");
					}
			}
			catch (InvalidCastException^ e) {}
			finally
			{
				myWritet->Close();
			}
			myStream->Close();
			PATH = textBox2->Text;
			changeamount = 0;
			MyForm::Text = "Журнал посещаемости" + " [" + PATH + "]";
		}
	}
}

/*
System::void MyForm::Save()
{
	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	//saveFileDialog1->Filter = "Журнал (*.att)|*.att";
	saveFileDialog1->FileName = PATH;

	if (PATH == nullptr)
	{
		Cursor = System::Windows::Forms::Cursors::Default;
		SaveAs();
	}
	else
	{
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			StreamWriter^ myWritet = gcnew StreamWriter(myStream, System::Text::Encoding::UTF8);
			try
			{
				for (short i = 0; i < dataGridView1->RowCount; i++)
					for (short j = 0; j < dataGridView1->ColumnCount; j++)
					{
						Color backcolor_ = dataGridView1->Rows[i]->Cells[j]->Style->BackColor;
						if (!isNull(i, j))
							myWritet->Write(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) + "^" + Convert::ToString(CheckColor(backcolor_)) + "%");
						else
							myWritet->Write("_^" + Convert::ToString(CheckColor(backcolor_)) + "%");
					}
			}
			catch (InvalidCastException^ e) {}
			finally
			{
				myWritet->Close();
			}
			myStream->Close();
		}
		else SaveAs();

		changeamount = 0;
		MyForm::Text = "Журнал посещаемости" + " [" + PATH + "]";
	}
}
*/
//void MyForm::CreateTable(Object^ sender, EventArgs^ e, Decimal Amount, String^ NameOfOrg, int date)

void MyForm::CreateTable(int Amount, String^ NameOfOrg, int date)
{
	//Сохранение настроек
	AmountOfPeople = Amount;
	MyForm::Text = "Журнал посещаемости " + " [" + NameOfOrg + ".att]";
	/****/

	for (short j = 0; j < AmountOfPeople; j++)
	{
		int index;
		index = j + 1;
		dataGridView1->Rows->Add();
		//dataGridView1[0, j]->Value = index;
		SetValueCell(0, j, index);
	}

	for (short i = 0; i < MAXCOLS + 1; i++)
		for (short j = 0; j < AmountOfPeople; j++)
			SetColor(i, j, Color::FromArgb(255, 255, 255));

	for (short i = 1; i < MAXCOLS - 5; i++)
		dataGridView1[i, dataGridView1->RowCount - 1]->ReadOnly = true;

	label6->Text = "[" + getMonth(date) + "]";
	
	DisplayTable();
}

bool MyForm::isError()
{
	ERRORSCOUNT = 0;
	short i = 2;
	while (i < MAXCOLS - 3)
	{
		short j = 0;
		while (j < AmountOfPeople)
		{
			if (!((getColorCell(i, j) == Color::FromArgb(190, 0, 0) && getValueCell(i, j) < MAXHOURS)
				||
				(getColorCell(i, j) == Color::FromArgb(0, 162, 254) && getValueCell(i, j) < MAXHOURS)
				||
				(getColorCell(i, j) == Color::FromArgb(0, 190, 20) && getValueCell(i, j) < MAXHOURS)
				||
				(getColorCell(i, j) == Color::FromArgb(0, 0, 0))
				||
				(getColorCell(i, j) == Color::FromArgb(255, 255, 255) && (dataGridView1[i, j]->Value == "" || dataGridView1[i, j]->Value == nullptr))
				||
				(dataGridView1[i, j]->Value == "" || dataGridView1[i, j]->Value == nullptr)
				)//отрицание условия
				)//само условие
			{
				SetColor(i, j, Color::FromArgb(255, 128, 0));
				ERRORSCOUNT++;
			}
			j++;
		}
		i++;
	}

	return (ERRORSCOUNT > 0 ? true : false);
}

void MyForm::EventColor(const Color& colorbutton)
{
	if (dataGridView1->CurrentCell->ColumnIndex < 2 || dataGridView1->CurrentCell->ColumnIndex > 32 || dataGridView1->CurrentCell->Style->BackColor == Color::FromArgb(0, 0, 0))
	{
		MessageBox::Show("Невозможно окрасить служебные ячейки!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//dataGridView1->CurrentCell->Style->BackColor = Color::FromArgb(255, 255, 255);
	}
	else if (getColorCell() != colorbutton)
		SetColor(colorbutton);
}

void MyForm::СountMain()
{
	//dataGridView1[столбец, строка]
	//dataGridView1[i, j]
	Cursor = System::Windows::Forms::Cursors::WaitCursor;

	Int16 SumOfIrrev;
	Int16 SumOfEv;
	Int16 SumOfIll;

	Int16 Total_SumOfIrrev = 0;
	Int16 Total_SumOfEv = 0;
	Int16 Total_SumOfIll = 0;

	//Очистка чёрных ячеек от значений
	for (short i = 2; i < (MAXCOLS - 3); i++)
		for (short j = 0; j < AmountOfPeople; j++)
			if (getColorCell(i, j) == Color::FromArgb(0, 0, 0) && (dataGridView1[i, j]->Value != "" || dataGridView1[i, j]->Value != nullptr))
				SetNullCell(i, j);
	try
	{
		if (!isError())
		{
			for (short j = 0; j < AmountOfPeople; j++)
			{
				SumOfIrrev = 0;
				SumOfEv = 0;
				SumOfIll = 0;
				for (int i = 2; i < (MAXCOLS - 3); i++)
				{
					if (dataGridView1[i, j]->Style->BackColor == Color::FromArgb(190, 0, 0))
						SumOfIrrev += getValueCell(i, j);

					else if (dataGridView1[i, j]->Style->BackColor == Color::FromArgb(0, 162, 254))
						SumOfEv += getValueCell(i, j);

					else if (dataGridView1[i, j]->Style->BackColor == Color::FromArgb(0, 190, 20))
						SumOfIll += getValueCell(i, j);

					dataGridView1[MAXCOLS, j]->Value = Convert::ToString(SumOfIrrev);
					dataGridView1[MAXCOLS - 1, j]->Value = Convert::ToString(SumOfEv);
					dataGridView1[MAXCOLS - 2, j]->Value = Convert::ToString(SumOfIll);
					dataGridView1[MAXCOLS - 3, j]->Value = Convert::ToString(SumOfIrrev + SumOfEv + SumOfIll); //Как заменить?
				}
			}

			//Проход по всей таблице
			for (short i = MAXCOLS - 2; i < MAXCOLS + 1; i++)
				for (short j = 0; j < AmountOfPeople; j++)
				{
					if (i == MAXCOLS - 2)
						Total_SumOfIll = Total_SumOfIll + getValueCell(i, j);

					else if (i == MAXCOLS - 1)
						Total_SumOfEv = Total_SumOfEv + getValueCell(i, j);

					else if (i == MAXCOLS)
						Total_SumOfIrrev = Total_SumOfIrrev + getValueCell(i, j);
				}


			String^ msg = "";
			if ((Total_SumOfIrrev + Total_SumOfIll + Total_SumOfEv) == 0)
			{
				throw msg = "Для подсчёта нужно хотя бы одно заполненное поле!";
			}
			delete msg;

			//Окраска в зелёный строку, если прогулов 0
			if (зелёный0ToolStripMenuItem->Checked) //
				for (short j = 0; j < AmountOfPeople; j++)
					if (Convert::ToInt16(dataGridView1[MAXCOLS - 3, j]->Value) == 0)
						for (short i = 0; i < MAXCOLS + 1; i++)
							if (getColorCell(i, j) != Color::FromArgb(0, 0, 0))
								SetColor(i, j, Color::FromArgb(204, 255, 153));

			label1->Text = Convert::ToString(Total_SumOfIrrev + Total_SumOfIll + Total_SumOfEv);
			label2->Text = Convert::ToString(Total_SumOfIll);
			label3->Text = Convert::ToString(Total_SumOfEv);



			if (неУвОтВСЕГОToolStripMenuItem->Checked)
				label4->Text = Convert::ToString(Total_SumOfIrrev) + " (" + Total_SumOfIrrev * 100 / (Total_SumOfIrrev + Total_SumOfIll + Total_SumOfEv) + "%)";
			else
				label4->Text = Convert::ToString(Total_SumOfIrrev);

			MessageBox::Show("Успешно посчитано!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Были найдены ошибки:" + ERRORSCOUNT + "\nПодсвечены оранжевым", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (String^ msg)
	{
		MessageBox::Show(msg, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	Cursor = System::Windows::Forms::Cursors::Cross;
}
#pragma endregion