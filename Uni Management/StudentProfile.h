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
	/// Summary for StudentProfile
	/// </summary>
	public ref class StudentProfile : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();

	private:
		String^ UserEmail;
		int userId;
		int studentId;
	public:
		StudentProfile(String^ email)
		{
			InitializeComponent();
			UserEmail = email;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel7;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSaveProfile;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentProfile::typeid));
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSaveProfile = (gcnew System::Windows::Forms::Button());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Maroon;
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->pictureBox1);
			this->panel7->Location = System::Drawing::Point(0, -114);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(131, 877);
			this->panel7->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(8, 126);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(116, 118);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 616);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 72);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(4, 4);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(131, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(531, 58);
			this->panel2->TabIndex = 17;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentProfile::panel2_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(152, 10);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"MY PROFILE";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox1->Location = System::Drawing::Point(170, 403);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(379, 25);
			this->textBox1->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label7->Location = System::Drawing::Point(170, 380);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 19);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(249, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Place holder for full name";
			this->label5->Click += gcnew System::EventHandler(this, &StudentProfile::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(166, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 24);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Email: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(249, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 25);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Place holder for full name";
			this->label1->Click += gcnew System::EventHandler(this, &StudentProfile::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(166, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 24);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Name: ";
			// 
			// btnSaveProfile
			// 
			this->btnSaveProfile->BackColor = System::Drawing::Color::Maroon;
			this->btnSaveProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btnSaveProfile->ForeColor = System::Drawing::Color::White;
			this->btnSaveProfile->Location = System::Drawing::Point(174, 466);
			this->btnSaveProfile->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnSaveProfile->Name = L"btnSaveProfile";
			this->btnSaveProfile->Size = System::Drawing::Size(150, 29);
			this->btnSaveProfile->TabIndex = 24;
			this->btnSaveProfile->Text = L"Save Profile";
			this->btnSaveProfile->UseVisualStyleBackColor = false;
			this->btnSaveProfile->Click += gcnew System::EventHandler(this, &StudentProfile::btnSaveProfile_Click);
			// 
			// txtLastName
			// 
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtLastName->Location = System::Drawing::Point(170, 353);
			this->txtLastName->Margin = System::Windows::Forms::Padding(2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(379, 25);
			this->txtLastName->TabIndex = 21;
			this->txtLastName->TextChanged += gcnew System::EventHandler(this, &StudentProfile::txtLastName_TextChanged);
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblLastName->Location = System::Drawing::Point(170, 338);
			this->lblLastName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(77, 19);
			this->lblLastName->TabIndex = 20;
			this->lblLastName->Text = L"Last Name:";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtFirstName->Location = System::Drawing::Point(170, 312);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(2);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(379, 25);
			this->txtFirstName->TabIndex = 19;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &StudentProfile::txtFirstName_TextChanged);
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblFirstName->Location = System::Drawing::Point(170, 296);
			this->lblFirstName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(78, 19);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"First Name:";
			// 
			// StudentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 552);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnSaveProfile);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->lblLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel7);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentProfile";
			this->Text = L"StudentProfile";
			this->Load += gcnew System::EventHandler(this, &StudentProfile::StudentProfile_Load);
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StudentProfile_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btnSaveProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Set up MySQL connection directly
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		sqlCmd->Connection = sqlConn;

		// Update users table
		sqlCmd->CommandText = "UPDATE icp_users SET first_name = @firstName, last_name = @lastName WHERE user_id = @userId";
		sqlCmd->Parameters->Clear();
		sqlCmd->Parameters->AddWithValue("@firstName", txtFirstName->Text);
		sqlCmd->Parameters->AddWithValue("@lastName", txtLastName->Text);
		sqlCmd->Parameters->AddWithValue("@userId", userId);
		sqlCmd->ExecuteNonQuery();

		// Update students table
		sqlCmd->CommandText = "UPDATE icp_students SET fname = @firstName, lname = @lastName WHERE student_id = @studentId";
		sqlCmd->Parameters->Clear();
		sqlCmd->Parameters->AddWithValue("@firstName", txtFirstName->Text);
		sqlCmd->Parameters->AddWithValue("@lastName", txtLastName->Text);
		sqlCmd->Parameters->AddWithValue("@studentId", studentId);
		sqlCmd->ExecuteNonQuery();

		// Close the connection
		sqlConn->Close();

		// Update labels to reflect changes
		label1->Text = txtFirstName->Text + " " + txtLastName->Text;
		label5->Text = UserEmail;

		MessageBox::Show("Profile updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error updating profile: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtLastName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}