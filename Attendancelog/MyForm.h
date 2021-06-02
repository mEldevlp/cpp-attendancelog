#pragma once

namespace Attendancelog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			InitializeComponent();
			this->KeyPreview = true;
			this->DoubleBuffered = true;
			this->SetStyle(ControlStyles::UserPaint | ControlStyles::AllPaintingInWmPaint | ControlStyles::ResizeRedraw | ControlStyles::ContainerControl | ControlStyles::OptimizedDoubleBuffer | ControlStyles::SupportsTransparentBackColor, true);
		}

		//MyForm(Decimal AofP, String^ NameOfOrg, int datep)
		//{
		//	InitializeComponent();
		//	CreateTable(AofP, NameOfOrg, datep); //ïåğåäà÷à äàííûõ èç îäíîé ôîğìû â äğóãóş, ÊÀÊ?
		//}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

private:
//private: System::Windows::Forms::
	System::Windows::Forms::DataGridView^ dataGridView1;
	System::Windows::Forms::Button^ button1;
	System::Windows::Forms::Button^ button2;
	System::Windows::Forms::Button^ button3;
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label3;
	System::Windows::Forms::Label^ label4;
	System::Windows::Forms::MenuStrip^ menuStrip1;
	System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ äåéñòâèÿToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ ïîäñ÷èòàòüToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ ïîìîùüToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	System::Windows::Forms::GroupBox^ groupBoxCreate;
	System::Windows::Forms::Label^ label10;
	System::Windows::Forms::TextBox^ textBox1;
	System::Windows::Forms::Label^ label9;
	System::Windows::Forms::Button^ button4;
	System::Windows::Forms::TextBox^ textBox2;
	System::Windows::Forms::Button^ button5;
	System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüÂûõîäíîéToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ óäàëèòüÂûõîäíîéToolStripMenuItem;
	System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	System::Windows::Forms::ToolStripMenuItem^ äîáàâèòü×åëîâåêàToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ óäàëèòü×åëîâåêàToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ äîïîëíèòåëüíîToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ çåë¸íûé0ToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ íåÓâÎòÂÑÅÃÎToolStripMenuItem;
	System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem2;
	System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ pDFToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ dOCXToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ òàáëèöóToolStripMenuItem;
	System::Windows::Forms::ToolStripMenuItem^ øàáëîíToolStripMenuItem;
	System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	System::Windows::Forms::Label^ label5;
	System::Windows::Forms::Label^ label6;

	System::Windows::Forms::ToolStripMenuItem^ ëîãèğîâàíèåToolStripMenuItem;

	   /// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øàáëîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ıêñïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pDFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dOCXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîäñ÷èòàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÂûõîäíîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->äîáàâèòü×åëîâåêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòü×åëîâåêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîïîëíèòåëüíîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåë¸íûé0ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëîãèğîâàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîìîùüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxCreate = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBoxCreate->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 33;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(37) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18,
					this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26,
					this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34,
					this->Column35, this->Column36, this->Column37
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Cross;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 64);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(1337, 793);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->Tag = L"fdsfd";
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView1_SelectionChanged);
			this->dataGridView1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column1->Width = 40;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ôàìèëèÿ È. Î.";
			this->Column2->Name = L"Column2";
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"1";
			this->Column3->Name = L"Column3";
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column3->Width = 25;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"2";
			this->Column4->Name = L"Column4";
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column4->Width = 25;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"3";
			this->Column5->Name = L"Column5";
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column5->Width = 25;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"4";
			this->Column6->Name = L"Column6";
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column6->Width = 25;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"5";
			this->Column7->Name = L"Column7";
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column7->Width = 25;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"6";
			this->Column8->Name = L"Column8";
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column8->Width = 25;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"7";
			this->Column9->Name = L"Column9";
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column9->Width = 25;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"8";
			this->Column10->Name = L"Column10";
			this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column10->Width = 25;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"9";
			this->Column11->Name = L"Column11";
			this->Column11->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column11->Width = 25;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"10";
			this->Column12->Name = L"Column12";
			this->Column12->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column12->Width = 25;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"11";
			this->Column13->Name = L"Column13";
			this->Column13->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column13->Width = 25;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"12";
			this->Column14->Name = L"Column14";
			this->Column14->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column14->Width = 25;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"13";
			this->Column15->Name = L"Column15";
			this->Column15->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column15->Width = 25;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"14";
			this->Column16->Name = L"Column16";
			this->Column16->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column16->Width = 25;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"15";
			this->Column17->Name = L"Column17";
			this->Column17->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column17->Width = 25;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"16";
			this->Column18->Name = L"Column18";
			this->Column18->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column18->Width = 25;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"17";
			this->Column19->Name = L"Column19";
			this->Column19->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column19->Width = 25;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"18";
			this->Column20->Name = L"Column20";
			this->Column20->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column20->Width = 25;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"19";
			this->Column21->Name = L"Column21";
			this->Column21->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column21->Width = 25;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"20";
			this->Column22->Name = L"Column22";
			this->Column22->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column22->Width = 25;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"21";
			this->Column23->Name = L"Column23";
			this->Column23->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column23->Width = 25;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"22";
			this->Column24->Name = L"Column24";
			this->Column24->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column24->Width = 25;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"23";
			this->Column25->Name = L"Column25";
			this->Column25->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column25->Width = 25;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"24";
			this->Column26->Name = L"Column26";
			this->Column26->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column26->Width = 25;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"25";
			this->Column27->Name = L"Column27";
			this->Column27->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column27->Width = 25;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"26";
			this->Column28->Name = L"Column28";
			this->Column28->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column28->Width = 25;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"27";
			this->Column29->Name = L"Column29";
			this->Column29->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column29->Width = 25;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"28";
			this->Column30->Name = L"Column30";
			this->Column30->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column30->Width = 25;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"29";
			this->Column31->Name = L"Column31";
			this->Column31->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column31->Width = 25;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"30";
			this->Column32->Name = L"Column32";
			this->Column32->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column32->Width = 25;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"31";
			this->Column33->Name = L"Column33";
			this->Column33->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column33->Width = 25;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"ÂÑÅÃÎ";
			this->Column34->Name = L"Column34";
			this->Column34->ReadOnly = true;
			this->Column34->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column34->Width = 50;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Ïî Áîëåçíè";
			this->Column35->Name = L"Column35";
			this->Column35->ReadOnly = true;
			this->Column35->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column35->Width = 95;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Óâàæèòåëüíûõ";
			this->Column36->Name = L"Column36";
			this->Column36->ReadOnly = true;
			this->Column36->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column36->Width = 90;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Íå Óâàæ.";
			this->Column37->Name = L"Column37";
			this->Column37->ReadOnly = true;
			this->Column37->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column37->Width = 80;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ÍÓ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(110, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ÓÂ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(210, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Á";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(981, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1056, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1148, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1220, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->äåéñòâèÿToolStripMenuItem, this->äîïîëíèòåëüíîToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1337, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->toolStripMenuItem2, this->ñîõğàíèòüToolStripMenuItem, this->toolStripMenuItem1, this->ıêñïîğòToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òàáëèöóToolStripMenuItem,
					this->øàáëîíToolStripMenuItem
			});
			this->ñîçäàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripMenuItem.Image")));
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// òàáëèöóToolStripMenuItem
			// 
			this->òàáëèöóToolStripMenuItem->Name = L"òàáëèöóToolStripMenuItem";
			this->òàáëèöóToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->òàáëèöóToolStripMenuItem->Text = L"Òàáëèöó";
			this->òàáëèöóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::òàáëèöóToolStripMenuItem_Click);
			// 
			// øàáëîíToolStripMenuItem
			// 
			this->øàáëîíToolStripMenuItem->Name = L"øàáëîíToolStripMenuItem";
			this->øàáëîíToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->øàáëîíToolStripMenuItem->Text = L"Øàáëîí";
			this->øàáëîíToolStripMenuItem->Visible = false;
			this->øàáëîíToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øàáëîíToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripMenuItem.Image")));
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(223, 6);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripMenuItem.Image")));
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü êàê";
			this->ñîõğàíèòüToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(223, 6);
			this->toolStripMenuItem1->Visible = false;
			// 
			// ıêñïîğòToolStripMenuItem
			// 
			this->ıêñïîğòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pDFToolStripMenuItem,
					this->dOCXToolStripMenuItem
			});
			this->ıêñïîğòToolStripMenuItem->Name = L"ıêñïîğòToolStripMenuItem";
			this->ıêñïîğòToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->ıêñïîğòToolStripMenuItem->Text = L"İêñïîğò";
			this->ıêñïîğòToolStripMenuItem->Visible = false;
			// 
			// pDFToolStripMenuItem
			// 
			this->pDFToolStripMenuItem->Name = L"pDFToolStripMenuItem";
			this->pDFToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->pDFToolStripMenuItem->Text = L"*.PDF";
			// 
			// dOCXToolStripMenuItem
			// 
			this->dOCXToolStripMenuItem->Name = L"dOCXToolStripMenuItem";
			this->dOCXToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->dOCXToolStripMenuItem->Text = L"*.DOCX";
			// 
			// äåéñòâèÿToolStripMenuItem
			// 
			this->äåéñòâèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->ïîäñ÷èòàòüToolStripMenuItem,
					this->î÷èñòèòüToolStripMenuItem, this->toolStripSeparator1, this->äîáàâèòüÂûõîäíîéToolStripMenuItem, this->óäàëèòüÂûõîäíîéToolStripMenuItem,
					this->toolStripSeparator2, this->äîáàâèòü×åëîâåêàToolStripMenuItem, this->óäàëèòü×åëîâåêàToolStripMenuItem
			});
			this->äåéñòâèÿToolStripMenuItem->Name = L"äåéñòâèÿToolStripMenuItem";
			this->äåéñòâèÿToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèÿToolStripMenuItem->Text = L"Äåéñòâèÿ";
			// 
			// ïîäñ÷èòàòüToolStripMenuItem
			// 
			this->ïîäñ÷èòàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïîäñ÷èòàòüToolStripMenuItem.Image")));
			this->ïîäñ÷èòàòüToolStripMenuItem->Name = L"ïîäñ÷èòàòüToolStripMenuItem";
			this->ïîäñ÷èòàòüToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F12;
			this->ïîäñ÷èòàòüToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->ïîäñ÷èòàòüToolStripMenuItem->Text = L"Ïîäñ÷èòàòü";
			this->ïîäñ÷èòàòüToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ïîäñ÷èòàòüToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->ïîäñ÷èòàòüToolStripMenuItem->ToolTipText = L"Ïîäñ÷èòàòü îáùåå êîëè÷åñòâî ïğîïóñêîâ";
			this->ïîäñ÷èòàòüToolStripMenuItem->Visible = false;
			this->ïîäñ÷èòàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîäñ÷èòàòüToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"î÷èñòèòüToolStripMenuItem.Image")));
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->ToolTipText = L"Î÷èñòèòü âñå ïğîïóñêè";
			this->î÷èñòèòüToolStripMenuItem->Visible = false;
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(246, 6);
			this->toolStripSeparator1->Visible = false;
			// 
			// äîáàâèòüÂûõîäíîéToolStripMenuItem
			// 
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"äîáàâèòüÂûõîäíîéToolStripMenuItem.Image")));
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Name = L"äîáàâèòüÂûõîäíîéToolStripMenuItem";
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Space));
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Text = L"Äîáàâèòü âûõîäíîé";
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Visible = false;
			this->äîáàâèòüÂûõîäíîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîáàâèòüÂûõîäíîéToolStripMenuItem_Click);
			// 
			// óäàëèòüÂûõîäíîéToolStripMenuItem
			// 
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"óäàëèòüÂûõîäíîéToolStripMenuItem.Image")));
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Name = L"óäàëèòüÂûõîäíîéToolStripMenuItem";
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Delete));
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Text = L"Óäàëèòü âûõîäíîé";
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Visible = false;
			this->óäàëèòüÂûõîäíîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óäàëèòüÂûõîäíîéToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(246, 6);
			this->toolStripSeparator2->Visible = false;
			// 
			// äîáàâèòü×åëîâåêàToolStripMenuItem
			// 
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"äîáàâèòü×åëîâåêàToolStripMenuItem.Image")));
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Name = L"äîáàâèòü×åëîâåêàToolStripMenuItem";
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Text = L"Äîáàâèòü ÷åëîâåêà";
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->ToolTipText = L"Äîáàâëÿåò ñòğîêó";
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Visible = false;
			this->äîáàâèòü×åëîâåêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîáàâèòü×åëîâåêàToolStripMenuItem_Click);
			// 
			// óäàëèòü×åëîâåêàToolStripMenuItem
			// 
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"óäàëèòü×åëîâåêàToolStripMenuItem.Image")));
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Name = L"óäàëèòü×åëîâåêàToolStripMenuItem";
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Size = System::Drawing::Size(249, 22);
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Text = L"Óäàëèòü ÷åëîâåêà";
			this->óäàëèòü×åëîâåêàToolStripMenuItem->ToolTipText = L"Óäàëÿåò óêàçàííóş ñòğîêó";
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Visible = false;
			this->óäàëèòü×åëîâåêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óäàëèòü×åëîâåêàToolStripMenuItem_Click);
			// 
			// äîïîëíèòåëüíîToolStripMenuItem
			// 
			this->äîïîëíèòåëüíîToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->çåë¸íûé0ToolStripMenuItem,
					this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem, this->íåÓâÎòÂÑÅÃÎToolStripMenuItem, this->ëîãèğîâàíèåToolStripMenuItem
			});
			this->äîïîëíèòåëüíîToolStripMenuItem->Name = L"äîïîëíèòåëüíîToolStripMenuItem";
			this->äîïîëíèòåëüíîToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->äîïîëíèòåëüíîToolStripMenuItem->Text = L"Äîïîëíèòåëüíî";
			// 
			// çåë¸íûé0ToolStripMenuItem
			// 
			this->çåë¸íûé0ToolStripMenuItem->CheckOnClick = true;
			this->çåë¸íûé0ToolStripMenuItem->Name = L"çåë¸íûé0ToolStripMenuItem";
			this->çåë¸íûé0ToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->çåë¸íûé0ToolStripMenuItem->Text = L"Çåë¸íûé 0";
			// 
			// óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem
			// 
			this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem->Name = L"óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem";
			this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem->Text = L"Óáğàòü çåë¸íûå ñòğîêè";
			this->óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem_Click);
			// 
			// íåÓâÎòÂÑÅÃÎToolStripMenuItem
			// 
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->Checked = true;
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->CheckOnClick = true;
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->Name = L"íåÓâÎòÂÑÅÃÎToolStripMenuItem";
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->íåÓâÎòÂÑÅÃÎToolStripMenuItem->Text = L"% ÍåÓâ îò ÂÑÅÃÎ";
			// 
			// ëîãèğîâàíèåToolStripMenuItem
			// 
			this->ëîãèğîâàíèåToolStripMenuItem->CheckOnClick = true;
			this->ëîãèğîâàíèåToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ëîãèğîâàíèåToolStripMenuItem->Name = L"ëîãèğîâàíèåToolStripMenuItem";
			this->ëîãèğîâàíèåToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->ëîãèğîâàíèåToolStripMenuItem->Text = L"Àóäèò";
			this->ëîãèğîâàíèåToolStripMenuItem->Visible = false;
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îÏğîãğàììåToolStripMenuItem,
					this->ïîìîùüToolStripMenuItem
			});
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// ïîìîùüToolStripMenuItem
			// 
			this->ïîìîùüToolStripMenuItem->Name = L"ïîìîùüToolStripMenuItem";
			this->ïîìîùüToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->ïîìîùüToolStripMenuItem->Text = L"Ïîìîùü";
			this->ïîìîùüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîìîùüToolStripMenuItem_Click);
			// 
			// groupBoxCreate
			// 
			this->groupBoxCreate->Controls->Add(this->dateTimePicker1);
			this->groupBoxCreate->Controls->Add(this->label5);
			this->groupBoxCreate->Controls->Add(this->button5);
			this->groupBoxCreate->Controls->Add(this->button4);
			this->groupBoxCreate->Controls->Add(this->textBox2);
			this->groupBoxCreate->Controls->Add(this->label10);
			this->groupBoxCreate->Controls->Add(this->textBox1);
			this->groupBoxCreate->Controls->Add(this->label9);
			this->groupBoxCreate->Location = System::Drawing::Point(511, 85);
			this->groupBoxCreate->Name = L"groupBoxCreate";
			this->groupBoxCreate->Size = System::Drawing::Size(238, 216);
			this->groupBoxCreate->TabIndex = 13;
			this->groupBoxCreate->TabStop = false;
			this->groupBoxCreate->Text = L"Ñîçäàíèå òàáëèöû";
			this->groupBoxCreate->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(10, 150);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(110, 20);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ìåñÿö:";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(152, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Îòìåíà";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(10, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Ñîçäàòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(10, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Íàçâàíèå îğã\\ãğóïïû\\êëàññà";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Êîëè÷åñòâî ÷åëîâåê:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(577, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 33);
			this->label6->TabIndex = 14;
			this->label6->Text = L"[]";
			this->label6->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1337, 861);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBoxCreate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1353, 900);
			this->MinimumSize = System::Drawing::Size(1353, 900);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Æóğíàë ïîñåùàåìîñòè";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxCreate->ResumeLayout(false);
			this->groupBoxCreate->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
public:
	Decimal AmountOfPeople;		//Ãëîáàëüíàÿ ïåğåìåííàÿ êîëè÷åñòâà ÷åëîâåê
	Decimal ERRORSCOUNT;			//Ïîäñ÷¸ò îøèáîê

public:
	void CreateTable(int Amount, String^ NameOfOrg, int date);							//Ñîçäàíèå òàáëèöû

private:
	int		CurrRowOld;
	int		CurrColOld;
	int		CurrRowNew;
	int		CurrColNew;

	String^ PATH;								//Ïóòü ê ôàéëó
	int changeamount;							//×èñëî èçìåíåíèé

	/*  FUNCTIONS  */

	void ClearAllTable();						//Î÷èñòêà òàáëèöû
	
	void NulledCells();							//Îáíóëåíèå ÿ÷ååê
	void DisplayTable();						//Îòîáğàçèòü òàáëèöó

	void ÑountMain();							//Îáùèé ïîäñ÷¸ò
	void DeleteCell();							//Óäàëèòü ÿ÷åéêó

	void SaveAs();								//Ñîõğàíèòü êàê (Ctrl + Shift + S)
	//void Save();								//Ñîõğàíèòü (Ctrl + S)

	void AddWeekend();							//Äîáàâèòü âûõîäíûå
	void DelWeekend();							//Óäàëèòü âûõîäíûå

	bool isNull(int i, int j);					//Ïğîâåğêà íà ïóñòîòó, ïğèíèìàåò â ñåáÿ çíà÷åíèÿ ñòîëáöà è ñòğîêè ÿ÷åéêè
	bool isError();								//Ïğîâåğêà íà îøèáêè

	int  CheckColor(const Color &backcolor);	//Ïğîâåğêà öâåòà ÿ÷åéêè, ïğèíèìàåò â ñåáÿ çíà÷åíèÿ ñòîëáöà è ñòğîêè ÿ÷åéêè
	void EventColor(const Color &colorbutton);  //Îêğàñêà ÿ÷åéêè â öâåò êíîïêè

	void SetColor(int i, int j, const Color& newColor);
	void SetColor(const Color& newColor);

	void SetValueCell(const int & newValue);
	void SetValueCell(int i, int j, const int& newValue);

	void SetNullCell();
	void SetNullCell(int i, int j);

	Color getColorCell(int i, int j);
	Color getColorCell();

	int   getValueCell(int i, int j);
	int   getValueCell();

	String^ getMonth(const int date);

	/****   EVENTS   ****/
	void button1_Click(Object^ sender, EventArgs^ e);
	void button2_Click(Object^ sender, EventArgs^ e);
	void button3_Click(Object^ sender, EventArgs^ e);

	void îòêğûòüToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void ñîõğàíèòüToolStripMenuItem1_Click(Object^ sender, EventArgs^ e);

	void ïîäñ÷èòàòüToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void î÷èñòèòüToolStripMenuItem_Click(Object^ sender, EventArgs^ e);

	void îÏğîãğàììåToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void ïîìîùüToolStripMenuItem_Click(Object^ sender, EventArgs^ e);

	void button4_Click(Object^ sender, EventArgs^ e);
	void button5_Click(Object^ sender, EventArgs^ e);

	void textBox1_KeyPress(Object^ sender, KeyPressEventArgs^ e);
	void textBox3_KeyPress(Object^ sender, KeyPressEventArgs^ e);

	void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e);
	void MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e);
	void MyForm_Load(Object^ sender, EventArgs^ e);

	void dataGridView1_CellEndEdit(Object^ sender, DataGridViewCellEventArgs^ e);
	void dataGridView1_CellValueChanged(Object^ sender, DataGridViewCellEventArgs^ e);
	void dataGridView1_SelectionChanged(Object^ sender, EventArgs^ e);

	void äîáàâèòüÂûõîäíîéToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void óäàëèòüÂûõîäíîéToolStripMenuItem_Click(Object^ sender, EventArgs^ e);

	void äîáàâèòü×åëîâåêàToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void óäàëèòü×åëîâåêàToolStripMenuItem_Click(Object^ sender, EventArgs^ e);

	void óáğàòüÇåë¸íûåÑòğîêèToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
	void òàáëèöóToolStripMenuItem_Click(Object^ sender, EventArgs^ e);

	void øàáëîíToolStripMenuItem_Click(Object^ sender, EventArgs^ e);
}; //end class
}  //end namespace