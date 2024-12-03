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
	/// Summary for InsertDetails
	/// </summary>
	public ref class InsertDetails : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::CheckBox^ PaidBox;
		   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		InsertDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InsertDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckedListBox^ Paid;
	private: System::Windows::Forms::CheckBox^ Pending;
	private: System::Windows::Forms::CheckBox^ Overdue;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Detail;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Paid = (gcnew System::Windows::Forms::CheckedListBox());
			this->Pending = (gcnew System::Windows::Forms::CheckBox());
			this->Overdue = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Detail = (gcnew System::Windows::Forms::Button());
			this->PaidBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Total Tuition";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(158, 58);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(43, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Student ID";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 37;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Academic Year";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Semester";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(495, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Due Date";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(610, 190);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(264, 20);
			this->textBox7->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(495, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Outstanding Balance";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(610, 54);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(264, 20);
			this->textBox10->TabIndex = 55;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(495, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Additional Fees";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(610, 96);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(264, 20);
			this->textBox11->TabIndex = 53;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(495, 99);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 13);
			this->label11->TabIndex = 52;
			this->label11->Text = L"Payment Amount";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 264);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 50;
			this->label12->Text = L"Payment Status";
			// 
			// Paid
			// 
			this->Paid->FormattingEnabled = true;
			this->Paid->Location = System::Drawing::Point(158, 256);
			this->Paid->Name = L"Paid";
			this->Paid->Size = System::Drawing::Size(262, 79);
			this->Paid->TabIndex = 58;
			this->Paid->SelectedIndexChanged += gcnew System::EventHandler(this, &InsertDetails::Paid_SelectedIndexChanged);
			// 
			// Pending
			// 
			this->Pending->AutoSize = true;
			this->Pending->Location = System::Drawing::Point(161, 276);
			this->Pending->Name = L"Pending";
			this->Pending->Size = System::Drawing::Size(65, 17);
			this->Pending->TabIndex = 59;
			this->Pending->Text = L"Pending";
			this->Pending->UseVisualStyleBackColor = true;
			// 
			// Overdue
			// 
			this->Overdue->AutoSize = true;
			this->Overdue->Location = System::Drawing::Point(162, 298);
			this->Overdue->Name = L"Overdue";
			this->Overdue->Size = System::Drawing::Size(67, 17);
			this->Overdue->TabIndex = 60;
			this->Overdue->Text = L"Overdue";
			this->Overdue->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(610, 151);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(235, 20);
			this->dateTimePicker1->TabIndex = 61;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(219, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Detail
			// 
			this->Detail->Location = System::Drawing::Point(637, 399);
			this->Detail->Name = L"Detail";
			this->Detail->Size = System::Drawing::Size(163, 50);
			this->Detail->TabIndex = 62;
			this->Detail->Text = L"Add Details";
			this->Detail->UseVisualStyleBackColor = true;
			this->Detail->Click += gcnew System::EventHandler(this, &InsertDetails::Detail_Click);
			// 
			// PaidBox
			// 
			this->PaidBox->AutoSize = true;
			this->PaidBox->Location = System::Drawing::Point(302, 276);
			this->PaidBox->Name = L"PaidBox";
			this->PaidBox->Size = System::Drawing::Size(47, 17);
			this->PaidBox->TabIndex = 64;
			this->PaidBox->Text = L"Paid";
			this->PaidBox->UseVisualStyleBackColor = true;
			// 
			// InsertDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 553);
			this->Controls->Add(this->PaidBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Detail);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->Overdue);
			this->Controls->Add(this->Pending);
			this->Controls->Add(this->Paid);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"InsertDetails";
			this->Text = L"InsertDetails";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Detail_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Create MySQL connection
			MySqlConnection^ sqlConn = gcnew MySqlConnection();
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
			sqlConn->Open();

			// Prepare the SQL insert statement
			String^ sqlQuery = "INSERT INTO icp_financial_management " +
				"(student_id, academic_year, semester, total_tuition_amount, " +
				"additional_fees, payment_amount, due_date, outstanding_balance, payment_status) " +
				"VALUES (@StudentID, @AcademicYear, @Semester, @TotalTuition, " +
				"@AdditionalFees, @PaymentAmount, @DueDate, @OutstandingBalance, @PaymentStatus)";

			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, sqlConn);

			// Add parameters
			cmd->Parameters->AddWithValue("@StudentID", textBox6->Text);
			cmd->Parameters->AddWithValue("@AcademicYear", textBox5->Text);
			cmd->Parameters->AddWithValue("@Semester", textBox1->Text);
			cmd->Parameters->AddWithValue("@TotalTuition", Convert::ToDecimal(textBox2->Text));
			cmd->Parameters->AddWithValue("@AdditionalFees", Convert::ToDecimal(textBox10->Text));
			cmd->Parameters->AddWithValue("@PaymentAmount", Convert::ToDecimal(textBox11->Text));
			cmd->Parameters->AddWithValue("@DueDate", dateTimePicker1->Value);
			cmd->Parameters->AddWithValue("@OutstandingBalance", Convert::ToDecimal(textBox7->Text));

			// Determine payment status
			String^ paymentStatus;
			if (Pending->Checked)
				paymentStatus = "pending";
			else if (Overdue->Checked)
				paymentStatus = "overdue";
			else if(PaidBox->Checked)
				paymentStatus = "paid";

			cmd->Parameters->AddWithValue("@PaymentStatus", paymentStatus);

			// Execute the command
			int rowsAffected = cmd->ExecuteNonQuery();

			// Close the connection
			sqlConn->Close();

			// Show success message
			MessageBox::Show("Financial details added successfully!", "Success",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Optionally clear the form after successful insertion
			ClearForm();
		}
		catch (Exception^ ex) {
			// Show error message
			MessageBox::Show("Error: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   private: System::Void ClearForm() {
			   textBox6->Clear();  // Student ID
			   textBox5->Clear();  // Academic Year
			   textBox1->Clear();  // Semester
			   textBox2->Clear();  // Total Tuition
			   textBox10->Clear(); // Additional Fees
			   textBox11->Clear(); // Payment Amount
			   textBox7->Clear();  // Outstanding Balance

			   Pending->Checked = false;
			   Overdue->Checked = false;

			   dateTimePicker1->Value = DateTime::Now;
		   }
private: System::Void Paid_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
