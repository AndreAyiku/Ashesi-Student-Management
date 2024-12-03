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
	/// Summary for CourseAdding
	/// </summary>
	public ref class CourseAdding : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		CourseAdding(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &CourseAdding::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseAdding()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(310, 118);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(195, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Course Name";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(310, 160);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(195, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Semester";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Credits";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(310, 254);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Required Course";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CourseAdding::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(537, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Add Course";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CourseAdding::button1_Click);
			// 
			// CourseAdding
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 528);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"CourseAdding";
			this->Text = L"CourseAdding";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Establish the connection to the database
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			// Get the form data from the UI controls
			System::String^ courseName = this->textBox6->Text;
			System::String^ credits = this->textBox1->Text;
			System::String^ semester = this->textBox5->Text;
			System::String^ prerequisiteCourseId = this->textBox2->Text;

			// Prepare the SQL insert command
			MySqlCommand^ insertCmd = gcnew MySqlCommand(
				"INSERT INTO icp_courses (course_name, credits, semester, prerequisite_course_id) "
				"VALUES (@courseName, @credits, @semester, @prerequisiteCourseId)",
				sqlConn
			);

			// Add the parameters to the SQL command
			insertCmd->Parameters->AddWithValue("@courseName", courseName);
			insertCmd->Parameters->AddWithValue("@credits", credits);
			insertCmd->Parameters->AddWithValue("@semester", semester);
			insertCmd->Parameters->AddWithValue("@prerequisiteCourseId", prerequisiteCourseId);

			// Execute the SQL command to insert the data
			insertCmd->ExecuteNonQuery();

			// Display a success message or perform any other necessary actions
			MessageBox::Show("Course added successfully!");
		}
		catch (Exception^ ex) {
			// Handle any exceptions that occur during the database operation
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			// Close the database connection
			sqlConn->Close();
		}
	}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
