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
	/// Summary for facultyUpdate
	/// </summary>
	public ref class facultyUpdate : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
		   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		facultyUpdate(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &facultyUpdate::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~facultyUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(203, 375);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 56;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &facultyUpdate::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(621, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 55;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &facultyUpdate::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(203, 204);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 53;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(203, 116);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 52;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 51;
			this->label6->Text = L"First Name";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(203, 158);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Last Name";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 247);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 20);
			this->textBox4->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(87, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Department";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(203, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 45;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &facultyUpdate::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(88, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Faculty ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Enrollment Date";
			// 
			// facultyUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 572);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"facultyUpdate";
			this->Text = L"facultyUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Establish the connection to the database
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Get the form data from the UI controls
		System::String^ facultyId = this->textBox1->Text; // Faculty ID to identify the record to update
		System::String^ firstName = this->textBox6->Text;
		System::String^ lastName = this->textBox5->Text;
		System::DateTime dateOfAppointment = this->dateTimePicker1->Value;
		System::String^ department = this->textBox4->Text;

		// Prepare the SQL update command
		MySqlCommand^ updateCmd = gcnew MySqlCommand(
			"UPDATE icp_faculty SET " +
			"firstname = @firstName, " +
			"lastname = @lastName, " +
			"date_of_appointment = @dateOfAppointment, " +
			"department = @department " +
			"WHERE faculty_id = @facultyId",
			sqlConn
		);

		// Add the parameters to the SQL command
		updateCmd->Parameters->AddWithValue("@facultyId", facultyId);
		updateCmd->Parameters->AddWithValue("@firstName", firstName);
		updateCmd->Parameters->AddWithValue("@lastName", lastName);
		updateCmd->Parameters->AddWithValue("@dateOfAppointment", dateOfAppointment);
		updateCmd->Parameters->AddWithValue("@department", department);

		// Execute the SQL command to update the data
		int rowsAffected = updateCmd->ExecuteNonQuery();

		// Check if a record was actually updated
		if (rowsAffected > 0) {
			MessageBox::Show("Faculty information updated successfully!");
		}
		else {
			MessageBox::Show("No faculty member found with the given ID.");
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
};
}
