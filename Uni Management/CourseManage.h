#pragma once
#include "CourseDelete.h"
#include "CourseAdding.h"
#include "CourseUpdate.h"

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CourseManage
	/// </summary>
	public ref class CourseManage : public System::Windows::Forms::Form
	{
	public:
		CourseManage(void)
		{
			InitializeComponent();
			LoadCoursesData();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseManage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Back_button;
	protected:







	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ SearchBar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CourseManage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBar = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->Back_button);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(11, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 510);
			this->panel1->TabIndex = 1;
			// 
			// Back_button
			// 
			this->Back_button->Location = System::Drawing::Point(16, 444);
			this->Back_button->Margin = System::Windows::Forms::Padding(2);
			this->Back_button->Name = L"Back_button";
			this->Back_button->Size = System::Drawing::Size(143, 34);
			this->Back_button->TabIndex = 7;
			this->Back_button->Text = L"Back";
			this->Back_button->UseVisualStyleBackColor = true;
			this->Back_button->Click += gcnew System::EventHandler(this, &CourseManage::Back_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = nullptr;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-54, -7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(837, 58);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(57, 19);
			this->Search->TabIndex = 21;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &CourseManage::Search_Click);
			// 
			// Refresh
			// 
			this->Refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh.Image")));
			this->Refresh->Location = System::Drawing::Point(900, 58);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(54, 19);
			this->Refresh->TabIndex = 20;
			this->Refresh->Text = L"Refresh\r\n";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &CourseManage::Refresh_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(285, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// SearchBar
			// 
			this->SearchBar->Location = System::Drawing::Point(347, 58);
			this->SearchBar->Name = L"SearchBar";
			this->SearchBar->Size = System::Drawing::Size(464, 20);
			this->SearchBar->TabIndex = 18;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(267, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(638, 372);
			this->dataGridView1->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(421, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 27);
			this->label1->TabIndex = 16;
			this->label1->Text = L"MANAGE COURSES";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(347, 483);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 28);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Update Course";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &CourseManage::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(704, 483);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 28);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Remove Course";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &CourseManage::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(526, 483);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 28);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Add course";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &CourseManage::button8_Click);
			// 
			// CourseManage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 517);
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
			this->Name = L"CourseManage";
			this->Text = L"CourseManage";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		CourseDelete^ deletecourse = gcnew CourseDelete();

		deletecourse->Show();

	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	CourseAdding^ addcourse = gcnew CourseAdding();

	addcourse->Show();


}
private: System::Void LoadCoursesData() {
	try {
		// Establish the connection to the database
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Create a SQL command to select all courses
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT course_id, course_name, credits, semester, prerequisite_course_id FROM icp_courses",
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
		dataGridView1->Columns["course_id"]->HeaderText = "Course ID";
		dataGridView1->Columns["course_name"]->HeaderText = "Course Name";
		dataGridView1->Columns["credits"]->HeaderText = "Credits";
		dataGridView1->Columns["semester"]->HeaderText = "Semester";
		dataGridView1->Columns["prerequisite_course_id"]->HeaderText = "Prerequisite Course ID";
	}
	catch (Exception^ ex) {
		// Handle any exceptions that occur during the database operation
		MessageBox::Show("Error loading courses: " + ex->Message);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	CourseUpdate^ updatecourse = gcnew CourseUpdate();
	updatecourse->Show();

}
private: System::Void Back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadCoursesData();

}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Create a parameterized search query
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT course_id, course_name, credits, semester, prerequisite_course_id " +
			"FROM icp_courses " +
			"WHERE course_id LIKE @searchTerm OR " +
			"course_name LIKE @searchTerm OR " +
			"semester LIKE @searchTerm",
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
		MessageBox::Show("Error searching courses: " + ex->Message);
	}
}
	   


};
}
