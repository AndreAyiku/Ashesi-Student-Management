#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ searchTextbox;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ studentManagementGridView;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Level;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Program;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ GPA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Faculty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FacultyName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;




























	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->searchTextbox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->studentManagementGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Level = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Program = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Faculty = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FacultyName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentManagementGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-5, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(355, 1488);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(32, 900);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(303, 87);
			this->button4->TabIndex = 4;
			this->button4->Text = L"REPORTS";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(32, 750);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(303, 74);
			this->button3->TabIndex = 3;
			this->button3->Text = L"FACULTY";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(32, 576);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(303, 88);
			this->button2->TabIndex = 2;
			this->button2->Text = L"STUDENTS";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(32, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(303, 85);
			this->button1->TabIndex = 1;
			this->button1->Text = L"DASHBOARD";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 308);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminDashboard::pictureBox1_Click);
			// 
			// searchTextbox
			// 
			this->searchTextbox->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->searchTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchTextbox->Location = System::Drawing::Point(370, 83);
			this->searchTextbox->Multiline = true;
			this->searchTextbox->Name = L"searchTextbox";
			this->searchTextbox->Size = System::Drawing::Size(427, 70);
			this->searchTextbox->TabIndex = 1;
			this->searchTextbox->Text = L"Enter Keywords...";
			this->searchTextbox->TextChanged += gcnew System::EventHandler(this, &AdminDashboard::searchTextbox_TextChanged);
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::SystemColors::Menu;
			this->searchButton->Location = System::Drawing::Point(780, 83);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(100, 70);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"search";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &AdminDashboard::searchButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20));
			this->label1->Location = System::Drawing::Point(576, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(809, 61);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ADMINISTRATOR DASHBOARD";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1485, 1344);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 79);
			this->button5->TabIndex = 4;
			this->button5->Text = L"LOGOUT";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminDashboard::button5_Click);
			// 
			// studentManagementGridView
			// 
			this->studentManagementGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentManagementGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID,
					this->Name, this->Level, this->Program, this->Date, this->GPA
			});
			this->studentManagementGridView->Location = System::Drawing::Point(0, 64);
			this->studentManagementGridView->Name = L"studentManagementGridView";
			this->studentManagementGridView->RowHeadersWidth = 82;
			this->studentManagementGridView->RowTemplate->Height = 33;
			this->studentManagementGridView->Size = System::Drawing::Size(1207, 275);
			this->studentManagementGridView->TabIndex = 5;
			this->studentManagementGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminDashboard::studentManagementGridView_CellContentClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Faculty,
					this->FacultyName, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 411);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1173, 320);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminDashboard::dataGridView1_CellContentClick_1);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Student ID";
			this->ID->MinimumWidth = 10;
			this->ID->Name = L"ID";
			this->ID->Width = 200;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->MinimumWidth = 10;
			this->Name->Name = L"Name";
			this->Name->Width = 200;
			// 
			// Level
			// 
			this->Level->HeaderText = L"Grade Level";
			this->Level->MinimumWidth = 10;
			this->Level->Name = L"Level";
			this->Level->Width = 200;
			// 
			// Program
			// 
			this->Program->HeaderText = L"Program";
			this->Program->MinimumWidth = 10;
			this->Program->Name = L"Program";
			this->Program->Width = 200;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Enrollment Date";
			this->Date->MinimumWidth = 10;
			this->Date->Name = L"Date";
			this->Date->Width = 200;
			// 
			// GPA
			// 
			this->GPA->HeaderText = L"GPA";
			this->GPA->MinimumWidth = 10;
			this->GPA->Name = L"GPA";
			this->GPA->Width = 200;
			// 
			// Faculty
			// 
			this->Faculty->HeaderText = L"Faculty ID";
			this->Faculty->MinimumWidth = 10;
			this->Faculty->Name = L"Faculty";
			this->Faculty->Width = 200;
			// 
			// FacultyName
			// 
			this->FacultyName->HeaderText = L"Column1";
			this->FacultyName->MinimumWidth = 10;
			this->FacultyName->Name = L"FacultyName";
			this->FacultyName->Width = 200;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Department";
			this->Column2->MinimumWidth = 10;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Position";
			this->Column3->MinimumWidth = 10;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 200;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Hire Date";
			this->Column4->MinimumWidth = 10;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Courses Taught";
			this->Column5->MinimumWidth = 10;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 200;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label2->Location = System::Drawing::Point(351, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(495, 46);
			this->label2->TabIndex = 7;
			this->label2->Text = L"STUDENT MANAGEMENT";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label3->Location = System::Drawing::Point(383, 362);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(491, 46);
			this->label3->TabIndex = 8;
			this->label3->Text = L"FACULTY MANAGEMENT";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->studentManagementGridView);
			this->panel2->Location = System::Drawing::Point(356, 203);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1245, 824);
			this->panel2->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(400, 1030);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(298, 174);
			this->panel4->TabIndex = 11;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel4_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(1125, 1030);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(302, 174);
			this->panel5->TabIndex = 12;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel5_Paint);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(400, 1226);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(298, 201);
			this->panel6->TabIndex = 13;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel6_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->label5);
			this->panel7->Location = System::Drawing::Point(768, 1030);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(317, 174);
			this->panel7->TabIndex = 14;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Controls->Add(this->label8);
			this->panel8->Location = System::Drawing::Point(771, 1226);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(317, 201);
			this->panel8->TabIndex = 15;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Controls->Add(this->label9);
			this->panel9->Location = System::Drawing::Point(1112, 1222);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(338, 201);
			this->panel9->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 55);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Total Students";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label5->Location = System::Drawing::Point(-1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(315, 55);
			this->label5->TabIndex = 0;
			this->label5->Text = L"New   Students";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label6->Location = System::Drawing::Point(4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(295, 55);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Total   Faculty";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label7->Location = System::Drawing::Point(-5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(303, 55);
			this->label7->TabIndex = 0;
			this->label7->Text = L"New    Faculty";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label8->Location = System::Drawing::Point(6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(308, 55);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Average   GPA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label9->Location = System::Drawing::Point(3, 4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(335, 55);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Graduation Rate";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Location = System::Drawing::Point(624, 737);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(281, 81);
			this->button6->TabIndex = 6;
			this->button6->Text = L"ADD STUDENT";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->Location = System::Drawing::Point(933, 737);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(274, 72);
			this->button7->TabIndex = 7;
			this->button7->Text = L"ADD FACULTY";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1613, 1426);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->searchTextbox);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentManagementGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void searchTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void studentManagementGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
