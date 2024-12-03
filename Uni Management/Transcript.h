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
	/// Summary for StudentTranscripts
	/// </summary>
	public ref class Transcript : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private:
		String^ useremail;
	public:
		Transcript(String^ email)
		{
			InitializeComponent();
			useremail = email;

			sqlConn = gcnew MySqlConnection();
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";

			// Populate student and grade information
			PopulateStudentInfo();
			PopulateGradesGrid();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		Transcript()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Transcript::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, -10);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(172, 696);
			this->panel1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button2->Location = System::Drawing::Point(15, 617);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"BACK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Transcript::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = nullptr;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-56, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 156);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(174, 1);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(534, 52);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.875F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(22, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ACADEMIC PERFORMANCE TRANSCRIPT";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(201, 216);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(518, 414);
			this->dataGridView1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(471, 142);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Major";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(471, 95);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Graduation Year :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(176, 95);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Student Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(178, 152);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Student ID : ";
			// 
			// Transcript
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 665);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Transcript";
			this->Text = L"StudentTranscripts";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:void PopulateStudentInfo()
	{
		try
		{
			sqlConn->Open();
			MySqlCommand^ sqlCmd = gcnew MySqlCommand();
			sqlCmd->Connection = sqlConn;

			// Query to get student details
			sqlCmd->CommandText = "SELECT s.student_id, s.fname, s.lname, s.major, s.enrollment_date " +
				"FROM icp_students s " +
				"JOIN icp_users u ON s.user_id = u.user_id " +
				"WHERE u.email = @email";
			sqlCmd->Parameters->AddWithValue("@email", useremail);

			MySqlDataReader^ reader = sqlCmd->ExecuteReader();

			if (reader->Read())
			{
				// Update labels with student information
				label4->Text = reader["fname"]->ToString() + " " + reader["lname"]->ToString(); // Student Name
				label2->Text = reader["major"]->ToString(); // Major
				label5->Text = "Student ID: " + reader["student_id"]->ToString(); // Student ID

				
			}

			reader->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error retrieving student information: " + ex->Message,
				"Database Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		finally
		{
			if (sqlConn->State == System::Data::ConnectionState::Open)
				sqlConn->Close();
		}
	}
	   void PopulateGradesGrid()
	   {
		   try
		   {
			   sqlConn->Open();
			   MySqlCommand^ sqlCmd = gcnew MySqlCommand();
			   sqlCmd->Connection = sqlConn;

			   // Query to get student grades with course names
			   sqlCmd->CommandText = "SELECT c.course_name, g.grade " +
				   "FROM icp_grades g " +
				   "JOIN icp_students s ON g.student_id = s.student_id " +
				   "JOIN icp_users u ON s.user_id = u.user_id " +
				   "JOIN icp_courses c ON g.course_id = c.course_id " +
				   "WHERE u.email = @email";
			   sqlCmd->Parameters->AddWithValue("@email", useremail);

			   // Create DataTable to bind to DataGridView
			   DataTable^ gradesTable = gcnew DataTable();
			   gradesTable->Columns->Add("Course Name", String::typeid);
			   gradesTable->Columns->Add("Grade", String::typeid);

			   // Execute reader and populate DataTable
			   MySqlDataReader^ reader = sqlCmd->ExecuteReader();
			   while (reader->Read())
			   {
				   gradesTable->Rows->Add(
					   reader["course_name"]->ToString(),
					   reader["grade"]->ToString()
				   );
			   }

			   // Bind DataTable to DataGridView
			   dataGridView1->DataSource = gradesTable;

			   // Optional: Customize DataGridView appearance
			   dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			   dataGridView1->ReadOnly = true;
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Error retrieving grades: " + ex->Message,
				   "Database Error",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Error);
		   }
		   finally
		   {
			   if (sqlConn->State == System::Data::ConnectionState::Open)
				   sqlConn->Close();
		   }
	   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}