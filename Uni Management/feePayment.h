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
	/// Summary for feePayment
	/// </summary>
	public ref class feePayment : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private:
		String^ UserEmail;
	public:
		feePayment(String^ Email)
		{
			InitializeComponent();
			UserEmail = Email;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~feePayment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 1094);
			this->panel1->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(11, 965);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(317, 68);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Transcripts";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(21, 596);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(206, 39);
			this->button7->TabIndex = 7;
			this->button7->Text = L"BACK";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &feePayment::button7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(252, 241);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(362, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1157, 128);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20));
			this->label1->Location = System::Drawing::Point(327, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FEE PAYMENT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label2->Location = System::Drawing::Point(358, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Arrears";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(477, 195);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(659, 158);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &feePayment::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(477, 555);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 81);
			this->button1->TabIndex = 6;
			this->button1->Text = L"PAY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &feePayment::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(963, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 81);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label3->Location = System::Drawing::Point(454, 461);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Amount";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(599, 461);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(414, 50);
			this->textBox1->TabIndex = 9;
			// 
			// feePayment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 663);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->Name = L"feePayment";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &feePayment::feePayment_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void feePayment_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadArrearsData();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void LoadArrearsData()
		   {
			   try
			   {
				   // Database connection
				   MySqlConnection^ sqlConn = gcnew MySqlConnection();
				   sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";

				   // Open the connection
				   sqlConn->Open();

				   // Create SQL command to join multiple tables and filter by email
				   MySqlCommand^ sqlCmd = gcnew MySqlCommand(
					   "SELECT s.student_id, s.fname, s.lname, " +
					   "fm.academic_year, fm.semester, " +
					   "fm.total_tuition_amount, fm.outstanding_balance, " +
					   "fm.payment_status, fm.arrears_description " +
					   "FROM icp_financial_management fm " +
					   "JOIN icp_students s ON fm.student_id = s.student_id " +
					   "JOIN icp_users u ON s.user_id = u.user_id " +
					   "WHERE u.email = @UserEmail",
					   sqlConn);

				   // Add parameter for user email
				   sqlCmd->Parameters->AddWithValue("@UserEmail", UserEmail);

				   // Create data adapter and table
				   MySqlDataAdapter^ sqlAdapter = gcnew MySqlDataAdapter(sqlCmd);
				   DataTable^ dataTable = gcnew DataTable();

				   // Fill the data table
				   sqlAdapter->Fill(dataTable);

				   // Bind to DataGridView
				   dataGridView1->DataSource = dataTable;

				   // Close the connection
				   sqlConn->Close();
			   }
			   catch (Exception^ ex)
			   {
				   // Error handling
				   MessageBox::Show("Error loading arrears data: " + ex->Message, "Database Error",
					   MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }

		   }

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Validate input
		if (String::IsNullOrWhiteSpace(textBox1->Text)) {
			MessageBox::Show("Please enter a payment amount.", "Invalid Input",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Parse the payment amount
		Decimal paymentAmount;
		if (!Decimal::TryParse(textBox1->Text, paymentAmount)) {
			MessageBox::Show("Please enter a valid numeric amount.", "Invalid Input",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Database connection
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";

		// Open the connection
		sqlConn->Open();

		// Prepare SQL command to update payment
		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"UPDATE icp_financial_management fm " +
			"JOIN icp_students s ON fm.student_id = s.student_id " +
			"JOIN icp_users u ON s.user_id = u.user_id " +
			"SET fm.payment_amount = fm.payment_amount + @PaymentAmount, " +
			"    fm.outstanding_balance = fm.outstanding_balance - @PaymentAmount, " +
			"    fm.payment_date = CURRENT_DATE, " +
			"    fm.payment_status = CASE " +
			"        WHEN fm.outstanding_balance - @PaymentAmount <= 0 THEN 'paid' " +
			"        ELSE 'pending' " +
			"    END " +
			"WHERE u.email = @UserEmail",
			sqlConn);

		// Add parameters
		sqlCmd->Parameters->AddWithValue("@PaymentAmount", paymentAmount);
		sqlCmd->Parameters->AddWithValue("@UserEmail", UserEmail);

		// Execute the update
		int rowsAffected = sqlCmd->ExecuteNonQuery();

		// Close the connection
		sqlConn->Close();

		// Check if update was successful
		if (rowsAffected > 0) {
			MessageBox::Show("Payment successful!", "Payment Confirmed",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Refresh the arrears data
			LoadArrearsData();
		}
		else {
			MessageBox::Show("No records found to update.", "Payment Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		// Error handling
		MessageBox::Show("Error processing payment: " + ex->Message, "Database Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}