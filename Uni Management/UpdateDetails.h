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
	/// Summary for UpdateDetails
	/// </summary>
	public ref class UpdateDetails : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		UpdateDetails(void)
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
		~UpdateDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ PaidBox;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::CheckBox^ Overdue;
	private: System::Windows::Forms::CheckBox^ Pending;
	private: System::Windows::Forms::CheckedListBox^ Paid;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->PaidBox = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Overdue = (gcnew System::Windows::Forms::CheckBox());
			this->Pending = (gcnew System::Windows::Forms::CheckBox());
			this->Paid = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Detail = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PaidBox
			// 
			this->PaidBox->AutoSize = true;
			this->PaidBox->Location = System::Drawing::Point(320, 286);
			this->PaidBox->Name = L"PaidBox";
			this->PaidBox->Size = System::Drawing::Size(47, 17);
			this->PaidBox->TabIndex = 85;
			this->PaidBox->Text = L"Paid";
			this->PaidBox->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(628, 161);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(235, 20);
			this->dateTimePicker1->TabIndex = 84;
			// 
			// Overdue
			// 
			this->Overdue->AutoSize = true;
			this->Overdue->Location = System::Drawing::Point(180, 308);
			this->Overdue->Name = L"Overdue";
			this->Overdue->Size = System::Drawing::Size(67, 17);
			this->Overdue->TabIndex = 83;
			this->Overdue->Text = L"Overdue";
			this->Overdue->UseVisualStyleBackColor = true;
			// 
			// Pending
			// 
			this->Pending->AutoSize = true;
			this->Pending->Location = System::Drawing::Point(179, 286);
			this->Pending->Name = L"Pending";
			this->Pending->Size = System::Drawing::Size(65, 17);
			this->Pending->TabIndex = 82;
			this->Pending->Text = L"Pending";
			this->Pending->UseVisualStyleBackColor = true;
			// 
			// Paid
			// 
			this->Paid->FormattingEnabled = true;
			this->Paid->Location = System::Drawing::Point(176, 266);
			this->Paid->Name = L"Paid";
			this->Paid->Size = System::Drawing::Size(262, 79);
			this->Paid->TabIndex = 81;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(628, 64);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(264, 20);
			this->textBox10->TabIndex = 80;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(513, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 79;
			this->label10->Text = L"Additional Fees";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(628, 106);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(264, 20);
			this->textBox11->TabIndex = 78;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(513, 109);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 13);
			this->label11->TabIndex = 77;
			this->label11->Text = L"Payment Amount";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(60, 274);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 76;
			this->label12->Text = L"Payment Status";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(513, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 75;
			this->label4->Text = L"Due Date";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(628, 200);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(264, 20);
			this->textBox7->TabIndex = 74;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(513, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Outstanding Balance";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 72;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 71;
			this->label1->Text = L"Total Tuition";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(176, 68);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 20);
			this->textBox6->TabIndex = 70;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(61, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 69;
			this->label6->Text = L"Student ID";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(176, 110);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(264, 20);
			this->textBox5->TabIndex = 68;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(61, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 67;
			this->label5->Text = L"Academic Year";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 66;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Semester";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(218, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 87;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Detail
			// 
			this->Detail->Location = System::Drawing::Point(636, 443);
			this->Detail->Name = L"Detail";
			this->Detail->Size = System::Drawing::Size(163, 50);
			this->Detail->TabIndex = 86;
			this->Detail->Text = L"Update Details";
			this->Detail->UseVisualStyleBackColor = true;
			this->Detail->Click += gcnew System::EventHandler(this, &UpdateDetails::Detail_Click);
			// 
			// UpdateDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 609);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Detail);
			this->Controls->Add(this->PaidBox);
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
			this->Name = L"UpdateDetails";
			this->Text = L"UpdateDetails";
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

			// Prepare the SQL update statement
			String^ sqlQuery = "UPDATE icp_financial_management " +
				"SET academic_year = @AcademicYear, " +
				"semester = @Semester, " +
				"total_tuition_amount = @TotalTuition, " +
				"additional_fees = @AdditionalFees, " +
				"payment_amount = @PaymentAmount, " +
				"due_date = @DueDate, " +
				"outstanding_balance = @OutstandingBalance, " +
				"payment_status = @PaymentStatus " +
				"WHERE student_id = @StudentID";

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
			else if (PaidBox->Checked)
				paymentStatus = "paid";
			else
				paymentStatus = "pending"; // Default to pending if no status selected

			cmd->Parameters->AddWithValue("@PaymentStatus", paymentStatus);

			// Execute the command
			int rowsAffected = cmd->ExecuteNonQuery();

			// Close the connection
			sqlConn->Close();

			// Check if update was successful
			if (rowsAffected > 0) {
				MessageBox::Show("Financial details updated successfully!", "Success",
					MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Optionally clear the form after successful update
				ClearForm();
			}
			else {
				MessageBox::Show("No record found with the given Student ID. Update failed.", "Update Error",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
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
			   PaidBox->Checked = false;

			   dateTimePicker1->Value = DateTime::Now;
		   }
};
}
