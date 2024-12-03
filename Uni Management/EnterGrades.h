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
	/// Summary for EnterGrades
	/// </summary>
	public ref class EnterGrades : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private:
		String^ userEmail;
	public:
		EnterGrades(String^ email)
		{
			InitializeComponent();
			userEmail = email;
			PopulateCourses();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnterGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ coursesComboBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->coursesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// coursesComboBox
			// 
			this->coursesComboBox->FormattingEnabled = true;
			this->coursesComboBox->Location = System::Drawing::Point(123, 44);
			this->coursesComboBox->Name = L"coursesComboBox";
			this->coursesComboBox->Size = System::Drawing::Size(423, 21);
			this->coursesComboBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Student ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Grade:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(281, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(322, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(281, 259);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(322, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(133, 418);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 60;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EnterGrades::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(551, 418);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 50);
			this->button3->TabIndex = 59;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EnterGrades::button3_Click);
			// 
			// EnterGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 542);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->coursesComboBox);
			this->Name = L"EnterGrades";
			this->Text = L"EnterGrades";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
				cmd->Parameters->AddWithValue("@email", userEmail); // You'll need to set this variable

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
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Validate inputs
			if (String::IsNullOrWhiteSpace(textBox1->Text))
			{
				MessageBox::Show("Please enter a Student ID", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (String::IsNullOrWhiteSpace(textBox2->Text))
			{
				MessageBox::Show("Please enter a Grade", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Validate grade is A, B, C, D, E, or F
			String^ grade = textBox2->Text->ToUpper();
			if (grade != "A" && grade != "B" && grade != "C" &&
				grade != "D" && grade != "E" && grade != "F")
			{
				MessageBox::Show("Invalid Grade. Please enter A, B, C, D, E, or F", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Create connection 
			MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi;");
			sqlConn->Open();

			// Get the selected course ID
			int courseId = Convert::ToInt32(coursesComboBox->SelectedValue);
			int studentId = Convert::ToInt32(textBox1->Text);

			// Check if student is enrolled in the course
			String^ checkEnrollmentQuery = "SELECT COUNT(*) FROM icp_enrollments WHERE student_id = @studentId AND course_id = @courseId";
			MySqlCommand^ checkCmd = gcnew MySqlCommand(checkEnrollmentQuery, sqlConn);
			checkCmd->Parameters->AddWithValue("@studentId", studentId);
			checkCmd->Parameters->AddWithValue("@courseId", courseId);

			int enrollmentCount = Convert::ToInt32(checkCmd->ExecuteScalar());
			if (enrollmentCount == 0)
			{
				MessageBox::Show("Student is not enrolled in this course", "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				sqlConn->Close();
				return;
			}

			// Check if grade already exists for this student and course
			String^ checkGradeQuery = "SELECT COUNT(*) FROM icp_grades WHERE student_id = @studentId AND course_id = @courseId";
			MySqlCommand^ checkGradeCmd = gcnew MySqlCommand(checkGradeQuery, sqlConn);
			checkGradeCmd->Parameters->AddWithValue("@studentId", studentId);
			checkGradeCmd->Parameters->AddWithValue("@courseId", courseId);

			int gradeCount = Convert::ToInt32(checkGradeCmd->ExecuteScalar());

			// Prepare SQL command for insert or update
			MySqlCommand^ cmd;
			if (gradeCount > 0)
			{
				// Update existing grade
				String^ updateQuery = "UPDATE icp_grades SET grade = @grade WHERE student_id = @studentId AND course_id = @courseId";
				cmd = gcnew MySqlCommand(updateQuery, sqlConn);
			}
			else
			{
				// Insert new grade
				String^ insertQuery = "INSERT INTO icp_grades (student_id, course_id, grade) VALUES (@studentId, @courseId, @grade)";
				cmd = gcnew MySqlCommand(insertQuery, sqlConn);
			}

			// Add parameters
			cmd->Parameters->AddWithValue("@studentId", studentId);
			cmd->Parameters->AddWithValue("@courseId", courseId);
			cmd->Parameters->AddWithValue("@grade", grade);

			// Execute the command
			int rowsAffected = cmd->ExecuteNonQuery();

			// Close connection
			sqlConn->Close();

			// Show success message
			MessageBox::Show("Grade entered successfully!", "Success",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear input fields
			textBox1->Clear();
			textBox2->Clear();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
