#pragma once

namespace AddAttendance {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml::Serialization; //												try
	using namespace System::IO; //																try
	using namespace System::Data::SqlClient;      //											try


	/// <summary>
	/// Summary for Attendance
	/// </summary>
	public ref class Attendance : public System::Windows::Forms::Form
	{
	public:
		Attendance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Attendance()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;













	private: System::Windows::Forms::Panel^ panel5;
























	private: System::Windows::Forms::Label^ label1;











	private: System::Windows::Forms::TextBox^ txbMiddleInitial;
	private: System::Windows::Forms::TextBox^ txbFirstName;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txbLastName;
	private: System::Windows::Forms::DomainUpDown^ dudLogs;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




















	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ txbStudentID;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ btnDelete;
private: System::Windows::Forms::ComboBox^ cmbCourse;
private: System::Windows::Forms::ComboBox^ cmbSection;




private: System::Windows::Forms::ComboBox^ cmbYear;











private: System::Windows::Forms::Label^ lblTime;









private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ lblDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Log;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Middle_Initial;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Course1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Year1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Section1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Student_Number;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::ComponentModel::IContainer^ components;



























































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Log = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Middle_Initial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Course1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Student_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbMiddleInitial = (gcnew System::Windows::Forms::TextBox());
			this->txbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txbLastName = (gcnew System::Windows::Forms::TextBox());
			this->dudLogs = (gcnew System::Windows::Forms::DomainUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txbStudentID = (gcnew System::Windows::Forms::TextBox());
			this->cmbCourse = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSection = (gcnew System::Windows::Forms::ComboBox());
			this->cmbYear = (gcnew System::Windows::Forms::ComboBox());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1000, 36);
			this->panel2->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->btnDelete);
			this->panel5->Controls->Add(this->dataGridView1);
			this->panel5->Location = System::Drawing::Point(0, 37);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(600, 483);
			this->panel5->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(98, 417);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 42);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Attendance::button3_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold));
			this->btnDelete->Location = System::Drawing::Point(375, 416);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(114, 43);
			this->btnDelete->TabIndex = 19;
			this->btnDelete->Text = L"Delete";
			this->toolTip1->SetToolTip(this->btnDelete, L"The Selected row will be Deleted");
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Attendance::btnDelete_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Log, this->LastName,
					this->FirstName, this->Middle_Initial, this->Course1, this->Year1, this->Section1, this->Student_Number, this->Date1, this->Time
			});
			this->dataGridView1->Location = System::Drawing::Point(10, 82);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(587, 206);
			this->dataGridView1->TabIndex = 18;
			// 
			// Log
			// 
			this->Log->HeaderText = L"Log";
			this->Log->Name = L"Log";
			this->Log->ReadOnly = true;
			// 
			// LastName
			// 
			this->LastName->HeaderText = L"Last Name";
			this->LastName->Name = L"LastName";
			this->LastName->ReadOnly = true;
			// 
			// FirstName
			// 
			this->FirstName->HeaderText = L"First Name";
			this->FirstName->Name = L"FirstName";
			this->FirstName->ReadOnly = true;
			// 
			// Middle_Initial
			// 
			this->Middle_Initial->HeaderText = L"Middle Initial";
			this->Middle_Initial->Name = L"Middle_Initial";
			this->Middle_Initial->ReadOnly = true;
			// 
			// Course1
			// 
			this->Course1->HeaderText = L"Course";
			this->Course1->Name = L"Course1";
			this->Course1->ReadOnly = true;
			// 
			// Year1
			// 
			this->Year1->HeaderText = L"Year";
			this->Year1->Name = L"Year1";
			this->Year1->ReadOnly = true;
			// 
			// Section1
			// 
			this->Section1->HeaderText = L"Section";
			this->Section1->Name = L"Section1";
			this->Section1->ReadOnly = true;
			// 
			// Student_Number
			// 
			this->Student_Number->HeaderText = L"ID Number";
			this->Student_Number->Name = L"Student_Number";
			this->Student_Number->ReadOnly = true;
			// 
			// Date1
			// 
			this->Date1->HeaderText = L"Date ";
			this->Date1->Name = L"Date1";
			this->Date1->ReadOnly = true;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(637, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 22);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Last Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txbMiddleInitial
			// 
			this->txbMiddleInitial->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txbMiddleInitial->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbMiddleInitial->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbMiddleInitial->Location = System::Drawing::Point(766, 178);
			this->txbMiddleInitial->Name = L"txbMiddleInitial";
			this->txbMiddleInitial->Size = System::Drawing::Size(208, 22);
			this->txbMiddleInitial->TabIndex = 26;
			// 
			// txbFirstName
			// 
			this->txbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txbFirstName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbFirstName->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFirstName->Location = System::Drawing::Point(766, 140);
			this->txbFirstName->Name = L"txbFirstName";
			this->txbFirstName->Size = System::Drawing::Size(208, 22);
			this->txbFirstName->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(669, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 22);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Section";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(618, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 22);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Middle Initial";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(674, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 22);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Course";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(702, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Log";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(635, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"First Name";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(694, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 22);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Year";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txbLastName
			// 
			this->txbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txbLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbLastName->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbLastName->Location = System::Drawing::Point(766, 96);
			this->txbLastName->Name = L"txbLastName";
			this->txbLastName->Size = System::Drawing::Size(208, 22);
			this->txbLastName->TabIndex = 24;
			// 
			// dudLogs
			// 
			this->dudLogs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dudLogs->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dudLogs->Items->Add(L"IN");
			this->dudLogs->Items->Add(L"OUT");
			this->dudLogs->Location = System::Drawing::Point(766, 366);
			this->dudLogs->Name = L"dudLogs";
			this->dudLogs->Size = System::Drawing::Size(208, 29);
			this->dudLogs->TabIndex = 19;
			this->dudLogs->Text = L"IN";
			this->dudLogs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(706, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 53);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Attendance::button1_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(632, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 22);
			this->label8->TabIndex = 31;
			this->label8->Text = L"ID Number";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txbStudentID
			// 
			this->txbStudentID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->txbStudentID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbStudentID->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbStudentID->Location = System::Drawing::Point(766, 218);
			this->txbStudentID->Name = L"txbStudentID";
			this->txbStudentID->Size = System::Drawing::Size(208, 22);
			this->txbStudentID->TabIndex = 32;
			// 
			// cmbCourse
			// 
			this->cmbCourse->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cmbCourse->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmbCourse->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F));
			this->cmbCourse->FormattingEnabled = true;
			this->cmbCourse->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"BS in Coputer Engineering", L"BS in Nursing",
					L"BS in Business Administration"
			});
			this->cmbCourse->Location = System::Drawing::Point(766, 258);
			this->cmbCourse->Name = L"cmbCourse";
			this->cmbCourse->Size = System::Drawing::Size(208, 30);
			this->cmbCourse->TabIndex = 33;
			// 
			// cmbSection
			// 
			this->cmbSection->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cmbSection->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->cmbSection->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F));
			this->cmbSection->FormattingEnabled = true;
			this->cmbSection->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"B", L"C", L"D" });
			this->cmbSection->Location = System::Drawing::Point(766, 330);
			this->cmbSection->Name = L"cmbSection";
			this->cmbSection->Size = System::Drawing::Size(208, 30);
			this->cmbSection->TabIndex = 34;
			// 
			// cmbYear
			// 
			this->cmbYear->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cmbYear->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cmbYear->Font = (gcnew System::Drawing::Font(L"RomanD", 11.25F));
			this->cmbYear->FormattingEnabled = true;
			this->cmbYear->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1st", L"2nd", L"3rd", L"4th" });
			this->cmbYear->Location = System::Drawing::Point(766, 295);
			this->cmbYear->Name = L"cmbYear";
			this->cmbYear->Size = System::Drawing::Size(208, 30);
			this->cmbYear->TabIndex = 35;
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Font = (gcnew System::Drawing::Font(L"RomanD", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(606, 59);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(43, 19);
			this->lblTime->TabIndex = 37;
			this->lblTime->Text = L"Time";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Attendance::timer1_Tick);
			// 
			// lblDate
			// 
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"RomanD", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(606, 39);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(41, 19);
			this->lblDate->TabIndex = 38;
			this->lblDate->Text = L"Date";
			// 
			// Attendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 516);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->cmbYear);
			this->Controls->Add(this->cmbSection);
			this->Controls->Add(this->cmbCourse);
			this->Controls->Add(this->txbStudentID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txbMiddleInitial);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txbFirstName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dudLogs);
			this->Controls->Add(this->txbLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Name = L"Attendance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Attendance";
			this->Load += gcnew System::EventHandler(this, &Attendance::Attendance_Load);
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//private: System::Void btnAddRows_Click(System::Object^ sender, System::EventArgs^ e) {
//	dataGridView1->Rows->Add();
//}
		DateTime now = DateTime::Now;
		String^ dateString = now.ToString("");
		int rowIndex;

//private : 
//	void iDelete()
//		{
//		hello
//		}

	private:
		void iDelete()
		{
			rowIndex = dataGridView1->CurrentCell->RowIndex;
			dataGridView1->Rows->RemoveAt(rowIndex);


			/*if ()
			{
				
			}*/
		}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	lblTime->Text = DateTime::Now.ToLongTimeString();
	timer1->Start();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (txbLastName->Text == "")
	{
		txbLastName->Text == dataGridView1->Name;
	}*/
	dataGridView1->Rows->Add(dudLogs->Text, txbLastName->Text, txbFirstName->Text, txbMiddleInitial->Text, cmbCourse->Text, cmbYear->Text, cmbSection->Text, txbStudentID->Text, lblDate->Text, lblTime->Text);
}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		iDelete();
	}
	private: System::Void Attendance_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		/*lblDate->Text = DateTime->Now->ToLongDateString();*/
		//lblDate->Text = /* DateTime::Hour->ToString();*/ dateString = now.ToString("MM");
		
		lblTime->Text = DateTime::Now.ToLongTimeString(); //dateString =

		lblDate->Text = dateString = now.ToLongDateString();

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//	Microsoft

	//Microsoft->Office.Interop.Excel.Application app = new Microsoft.Office.Interop.Excel.Application();
	//Microsoft.Office.Interop.Excel.Workbook workbook app.Workbooks.Add(Type.Missing);
	//Microsoft.0ffice.Interop.Excel.Worksheet worksheet = null;
	//app.Visible = true;
	//worksheet = workbook.Sheets["Sheet1"];
	//worksheet = workbook.ActiveSheet;
	//worksheet.Name = "Exported from gridview";
	//for (int i = 1; i < dataGridView1.Columns.Count + 1; i++)
	//{
	//	worksheet.Cells[1, i] = dataGridView1.Columns[i - 1].HeaderText;
	//}
	//for (int i = 0; i < dataGridView1.Rows.Count - 1; i++)
	//{
	//	for (int j = e; j < dataGridView1.Columns.Count; j++)
	//	{
	//		worksheet.Cells[i + 2, j + 1] = dataGridView1.Rows[i].Cells[j].Value.ToString();
	//	}
	//}
}
};
}
