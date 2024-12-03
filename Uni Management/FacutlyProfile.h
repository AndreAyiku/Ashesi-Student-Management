#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyProfile
	/// </summary>
	public ref class FacutlyProfile : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private:
		String^ userEmail;
		int userId;
		int facultyId;
	public:
		FacutlyProfile(String^ email)
		{
			InitializeComponent();
			userEmail = email;
			LoadFacultyProfile();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacutlyProfile()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		void LoadFacultyProfile()
		{
			try
			{
				// Set up MySQL connection directly
				sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
				sqlConn->Open();
				sqlCmd->Connection = sqlConn;

				// First, get user details
				sqlCmd->CommandText = "SELECT user_id, first_name, last_name FROM icp_users WHERE email = @email";
				sqlCmd->Parameters->Clear();
				sqlCmd->Parameters->AddWithValue("@email", userEmail);

				MySqlDataReader^ userReader = sqlCmd->ExecuteReader();

				if (userReader->Read())
				{
					userId = userReader->GetInt32("user_id");
					txtFirstName->Text = userReader->GetString("first_name");
					txtLastName->Text = userReader->GetString("last_name");
					label2->Text = txtFirstName->Text + " " + txtLastName->Text;
				}
				userReader->Close();

				// Then, get faculty details
				sqlCmd->CommandText = "SELECT faculty_id, department FROM icp_faculty WHERE email = @email";
				sqlCmd->Parameters->Clear();
				sqlCmd->Parameters->AddWithValue("@email", userEmail);

				MySqlDataReader^ facultyReader = sqlCmd->ExecuteReader();

				if (facultyReader->Read())
				{
					facultyId = facultyReader->GetInt32("faculty_id");
					txtDepartment->Text = facultyReader->GetString("department");
					label4->Text = "Department: " + txtDepartment->Text;

					
				}
				facultyReader->Close();

				// Set email
				textBox1->Text = userEmail;
				label5->Text = userEmail;

				// Close the connection
				sqlConn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error loading faculty profile: " + ex->Message,
					"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

				// Ensure connection is closed in case of an exception
				if (sqlConn->State == System::Data::ConnectionState::Open)
					sqlConn->Close();
			}
		}

		// UI components
	private: System::Windows::Forms::Panel^ sidebarPanel;
	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::Label^ lblDepartment;
	private: System::Windows::Forms::TextBox^ txtDepartment;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSaveProfile;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacutlyProfile::typeid));
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->lblFirstName = (gcnew System::Windows::Forms::Label());
			   this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			   this->lblLastName = (gcnew System::Windows::Forms::Label());
			   this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			   this->lblDepartment = (gcnew System::Windows::Forms::Label());
			   this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
			   this->btnSaveProfile = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // sidebarPanel
			   // 
			   this->sidebarPanel->BackColor = System::Drawing::Color::Maroon;
			   this->sidebarPanel->Controls->Add(this->pictureBox1);
			   this->sidebarPanel->Controls->Add(this->btnDashboard);
			   this->sidebarPanel->Dock = System::Windows::Forms::DockStyle::Left;
			   this->sidebarPanel->Location = System::Drawing::Point(0, 0);
			   this->sidebarPanel->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->sidebarPanel->Name = L"sidebarPanel";
			   this->sidebarPanel->Size = System::Drawing::Size(176, 547);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(26, 18);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(112, 105);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->BackColor = System::Drawing::Color::Maroon;
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold));
			   this->btnDashboard->ForeColor = System::Drawing::Color::White;
			   this->btnDashboard->Location = System::Drawing::Point(17, 445);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(105, 41);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = false;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FacutlyProfile::btnDashboard_Click);
			   // 
			   // lblFirstName
			   // 
			   this->lblFirstName->AutoSize = true;
			   this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblFirstName->Location = System::Drawing::Point(247, 272);
			   this->lblFirstName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->lblFirstName->Name = L"lblFirstName";
			   this->lblFirstName->Size = System::Drawing::Size(78, 19);
			   this->lblFirstName->TabIndex = 1;
			   this->lblFirstName->Text = L"First Name:";
			   this->lblFirstName->Click += gcnew System::EventHandler(this, &FacutlyProfile::lblFirstName_Click);
			   // 
			   // txtFirstName
			   // 
			   this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtFirstName->Location = System::Drawing::Point(247, 288);
			   this->txtFirstName->Margin = System::Windows::Forms::Padding(2);
			   this->txtFirstName->Name = L"txtFirstName";
			   this->txtFirstName->Size = System::Drawing::Size(379, 25);
			   this->txtFirstName->TabIndex = 2;
			   this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &FacutlyProfile::txtFirstName_TextChanged);
			   // 
			   // lblLastName
			   // 
			   this->lblLastName->AutoSize = true;
			   this->lblLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblLastName->Location = System::Drawing::Point(247, 314);
			   this->lblLastName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->lblLastName->Name = L"lblLastName";
			   this->lblLastName->Size = System::Drawing::Size(77, 19);
			   this->lblLastName->TabIndex = 3;
			   this->lblLastName->Text = L"Last Name:";
			   this->lblLastName->Click += gcnew System::EventHandler(this, &FacutlyProfile::lblLastName_Click);
			   // 
			   // txtLastName
			   // 
			   this->txtLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtLastName->Location = System::Drawing::Point(247, 329);
			   this->txtLastName->Margin = System::Windows::Forms::Padding(2);
			   this->txtLastName->Name = L"txtLastName";
			   this->txtLastName->Size = System::Drawing::Size(379, 25);
			   this->txtLastName->TabIndex = 4;
			   this->txtLastName->TextChanged += gcnew System::EventHandler(this, &FacutlyProfile::txtLastName_TextChanged);
			   // 
			   // lblDepartment
			   // 
			   this->lblDepartment->AutoSize = true;
			   this->lblDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblDepartment->Location = System::Drawing::Point(247, 355);
			   this->lblDepartment->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->lblDepartment->Name = L"lblDepartment";
			   this->lblDepartment->Size = System::Drawing::Size(86, 19);
			   this->lblDepartment->TabIndex = 5;
			   this->lblDepartment->Text = L"Department:";
			   this->lblDepartment->Click += gcnew System::EventHandler(this, &FacutlyProfile::lblDepartment_Click);
			   // 
			   // txtDepartment
			   // 
			   this->txtDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtDepartment->Location = System::Drawing::Point(247, 371);
			   this->txtDepartment->Margin = System::Windows::Forms::Padding(2);
			   this->txtDepartment->Name = L"txtDepartment";
			   this->txtDepartment->Size = System::Drawing::Size(379, 25);
			   this->txtDepartment->TabIndex = 6;
			   this->txtDepartment->TextChanged += gcnew System::EventHandler(this, &FacutlyProfile::txtDepartment_TextChanged);
			   // 
			   // btnSaveProfile
			   // 
			   this->btnSaveProfile->BackColor = System::Drawing::Color::Maroon;
			   this->btnSaveProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSaveProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->btnSaveProfile->ForeColor = System::Drawing::Color::White;
			   this->btnSaveProfile->Location = System::Drawing::Point(251, 442);
			   this->btnSaveProfile->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->btnSaveProfile->Name = L"btnSaveProfile";
			   this->btnSaveProfile->Size = System::Drawing::Size(150, 29);
			   this->btnSaveProfile->TabIndex = 7;
			   this->btnSaveProfile->Text = L"Save Profile";
			   this->btnSaveProfile->UseVisualStyleBackColor = false;
			   this->btnSaveProfile->Click += gcnew System::EventHandler(this, &FacutlyProfile::btnSaveProfile_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(243, 56);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(77, 24);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Name: ";
			   this->label1->Click += gcnew System::EventHandler(this, &FacutlyProfile::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(326, 56);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(256, 25);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Place holder for full name";
			   this->label2->Click += gcnew System::EventHandler(this, &FacutlyProfile::label2_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(243, 109);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(129, 24);
			   this->label4->TabIndex = 10;
			   this->label4->Text = L"Department: ";
			   this->label4->Click += gcnew System::EventHandler(this, &FacutlyProfile::label4_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(326, 164);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(256, 25);
			   this->label5->TabIndex = 13;
			   this->label5->Text = L"Place holder for full name";
			   this->label5->Click += gcnew System::EventHandler(this, &FacutlyProfile::label5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(243, 164);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(74, 24);
			   this->label6->TabIndex = 12;
			   this->label6->Text = L"Email: ";
			   this->label6->Click += gcnew System::EventHandler(this, &FacutlyProfile::label6_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->textBox1->Location = System::Drawing::Point(247, 412);
			   this->textBox1->Margin = System::Windows::Forms::Padding(2);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(379, 25);
			   this->textBox1->TabIndex = 15;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &FacutlyProfile::textBox1_TextChanged);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->label7->Location = System::Drawing::Point(247, 396);
			   this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(44, 19);
			   this->label7->TabIndex = 14;
			   this->label7->Text = L"Email:";
			   this->label7->Click += gcnew System::EventHandler(this, &FacutlyProfile::label7_Click);
			   // 
			   // FacutlyProfile
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(902, 547);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->btnSaveProfile);
			   this->Controls->Add(this->txtDepartment);
			   this->Controls->Add(this->lblDepartment);
			   this->Controls->Add(this->txtLastName);
			   this->Controls->Add(this->lblLastName);
			   this->Controls->Add(this->txtFirstName);
			   this->Controls->Add(this->lblFirstName);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"FacutlyProfile";
			   this->Text = L"Faculty Profile";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   // Button click event handlers

		   // Navigate back to the Faculty Dashboard
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

		   // Save Profile changes
	private: System::Void btnSaveProfile_Click(System::Object^ sender, System::EventArgs^ e)
	{
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

			// Update faculty table
			sqlCmd->CommandText = "UPDATE icp_faculty SET firstname = @firstName, lastname = @lastName, department = @department WHERE faculty_id = @facultyId";
			sqlCmd->Parameters->Clear();
			sqlCmd->Parameters->AddWithValue("@firstName", txtFirstName->Text);
			sqlCmd->Parameters->AddWithValue("@lastName", txtLastName->Text);
			sqlCmd->Parameters->AddWithValue("@department", txtDepartment->Text);
			sqlCmd->Parameters->AddWithValue("@facultyId", facultyId);
			sqlCmd->ExecuteNonQuery();

			// Close the connection
			sqlConn->Close();

			// Update labels to reflect changes
			label2->Text = txtFirstName->Text + " " + txtLastName->Text;
			label4->Text = "Department: " + txtDepartment->Text;

			MessageBox::Show("Profile updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error updating profile: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDepartment_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblDepartment_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtLastName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblLastName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblFirstName_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}