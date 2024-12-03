#pragma once
#include "StudentRegister.h"
#include "StudentDelete.h"
#include "StudentUpdate.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManageStudents
	/// </summary>
	public ref class StudentManage : public System::Windows::Forms::Form
	{
	public:
		StudentManage(void)
		{
			InitializeComponent();
			LoadStudentsData();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentManage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ BackButton;






	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ SearchBar;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::Button^ Search;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentManage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SearchBar = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->BackButton);
			this->panel1->Location = System::Drawing::Point(11, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 510);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = nullptr;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-49, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentManage::pictureBox1_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(18, 472);
			this->BackButton->Margin = System::Windows::Forms::Padding(2);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(143, 28);
			this->BackButton->TabIndex = 4;
			this->BackButton->Text = L"Back\r\n";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &StudentManage::BackButton_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(510, 483);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 28);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Add student";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StudentManage::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(688, 483);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 28);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Remove Student";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StudentManage::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(331, 483);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 28);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Update Student ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &StudentManage::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(405, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 27);
			this->label1->TabIndex = 6;
			this->label1->Text = L"MANAGE STUDENTS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(251, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(638, 372);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentManage::dataGridView1_CellContentClick);
			// 
			// SearchBar
			// 
			this->SearchBar->Location = System::Drawing::Point(331, 58);
			this->SearchBar->Name = L"SearchBar";
			this->SearchBar->Size = System::Drawing::Size(464, 20);
			this->SearchBar->TabIndex = 9;
			this->SearchBar->TextChanged += gcnew System::EventHandler(this, &StudentManage::SearchBar_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(269, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// Refresh
			// 
			this->Refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh.Image")));
			this->Refresh->Location = System::Drawing::Point(884, 58);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(54, 19);
			this->Refresh->TabIndex = 11;
			this->Refresh->Text = L"Refresh\r\n";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &StudentManage::Refresh_Click);
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(821, 58);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(57, 19);
			this->Search->TabIndex = 12;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &StudentManage::Search_Click);
			// 
			// StudentManage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 530);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->SearchBar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->panel1);
			this->Name = L"StudentManage";
			this->Text = L"ManageStudents";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentRegister^ registerstudent = gcnew StudentRegister();

	registerstudent->Show();

	
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentDelete^ deletestudent = gcnew StudentDelete();
	deletestudent->Show();

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentUpdate^ updatestudent = gcnew StudentUpdate();

	updatestudent->Show();

}
	   private: System::Void LoadStudentsData() {
		   try {
			   // Establish the connection to the database
			   MySqlConnection^ sqlConn = gcnew MySqlConnection();
			   sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			   sqlConn->Open();

			   // Create a SQL command to select all students
			   MySqlCommand^ sqlCmd = gcnew MySqlCommand(
				   "SELECT student_id, fname, lname, date_of_birth, major, enrollment_date FROM icp_students",
				   sqlConn
			   );

			   // Create a DataAdapter and DataTable
			   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
			   System::Data::DataTable^ sqlDt = gcnew DataTable();

			   // Fill the DataTable
			   sqlDtA->Fill(sqlDt);

			   // Bind the DataTable to the DataGridView
			   dataGridView1->DataSource = sqlDt;

			   // Optional: Customize column headers
			   dataGridView1->Columns["student_id"]->HeaderText = "Student ID";
			   dataGridView1->Columns["fname"]->HeaderText = "First Name";
			   dataGridView1->Columns["lname"]->HeaderText = "Last Name";
			   dataGridView1->Columns["date_of_birth"]->HeaderText = "Date of Birth";
			   dataGridView1->Columns["major"]->HeaderText = "Major";
			   dataGridView1->Columns["enrollment_date"]->HeaderText = "Enrollment Date";
		   }
		   catch (Exception^ ex) {
			   // Handle any exceptions that occur during the database operation
			   MessageBox::Show("Error loading students: " + ex->Message);
		   }
	   }
private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadStudentsData();
}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Create a parameterized search query
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT student_id, fname, lname, date_of_birth, major, enrollment_date " +
			"FROM icp_students " +
			"WHERE student_id LIKE @searchTerm OR " +
			"fname LIKE @searchTerm OR " +
			"lname LIKE @searchTerm OR " +
			"major LIKE @searchTerm",
			sqlConn
		);

		// Add search parameter
		sqlCmd->Parameters->AddWithValue("@searchTerm", "%" + SearchBar->Text + "%");

		// Create a DataAdapter and DataTable
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
		System::Data::DataTable^ sqlDt = gcnew DataTable();

		// Fill the DataTable
		sqlDtA->Fill(sqlDt);

		// Bind the DataTable to the DataGridView
		dataGridView1->DataSource = sqlDt;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error searching students: " + ex->Message);
	}
}
private: System::Void SearchBar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
