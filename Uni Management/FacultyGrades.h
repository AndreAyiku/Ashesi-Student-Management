#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyGrades
	/// </summary>
	public ref class FacultyGrades : public System::Windows::Forms::Form
	{
	public:
		FacultyGrades(void)
		{
			InitializeComponent();
			// Initialize any other components if necessary
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyGrades()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		// UI components
	private: System::Windows::Forms::Panel^ sidebarPanel;
	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Button^ btnSaveGrades;
	private: System::Windows::Forms::ComboBox^ cbCourseSelection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dgvGrades;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacultyGrades::typeid));
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->btnSaveGrades = (gcnew System::Windows::Forms::Button());
			   this->cbCourseSelection = (gcnew System::Windows::Forms::ComboBox());
			   this->dgvGrades = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGrades))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // sidebarPanel
			   // 
			   this->sidebarPanel->BackColor = System::Drawing::Color::Maroon;
			   this->sidebarPanel->Controls->Add(this->pictureBox1);
			   this->sidebarPanel->Controls->Add(this->btnDashboard);
			   this->sidebarPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->sidebarPanel->Location = System::Drawing::Point(0, 0);
			   this->sidebarPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->sidebarPanel->Name = L"sidebarPanel";
			   this->sidebarPanel->Size = System::Drawing::Size(300, 991);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F));
			   this->btnDashboard->ForeColor = System::Drawing::Color::White;
			   this->btnDashboard->Location = System::Drawing::Point(13, 892);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(210, 78);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = true;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FacultyGrades::btnDashboard_Click);
			   // 
			   // btnSaveGrades
			   // 
			   this->btnSaveGrades->BackColor = System::Drawing::Color::Maroon;
			   this->btnSaveGrades->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSaveGrades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->btnSaveGrades->ForeColor = System::Drawing::Color::White;
			   this->btnSaveGrades->Location = System::Drawing::Point(1221, 900);
			   this->btnSaveGrades->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnSaveGrades->Name = L"btnSaveGrades";
			   this->btnSaveGrades->Size = System::Drawing::Size(176, 70);
			   this->btnSaveGrades->TabIndex = 1;
			   this->btnSaveGrades->Text = L"Save Grades";
			   this->btnSaveGrades->UseVisualStyleBackColor = false;
			   this->btnSaveGrades->Click += gcnew System::EventHandler(this, &FacultyGrades::btnSaveGrades_Click);
			   // 
			   // cbCourseSelection
			   // 
			   this->cbCourseSelection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->cbCourseSelection->FormattingEnabled = true;
			   this->cbCourseSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Math 101", L"Physics 102", L"Chemistry 103" });
			   this->cbCourseSelection->Location = System::Drawing::Point(298, 0);
			   this->cbCourseSelection->Name = L"cbCourseSelection";
			   this->cbCourseSelection->Size = System::Drawing::Size(300, 45);
			   this->cbCourseSelection->TabIndex = 2;
			   // 
			   // dgvGrades
			   // 
			   this->dgvGrades->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvGrades->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			   });
			   this->dgvGrades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->dgvGrades->Location = System::Drawing::Point(298, 41);
			   this->dgvGrades->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dgvGrades->Name = L"dgvGrades";
			   this->dgvGrades->RowHeadersWidth = 82;
			   this->dgvGrades->Size = System::Drawing::Size(1099, 856);
			   this->dgvGrades->TabIndex = 3;
			   this->dgvGrades->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FacultyGrades::dgvGrades_CellContentClick);
			   // 
			   // dataGridViewTextBoxColumn1
			   // 
			   this->dataGridViewTextBoxColumn1->HeaderText = L"Student ID";
			   this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			   this->dataGridViewTextBoxColumn1->Width = 200;
			   // 
			   // dataGridViewTextBoxColumn2
			   // 
			   this->dataGridViewTextBoxColumn2->HeaderText = L"Student Name";
			   this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			   this->dataGridViewTextBoxColumn2->Width = 200;
			   // 
			   // dataGridViewTextBoxColumn3
			   // 
			   this->dataGridViewTextBoxColumn3->HeaderText = L"Grade";
			   this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			   this->dataGridViewTextBoxColumn3->Width = 200;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(30, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(228, 205);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // FacultyGrades
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1400, 991);
			   this->Controls->Add(this->cbCourseSelection);
			   this->Controls->Add(this->btnSaveGrades);
			   this->Controls->Add(this->dgvGrades);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"FacultyGrades";
			   this->Text = L"Faculty Grades";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGrades))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // Button Click Event Handlers

		   // Navigate back to the Faculty Dashboard
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Navigating to Faculty Dashboard");
	}

		   // Save the entered grades (functionality to be implemented)
	private: System::Void btnSaveGrades_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Placeholder for saving grades to backend
		MessageBox::Show("Grades have been saved!");

		// Here you would send the grades from the DataGridView to the backend to store them in the database
		// Example: Loop through DataGridView rows and send the data to the backend system for storage.
	}
	private: System::Void dgvGrades_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
