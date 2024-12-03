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
	/// Summary for StudentDelete
	/// </summary>
	public ref class StudentDelete : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

	public:
		StudentDelete(void)
		{
			InitializeComponent();

			this->button2->Click += gcnew System::EventHandler(this, &StudentDelete::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDelete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::Label^ label6;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(325, 248);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(210, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Enter Student ID:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(111, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentDelete::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(529, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDelete::button1_Click);
			// 
			// StudentDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 516);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Name = L"StudentDelete";
			this->Text = L"StudentDelete";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::String^ studentIdToRemove = this->textBox6->Text;
			// Establish the connection to the database
			MySqlConnection^ sqlConn = gcnew MySqlConnection();
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			

			if (!System::String::IsNullOrWhiteSpace(studentIdToRemove)) {
				// Prepare the SQL delete command
				MySqlCommand^ deleteCmd = gcnew MySqlCommand(
					"DELETE FROM icp_students WHERE student_id = @studentId",
					sqlConn
				);

				// Add the parameter to the SQL command
				deleteCmd->Parameters->AddWithValue("@studentId", studentIdToRemove);

				// Execute the SQL command to delete the student
				int rowsAffected = deleteCmd->ExecuteNonQuery();

				// Check if a student was actually deleted
				if (rowsAffected > 0) {
					MessageBox::Show("Student removed successfully!");
				}
				else {
					MessageBox::Show("No student found with the given ID.");
				}
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
