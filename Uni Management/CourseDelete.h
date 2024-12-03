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
	/// Summary for CourseDelete
	/// </summary>
	public ref class CourseDelete : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		CourseDelete(void)
		{
			InitializeComponent();
			this->button2->Click += gcnew System::EventHandler(this, &CourseDelete::button2_Click);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseDelete()
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
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CourseDelete::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(515, 367);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 50);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CourseDelete::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(311, 217);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(196, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Enter Course ID:";
			// 
			// CourseDelete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 516);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Name = L"CourseDelete";
			this->Text = L"CourseDelete";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::String^ courseIdToRemove = this->textBox6->Text;
			// Establish the connection to the database
			MySqlConnection^ sqlConn = gcnew MySqlConnection();
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();



			if (!System::String::IsNullOrWhiteSpace(courseIdToRemove)) {
				// Prepare the SQL delete command
				MySqlCommand^ deleteCmd = gcnew MySqlCommand(
					"DELETE FROM icp_courses WHERE course_id = @courseId",
					sqlConn
				);

				// Add the parameter to the SQL command
				deleteCmd->Parameters->AddWithValue("@courseId", courseIdToRemove);

				// Execute the SQL command to delete the student
				int rowsAffected = deleteCmd->ExecuteNonQuery();

				// Check if a student was actually deleted
				if (rowsAffected > 0) {
					MessageBox::Show("Course removed successfully!");
				}
				else {
					MessageBox::Show("No course found with the given ID.");
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