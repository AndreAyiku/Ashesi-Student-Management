#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for facaccessRoster
	/// </summary>
	public ref class facaccessRoster : public System::Windows::Forms::Form
	{
	public:
		facaccessRoster(void)
		{
			InitializeComponent();
			// Add additional initialization if needed
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~facaccessRoster()
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
	private: System::Windows::Forms::Button^ btnSelectCourse;
	private: System::Windows::Forms::ComboBox^ cbCourseSelection;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridView^ dgvRoster;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->btnSelectCourse = (gcnew System::Windows::Forms::Button());
			   this->cbCourseSelection = (gcnew System::Windows::Forms::ComboBox());
			   this->dgvRoster = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // sidebarPanel
			   // 
			   this->sidebarPanel->BackColor = System::Drawing::Color::Firebrick;
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
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnDashboard->ForeColor = System::Drawing::Color::White;
			   this->btnDashboard->Location = System::Drawing::Point(45, 62);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(210, 78);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"Dashboard";
			   this->btnDashboard->UseVisualStyleBackColor = true;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &facaccessRoster::btnDashboard_Click);
			   // 
			   // btnSelectCourse
			   // 
			   this->btnSelectCourse->BackColor = System::Drawing::Color::Crimson;
			   this->btnSelectCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSelectCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnSelectCourse->ForeColor = System::Drawing::Color::White;
			   this->btnSelectCourse->Location = System::Drawing::Point(308, 56);
			   this->btnSelectCourse->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnSelectCourse->Name = L"btnSelectCourse";
			   this->btnSelectCourse->Size = System::Drawing::Size(299, 55);
			   this->btnSelectCourse->TabIndex = 1;
			   this->btnSelectCourse->Text = L"Select Course";
			   this->btnSelectCourse->UseVisualStyleBackColor = false;
			   this->btnSelectCourse->Click += gcnew System::EventHandler(this, &facaccessRoster::btnSelectCourse_Click);
			   // 
			   // cbCourseSelection
			   // 
			   this->cbCourseSelection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->cbCourseSelection->FormattingEnabled = true;
			   this->cbCourseSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Math 101", L"Physics 102", L"Chemistry 103" });
			   this->cbCourseSelection->Location = System::Drawing::Point(307, 3);
			   this->cbCourseSelection->Name = L"cbCourseSelection";
			   this->cbCourseSelection->Size = System::Drawing::Size(300, 45);
			   this->cbCourseSelection->TabIndex = 2;
			   // 
			   // dgvRoster
			   // 
			   this->dgvRoster->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvRoster->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			   });
			   this->dgvRoster->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->dgvRoster->Location = System::Drawing::Point(308, 180);
			   this->dgvRoster->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dgvRoster->Name = L"dgvRoster";
			   this->dgvRoster->RowHeadersWidth = 82;
			   this->dgvRoster->Size = System::Drawing::Size(1079, 791);
			   this->dgvRoster->TabIndex = 3;
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
			   this->dataGridViewTextBoxColumn3->HeaderText = L"Enrollment Status";
			   this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			   this->dataGridViewTextBoxColumn3->Width = 200;
			   // 
			   // facaccessRoster
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1400, 991);
			   this->Controls->Add(this->cbCourseSelection);
			   this->Controls->Add(this->btnSelectCourse);
			   this->Controls->Add(this->dgvRoster);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"facaccessRoster";
			   this->Text = L"Access Class Rosters";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // Button Click Event Handlers

		   // Navigate to the faculty dashboard
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// This will navigate back to the dashboard
		MessageBox::Show("Navigating to Faculty Dashboard");
	}

		   // Fetch and display roster based on selected course
	private: System::Void btnSelectCourse_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Placeholder for actual backend call to fetch course data
		String^ selectedCourse = cbCourseSelection->SelectedItem->ToString();

		// Display the roster for the selected course (example data)
		if (selectedCourse == "Math 101")
		{
			// Populate with example data, replace with backend fetch
			this->dgvRoster->Rows->Clear();
			this->dgvRoster->Rows->Add("S1001", "John Doe", "Enrolled");
			this->dgvRoster->Rows->Add("S1002", "Jane Smith", "Enrolled");
			this->dgvRoster->Rows->Add("S1003", "Alice Brown", "Enrolled");
		}
		else if (selectedCourse == "Physics 102")
		{
			// Example data for Physics 102
			this->dgvRoster->Rows->Clear();
			this->dgvRoster->Rows->Add("S2001", "Tom Green", "Enrolled");
			this->dgvRoster->Rows->Add("S2002", "Mary White", "Enrolled");
		}
		else
		{
			MessageBox::Show("No students enrolled in this course.");
		}
	}
	};
}
