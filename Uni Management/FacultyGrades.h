#pragma once

#include "EnterGrades.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for FacultyGrades
	/// </summary>
	public ref class FacultyGrades : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: 
		String^ useremail;
	public:
		FacultyGrades(String^ email)
		{
			InitializeComponent();
			useremail = email;
			PopulateCourses();
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
	private: System::Windows::Forms::Button^ GradeSubmission;
	private: System::Windows::Forms::ComboBox^ coursesComboBox;


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
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->GradeSubmission = (gcnew System::Windows::Forms::Button());
			   this->coursesComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->dgvGrades = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGrades))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // sidebarPanel
			   // 
			   this->sidebarPanel->BackColor = System::Drawing::Color::Maroon;
			   this->sidebarPanel->Controls->Add(this->pictureBox1);
			   this->sidebarPanel->Controls->Add(this->btnDashboard);
			   this->sidebarPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->sidebarPanel->Location = System::Drawing::Point(0, 0);
			   this->sidebarPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->sidebarPanel->Name = L"sidebarPanel";
			   this->sidebarPanel->Size = System::Drawing::Size(150, 617);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(15, 6);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(114, 107);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F));
			   this->btnDashboard->ForeColor = System::Drawing::Color::White;
			   this->btnDashboard->Location = System::Drawing::Point(15, 512);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(105, 41);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = true;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FacultyGrades::btnDashboard_Click);
			   // 
			   // GradeSubmission
			   // 
			   this->GradeSubmission->BackColor = System::Drawing::Color::Maroon;
			   this->GradeSubmission->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->GradeSubmission->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->GradeSubmission->ForeColor = System::Drawing::Color::White;
			   this->GradeSubmission->Location = System::Drawing::Point(228, 569);
			   this->GradeSubmission->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->GradeSubmission->Name = L"GradeSubmission";
			   this->GradeSubmission->Size = System::Drawing::Size(205, 36);
			   this->GradeSubmission->TabIndex = 1;
			   this->GradeSubmission->Text = L"Enter Grades";
			   this->GradeSubmission->UseVisualStyleBackColor = false;
			   this->GradeSubmission->Click += gcnew System::EventHandler(this, &FacultyGrades::btnSaveGrades_Click);
			   // 
			   // coursesComboBox
			   // 
			   this->coursesComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->coursesComboBox->FormattingEnabled = true;
			   this->coursesComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Math 101", L"Physics 102", L"Chemistry 103" });
			   this->coursesComboBox->Location = System::Drawing::Point(228, 0);
			   this->coursesComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			   this->coursesComboBox->Name = L"coursesComboBox";
			   this->coursesComboBox->Size = System::Drawing::Size(227, 25);
			   this->coursesComboBox->TabIndex = 2;
			   this->coursesComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FacultyGrades::cbCourseSelection_SelectedIndexChanged);
			   // 
			   // dgvGrades
			   // 
			   this->dgvGrades->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvGrades->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			   });
			   this->dgvGrades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->dgvGrades->Location = System::Drawing::Point(228, 45);
			   this->dgvGrades->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->dgvGrades->Name = L"dgvGrades";
			   this->dgvGrades->RowHeadersWidth = 82;
			   this->dgvGrades->Size = System::Drawing::Size(764, 476);
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
			   // FacultyGrades
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1101, 617);
			   this->Controls->Add(this->coursesComboBox);
			   this->Controls->Add(this->GradeSubmission);
			   this->Controls->Add(this->dgvGrades);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"FacultyGrades";
			   this->Text = L"Faculty Grades";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvGrades))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // Button Click Event Handlers

		   // Navigate back to the Faculty Dashboard
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

		   // Save the entered grades (functionality to be implemented)
	private: System::Void btnSaveGrades_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EnterGrades^ entergrade = gcnew EnterGrades(useremail);
		entergrade->Show();
	}
	private: System::Void dgvGrades_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

		   private: void PopulateCourses()
		   {
			   try
			   {
				   // Create connection 
				   MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi;");
				   sqlConn->Open();

				   // Create command to get courses for the current faculty
				   String^ query = "SELECT DISTINCT c.course_id, c.course_name " +
					   "FROM icp_courses c " +
					   "JOIN icp_facultycourses fc ON c.course_id = fc.course_id " +
					   "JOIN icp_faculty f ON fc.faculty_id = f.faculty_id " +
					   "JOIN icp_users u ON f.user_id = u.user_id " +
					   "WHERE u.email = @email"; // Assuming you'll pass the current user's email

				   MySqlCommand^ cmd = gcnew MySqlCommand(query, sqlConn);
				   cmd->Parameters->AddWithValue("@email", useremail); // You'll need to set this variable

				   // Create data adapter and fill combo box
				   MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cmd);
				   DataTable^ dt = gcnew DataTable();
				   da->Fill(dt);

				   // Populate combo box
				   coursesComboBox->DisplayMember = "course_name";
				   coursesComboBox->ValueMember = "course_id";
				   coursesComboBox->DataSource = dt;
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error Loading Courses: " + ex->Message, "Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

private: void PopulateStudentGrades(String^ courseId)
{
	try
	{
		// Clear existing rows
		dgvGrades->Rows->Clear();

		// Create connection 
		MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi;");
		sqlConn->Open();

		// Create query to get students, their names, and grades for the selected course
		String^ query = "SELECT s.student_id, s.fname, s.lname, g.grade " +
			"FROM icp_students s " +
			"JOIN icp_enrollments e ON s.student_id = e.student_id " +
			"LEFT JOIN icp_grades g ON s.student_id = g.student_id AND e.course_id = g.course_id " +
			"WHERE e.course_id = @courseId";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, sqlConn);
		cmd->Parameters->AddWithValue("@courseId", courseId);

		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			String^ studentId = reader["student_id"]->ToString();
			String^ fullName = reader["fname"]->ToString() + " " + reader["lname"]->ToString();
			String^ grade = reader["grade"] != DBNull::Value ?
				reader["grade"]->ToString() : "Not Graded";

			// Add row to DataGridView
			dgvGrades->Rows->Add(studentId, fullName, grade);
		}

		reader->Close();
		sqlConn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error Loading Student Grades: " + ex->Message, "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
				  private: System::Void cbCourseSelection_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
					  if (coursesComboBox->SelectedItem != nullptr)
					  {
						  // Get the selected course ID
						  DataRowView^ selectedCourse = dynamic_cast<DataRowView^>(coursesComboBox->SelectedItem);
						  if (selectedCourse != nullptr)
						  {
							  String^ courseId = selectedCourse["course_id"]->ToString();
							  PopulateStudentGrades(courseId);
						  }
					  }
				  }
};
}