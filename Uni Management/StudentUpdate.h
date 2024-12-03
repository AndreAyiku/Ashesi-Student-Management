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
	/// Summary for StudentUpdate
	/// </summary>
	public ref class StudentUpdate : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		StudentUpdate(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &StudentUpdate::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(222, 321);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 39;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(222, 227);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(222, 93);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 37;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &StudentUpdate::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(107, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 36;
			this->label6->Text = L"First Name";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(222, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(107, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Last Name";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(222, 270);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 20);
			this->textBox4->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(106, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Major";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Enrollment Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(222, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(107, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Student ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Date-of-Birth";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(222, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentUpdate::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(640, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentUpdate::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(580, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(276, 238);
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"";
			// 
			// StudentUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 582);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StudentUpdate";
			this->Text = L"StudentUpdate";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Establish the connection to the database
			MySqlConnection^ sqlConn = gcnew MySqlConnection();
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			// Get the form data from the UI controls
			System::String^ studentId = this->textBox1->Text; // Student ID to identify the record to update
			System::String^ firstName = this->textBox6->Text;
			System::String^ lastName = this->textBox5->Text;
			System::DateTime dateOfBirth = this->dateTimePicker1->Value;
			System::String^ major = this->textBox4->Text;
			System::DateTime enrollmentDate = this->dateTimePicker2->Value;
			System::Drawing::Image^ profileImage = this->pictureBox1->Image;

			// Prepare the SQL update command
			MySqlCommand^ updateCmd = gcnew MySqlCommand(
				"UPDATE icp_students SET " +
				"fname = @firstName, " +
				"lname = @lastName, " +
				"date_of_birth = @dateOfBirth, " +
				"major = @major, " +
				"enrollment_date = @enrollmentDate, " +
				"pfp = @profileImage " +
				"WHERE student_id = @studentId",
				sqlConn
			);

			// Add the parameters to the SQL command
			updateCmd->Parameters->AddWithValue("@studentId", studentId);
			updateCmd->Parameters->AddWithValue("@firstName", firstName);
			updateCmd->Parameters->AddWithValue("@lastName", lastName);
			updateCmd->Parameters->AddWithValue("@dateOfBirth", dateOfBirth);
			updateCmd->Parameters->AddWithValue("@major", major);
			updateCmd->Parameters->AddWithValue("@enrollmentDate", enrollmentDate);

			// Handle profile image
			if (profileImage != nullptr) {
				System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream();
				profileImage->Save(stream, System::Drawing::Imaging::ImageFormat::Jpeg);
				array<System::Byte>^ imageBytes = stream->ToArray();
				updateCmd->Parameters->AddWithValue("@profileImage", imageBytes);
			}
			else {
				updateCmd->Parameters->AddWithValue("@profileImage", DBNull::Value);
			}

			// Execute the SQL command to update the data
			int rowsAffected = updateCmd->ExecuteNonQuery();

			// Check if a record was actually updated
			if (rowsAffected > 0) {
				MessageBox::Show("Student information updated successfully!");
			}
			else {
				MessageBox::Show("No student found with the given ID.");
			}
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
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
