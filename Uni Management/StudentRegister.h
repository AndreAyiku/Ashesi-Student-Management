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
	/// Summary for StudentRegistraion
	/// </summary>
	public ref class StudentRegister : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
		 
	public:
		StudentRegister(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &StudentRegister::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;

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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 204);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 20);
			this->textBox4->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Major";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 349);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentRegister::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(591, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentRegister::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(517, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(276, 238);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"";
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentRegister::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Enrollment Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Student ID";
			this->label2->Click += gcnew System::EventHandler(this, &StudentRegister::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Date-of-Birth";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Last Name";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 27);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"First Name";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(173, 161);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 26;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(173, 255);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 27;
			// 
			// StudentRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 445);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StudentRegister";
			this->Text = L"StudentRegistraion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Establish the connection to the database
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			// Get the form data from the UI controls
			System::String^ firstName = this->textBox6->Text;
			System::String^ lastName = this->textBox5->Text;
			System::String^ studentId = this->textBox1->Text;
			System::DateTime dateOfBirth = this->dateTimePicker1->Value;
			System::String^ major = this->textBox4->Text;
			System::DateTime enrollmentDate = this->dateTimePicker2->Value;
			System::Drawing::Image^ profileImage = this->pictureBox1->Image;

			// Prepare the SQL insert command
			MySqlCommand^ insertCmd = gcnew MySqlCommand(
				"INSERT INTO icp_students (student_id, date_of_birth, major, enrollment_date, fname, lname, pfp) "
				"VALUES (@studentId, @dateOfBirth, @major, @enrollmentDate, @firstName, @lastName, @profileImage)",
				sqlConn
			);

			// Add the parameters to the SQL command
			insertCmd->Parameters->AddWithValue("@studentId", studentId);
			insertCmd->Parameters->AddWithValue("@dateOfBirth", dateOfBirth);
			insertCmd->Parameters->AddWithValue("@major", major);
			insertCmd->Parameters->AddWithValue("@enrollmentDate", enrollmentDate);
			insertCmd->Parameters->AddWithValue("@firstName", firstName);
			insertCmd->Parameters->AddWithValue("@lastName", lastName);

			if (profileImage != nullptr) {
				System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream();
				profileImage->Save(stream, System::Drawing::Imaging::ImageFormat::Jpeg);
				array<System::Byte>^ imageBytes = stream->ToArray();
				insertCmd->Parameters->AddWithValue("@profileImage", imageBytes);
			}
			else {
				insertCmd->Parameters->AddWithValue("@profileImage", DBNull::Value);
			}

			// Execute the SQL command to insert the data
			insertCmd->ExecuteNonQuery();

			// Display a success message or perform any other necessary actions
			MessageBox::Show("Student registered successfully!");
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
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Image files (*.jpg, *.png, *.bmp)|*.jpg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Load the selected image into the PictureBox
		this->pictureBox1->Image = System::Drawing::Image::FromFile(openFileDialog->FileName);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
