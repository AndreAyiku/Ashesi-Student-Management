#pragma once
#include "InsertDetails.h"
#include "UpdateDetails.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Finacial
	/// </summary>
	public ref class Finacial : public System::Windows::Forms::Form
	{
	public:
		Finacial(void)
		{
			InitializeComponent();
			LoadFinancialData();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Finacial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Back_Button;
	protected:






	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Refresh;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ SearchBar;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ StudentFinance;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Finacial::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Back_Button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBar = (gcnew System::Windows::Forms::TextBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->StudentFinance = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->Back_Button);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(11, 11);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 510);
			this->panel1->TabIndex = 1;
			// 
			// Back_Button
			// 
			this->Back_Button->Location = System::Drawing::Point(17, 461);
			this->Back_Button->Margin = System::Windows::Forms::Padding(2);
			this->Back_Button->Name = L"Back_Button";
			this->Back_Button->Size = System::Drawing::Size(143, 34);
			this->Back_Button->TabIndex = 7;
			this->Back_Button->Text = L"Back";
			this->Back_Button->UseVisualStyleBackColor = true;
			this->Back_Button->Click += gcnew System::EventHandler(this, &Finacial::Back_Button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = nullptr;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-54, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(366, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Financial Management";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(461, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Transfer Logs";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(283, 173);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 333);
			this->dataGridView1->TabIndex = 4;
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(917, 145);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(65, 20);
			this->Refresh->TabIndex = 5;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &Finacial::Refresh_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(311, 117);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// SearchBar
			// 
			this->SearchBar->Location = System::Drawing::Point(373, 147);
			this->SearchBar->Name = L"SearchBar";
			this->SearchBar->Size = System::Drawing::Size(464, 20);
			this->SearchBar->TabIndex = 20;
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(854, 145);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(57, 19);
			this->Search->TabIndex = 22;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &Finacial::Search_Click);
			// 
			// StudentFinance
			// 
			this->StudentFinance->Location = System::Drawing::Point(844, 75);
			this->StudentFinance->Name = L"StudentFinance";
			this->StudentFinance->Size = System::Drawing::Size(138, 35);
			this->StudentFinance->TabIndex = 23;
			this->StudentFinance->Text = L"Insert Student Details";
			this->StudentFinance->UseVisualStyleBackColor = true;
			this->StudentFinance->Click += gcnew System::EventHandler(this, &Finacial::StudentFinance_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 35);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Update Student Details";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Finacial::button1_Click);
			// 
			// Finacial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1009, 539);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->StudentFinance);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->SearchBar);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Finacial";
			this->Text = L"Finacial";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentFinance_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertDetails^ inserter = gcnew InsertDetails();

		inserter->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateDetails^ updater = gcnew UpdateDetails();
	updater->Show();
}
private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadFinancialData();

}
	   private: System::Void LoadFinancialData() {
		   try {
			   // Establish the connection to the database
			   MySqlConnection^ sqlConn = gcnew MySqlConnection();
			   sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			   sqlConn->Open();

			   // Create a SQL command to select specific financial columns
			   MySqlCommand^ sqlCmd = gcnew MySqlCommand(
				   "SELECT student_id, academic_year, semester, financial_id, total_tuition_amount, payment_status, due_date " +
				   "FROM icp_financial_management",
				   sqlConn
			   );

			   // Create a DataAdapter and DataTable
			   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
			   System::Data::DataTable^ sqlDt = gcnew DataTable();

			   // Fill the DataTable
			   sqlDtA->Fill(sqlDt);

			   // Bind the DataTable to the DataGridView
			   dataGridView1->DataSource = sqlDt;

			   // Optional: Customize column headers for better readability
			   dataGridView1->Columns["student_id"]->HeaderText = "Student ID";
			   dataGridView1->Columns["academic_year"]->HeaderText = "Academic Year";
			   dataGridView1->Columns["semester"]->HeaderText = "Semester";
			   dataGridView1->Columns["financial_id"]->HeaderText = "Financial ID";
			   dataGridView1->Columns["total_tuition_amount"]->HeaderText = "Total Tuition";
			   dataGridView1->Columns["payment_status"]->HeaderText = "Payment Status";
			   dataGridView1->Columns["due_date"]->HeaderText = "Due Date";
		   }
		   catch (Exception^ ex) {
			   // Handle any exceptions that occur during the database operation
			   MessageBox::Show("Error loading financial data: " + ex->Message);
		   }
	   }
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Create a parameterized search query
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT student_id, academic_year, semester, financial_id, total_tuition_amount, payment_status, due_date " +
			"FROM icp_financial_management " +
			"WHERE student_id LIKE @searchTerm OR " +
			"academic_year LIKE @searchTerm OR " +
			"semester LIKE @searchTerm OR " +
			"payment_status LIKE @searchTerm",
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
		MessageBox::Show("Error searching financial data: " + ex->Message);
	}
}
private: System::Void Back_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
