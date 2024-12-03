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
	/// Summary for CourseUpdate
	/// </summary>
	public ref class CourseUpdate : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		CourseUpdate(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &CourseUpdate::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseUpdate()
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
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 56;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CourseUpdate::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(629, 461);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 55;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CourseUpdate::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(330, 157);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 52;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(215, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Course ID";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(330, 199);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(215, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Course Name";
			this->label5->Click += gcnew System::EventHandler(this, &CourseUpdate::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(330, 289);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 20);
			this->textBox4->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(214, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Semester";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(330, 242);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 45;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(215, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Credits";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(330, 334);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 58;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Pre-Requisite ID";
			// 
			// CourseUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 602);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"CourseUpdate";
			this->Text = L"CourseUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Establish the connection to the database
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Get the form data from the UI controls
		System::String^ courseId = this->textBox6->Text;          // Course ID to identify the record to update
		System::String^ courseName = this->textBox5->Text;        // Course Name
		System::String^ credits = this->textBox1->Text;           // Credits
		System::String^ semester = this->textBox4->Text;          // Semester
		System::String^ preRequisiteId = this->textBox2->Text;    // Pre-Requisite ID

		// Prepare the SQL update command
		MySqlCommand^ updateCmd = gcnew MySqlCommand(
			"UPDATE icp_courses SET " +
			"course_name = @courseName, " +
			"credits = @credits, " +
			"semester = @semester, " +
			"prerequisite_course_id = @preRequisiteId " +
			"WHERE course_id = @courseId",
			sqlConn
		);

		// Add the parameters to the SQL command
		updateCmd->Parameters->AddWithValue("@courseId", courseId);
		updateCmd->Parameters->AddWithValue("@courseName", courseName);
		updateCmd->Parameters->AddWithValue("@credits", credits);
		updateCmd->Parameters->AddWithValue("@semester", semester);

		// Handle pre-requisite ID (allow NULL if empty)
		if (!System::String::IsNullOrWhiteSpace(preRequisiteId)) {
			updateCmd->Parameters->AddWithValue("@preRequisiteId", preRequisiteId);
		}
		else {
			updateCmd->Parameters->AddWithValue("@preRequisiteId", DBNull::Value);
		}

		// Execute the SQL command to update the data
		int rowsAffected = updateCmd->ExecuteNonQuery();

		// Check if a record was actually updated
		if (rowsAffected > 0) {
			MessageBox::Show("Course information updated successfully!");
		}
		else {
			MessageBox::Show("No course found with the given Course ID.");
		}
	}
	catch (Exception^ ex) {
		// Handle any exceptions that occur during the database operation
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		// Close the database connection
		if (sqlConn->State == System::Data::ConnectionState::Open) {
			sqlConn->Close();
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
