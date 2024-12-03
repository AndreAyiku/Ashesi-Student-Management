#pragma once
#include "facultyRegister.h"
#include "facultyDelete.h"
#include "facultyUpdate.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyManage
	/// </summary>
	public ref class FacultyManage : public System::Windows::Forms::Form
	{
	public:
		FacultyManage(void)
		{
			InitializeComponent();
			LoadFacultyData();
			this->SearchBar->TextChanged += gcnew System::EventHandler(this, &FacultyManage::SearchBar_TextChanged);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyManage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Back;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;






	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ SearchBar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ Refresh;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacultyManage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBar = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->Back);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(11, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 510);
			this->panel1->TabIndex = 11;
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(14, 472);
			this->Back->Margin = System::Windows::Forms::Padding(2);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(143, 23);
			this->Back->TabIndex = 7;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &FacultyManage::Back_Click);
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
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(269, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// SearchBar
			// 
			this->SearchBar->Location = System::Drawing::Point(331, 58);
			this->SearchBar->Name = L"SearchBar";
			this->SearchBar->Size = System::Drawing::Size(464, 20);
			this->SearchBar->TabIndex = 17;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(251, 84);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(638, 372);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FacultyManage::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(405, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 27);
			this->label1->TabIndex = 15;
			this->label1->Text = L"MANAGE FACULTY";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(331, 483);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 28);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Update Faculty";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &FacultyManage::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(688, 483);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 28);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Remove Faculty";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &FacultyManage::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(510, 483);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 28);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Add Faculty";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &FacultyManage::button8_Click);
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(809, 58);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(57, 19);
			this->Search->TabIndex = 20;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &FacultyManage::Search_Click);
			// 
			// Refresh
			// 
			this->Refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh.Image")));
			this->Refresh->Location = System::Drawing::Point(872, 58);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(54, 19);
			this->Refresh->TabIndex = 19;
			this->Refresh->Text = L"Refresh\r\n";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &FacultyManage::Refresh_Click);
			// 
			// FacultyManage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 517);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->SearchBar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Name = L"FacultyManage";
			this->Text = L"FacultyManage";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	facultyRegister^ facultyregister = gcnew facultyRegister();
	facultyregister->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	facultyDelete^ Fdelete = gcnew facultyDelete();
	Fdelete->Show();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	facultyUpdate^ fupdate = gcnew facultyUpdate();

	fupdate->Show();
}
private: System::Void SearchBar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	   private: System::Void LoadFacultyData() {
		   try {
			   // Establish the connection to the database
			   MySqlConnection^ sqlConn = gcnew MySqlConnection();
			   sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			   sqlConn->Open();

			   // Create a SQL command to select all faculty members
			   MySqlCommand^ sqlCmd = gcnew MySqlCommand(
				   "SELECT faculty_id, firstname, lastname, department, date_of_appointment FROM icp_faculty",
				   sqlConn
			   );

			   // Create a DataAdapter and DataTable
			   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
			   System::Data::DataTable^ sqlDt = gcnew DataTable();

			   // Fill the DataTable
			   sqlDtA->Fill(sqlDt);

			   // Bind the DataTable to the DataGridView
			   dataGridView1->DataSource = sqlDt;

			   // Customize column headers
			   dataGridView1->Columns["faculty_id"]->HeaderText = "Faculty ID";
			   dataGridView1->Columns["firstname"]->HeaderText = "First Name";
			   dataGridView1->Columns["lastname"]->HeaderText = "Last Name";
			  
			   dataGridView1->Columns["department"]->HeaderText = "Department";
			   dataGridView1->Columns["date_of_appointment"]->HeaderText = "Hire Date";
		   }
		   catch (Exception^ ex) {
			   // Handle any exceptions that occur during the database operation
			   MessageBox::Show("Error loading faculty: " + ex->Message);
		   }
	   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadFacultyData();
}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Establish the connection to the database
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT date_of_appointment, department, firstname, lastname, faculty_id" +
			"FROM icp_faculty" +
			"WHERE faculty_id LIKE @searchTerm OR " +
			"firstname LIKE @searchTerm OR " +
			"lastname LIKE @searchTerm OR " +
			 
			"department LIKE @searchTerm",
			sqlConn
		);

		
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
		MessageBox::Show("Error searching faculty: " + ex->Message);
	}
}
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
};
}
