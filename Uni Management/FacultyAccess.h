#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for facaccessRoster
	/// </summary>
	public ref class FacultyAccess : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private:
		String^ UserEmail;
	public:
		FacultyAccess(String^ email)
		{
			InitializeComponent();
			UserEmail = email;
			PopulateCourses();

			// Add additional initialization if needed
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyAccess()
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
	private: System::Windows::Forms::Button^ Back_button;
	private: System::Windows::Forms::ComboBox^ coursesComboBox;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridView^ dgvRoster;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->Back_button = (gcnew System::Windows::Forms::Button());
			   this->coursesComboBox = (gcnew System::Windows::Forms::ComboBox());
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
			   this->sidebarPanel->Controls->Add(this->Back_button);
			   this->sidebarPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->sidebarPanel->Location = System::Drawing::Point(0, 0);
			   this->sidebarPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->sidebarPanel->Name = L"sidebarPanel";
			   this->sidebarPanel->Size = System::Drawing::Size(150, 515);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // Back_button
			   // 
			   this->Back_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Back_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->Back_button->ForeColor = System::Drawing::Color::White;
			   this->Back_button->Location = System::Drawing::Point(22, 452);
			   this->Back_button->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Back_button->Name = L"Back_button";
			   this->Back_button->Size = System::Drawing::Size(105, 41);
			   this->Back_button->TabIndex = 0;
			   this->Back_button->Text = L"Back";
			   this->Back_button->UseVisualStyleBackColor = true;
			   this->Back_button->Click += gcnew System::EventHandler(this, &FacultyAccess::btnDashboard_Click);
			   // 
			   // coursesComboBox
			   // 
			   this->coursesComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->coursesComboBox->FormattingEnabled = true;
			   this->coursesComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Math 101", L"Physics 102", L"Chemistry 103" });
			   this->coursesComboBox->Location = System::Drawing::Point(154, 2);
			   this->coursesComboBox->Margin = System::Windows::Forms::Padding(2);
			   this->coursesComboBox->Name = L"coursesComboBox";
			   this->coursesComboBox->Size = System::Drawing::Size(356, 25);
			   this->coursesComboBox->TabIndex = 2;
			   this->coursesComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FacultyAccess::btnSelectCourse_Click);
			   // 
			   // dgvRoster
			   // 
			   this->dgvRoster->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvRoster->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			   });
			   this->dgvRoster->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->dgvRoster->Location = System::Drawing::Point(154, 94);
			   this->dgvRoster->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->dgvRoster->Name = L"dgvRoster";
			   this->dgvRoster->RowHeadersWidth = 82;
			   this->dgvRoster->Size = System::Drawing::Size(686, 411);
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
			   // FacultyAccess
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(917, 515);
			   this->Controls->Add(this->coursesComboBox);
			   this->Controls->Add(this->dgvRoster);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"FacultyAccess";
			   this->Text = L"Access Class Rosters";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
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
				   cmd->Parameters->AddWithValue("@email", UserEmail); // You'll need to set this variable

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

		   // Fetch and display roster based on selected course
	private: System::Void btnSelectCourse_Click(System::Object^ sender, System::EventArgs^ e)

	{
		try
		{
			// Check if a course is selected
			if (coursesComboBox->SelectedValue == nullptr)
			{
				MessageBox::Show("Please select a course.", "No Course Selected",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Create connection 
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			// Query to fetch students enrolled in the selected course
			String^ query = "SELECT s.student_id, s.fname, s.lname " +
				"FROM icp_students s " +
				"JOIN icp_enrollments e ON s.student_id = e.student_id " +
				"WHERE e.course_id = @CourseId";

			// Prepare the command
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = query;
			sqlCmd->Parameters->Clear();
			sqlCmd->Parameters->AddWithValue("@CourseId", coursesComboBox->SelectedValue);

			// Clear existing data in the DataGridView
			dgvRoster->Rows->Clear();

			// Execute the query
			MySqlDataReader^ reader = sqlCmd->ExecuteReader();

			// Populate the DataGridView
			while (reader->Read())
			{
				// Add rows to the DataGridView
				dgvRoster->Rows->Add(
					reader["student_id"]->ToString(),
					reader["fname"]->ToString() + " " + reader["lname"]->ToString(),
					"Enrolled"  // You can modify this as needed
				);
			}

			// Close the reader
			reader->Close();

			// Close the connection
			sqlConn->Close();

			// Check if no students were found
			if (dgvRoster->Rows->Count == 0)
			{
				MessageBox::Show("No students enrolled in this course.", "Course Roster",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error Loading Course Roster: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			// Ensure connection is closed
			if (sqlConn->State == System::Data::ConnectionState::Open)
			{
				sqlConn->Close();
			}
		}
		
		
	}
	
};
}