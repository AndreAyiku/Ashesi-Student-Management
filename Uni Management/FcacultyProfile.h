#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyProfile
	/// </summary>
	public ref class FcacultyProfile : public System::Windows::Forms::Form
	{
	public:
		FcacultyProfile(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FcacultyProfile()
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
	private: System::Windows::Forms::Button^ btnSaveProfile;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FcacultyProfile::typeid));
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->lblFirstName = (gcnew System::Windows::Forms::Label());
			   this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			   this->lblLastName = (gcnew System::Windows::Forms::Label());
			   this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			   this->lblDepartment = (gcnew System::Windows::Forms::Label());
			   this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
			   this->btnSaveProfile = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			   this->sidebarPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->sidebarPanel->Name = L"sidebarPanel";
			   this->sidebarPanel->Size = System::Drawing::Size(352, 957);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->BackColor = System::Drawing::Color::Maroon;
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold));
			   this->btnDashboard->ForeColor = System::Drawing::Color::White;
			   this->btnDashboard->Location = System::Drawing::Point(34, 855);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(210, 78);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = false;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FcacultyProfile::btnDashboard_Click);
			   // 
			   // lblFirstName
			   // 
			   this->lblFirstName->AutoSize = true;
			   this->lblFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblFirstName->Location = System::Drawing::Point(360, 100);
			   this->lblFirstName->Name = L"lblFirstName";
			   this->lblFirstName->Size = System::Drawing::Size(150, 37);
			   this->lblFirstName->TabIndex = 1;
			   this->lblFirstName->Text = L"First Name:";
			   // 
			   // txtFirstName
			   // 
			   this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtFirstName->Location = System::Drawing::Point(360, 130);
			   this->txtFirstName->Name = L"txtFirstName";
			   this->txtFirstName->Size = System::Drawing::Size(300, 43);
			   this->txtFirstName->TabIndex = 2;
			   // 
			   // lblLastName
			   // 
			   this->lblLastName->AutoSize = true;
			   this->lblLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblLastName->Location = System::Drawing::Point(360, 180);
			   this->lblLastName->Name = L"lblLastName";
			   this->lblLastName->Size = System::Drawing::Size(148, 37);
			   this->lblLastName->TabIndex = 3;
			   this->lblLastName->Text = L"Last Name:";
			   // 
			   // txtLastName
			   // 
			   this->txtLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtLastName->Location = System::Drawing::Point(360, 210);
			   this->txtLastName->Name = L"txtLastName";
			   this->txtLastName->Size = System::Drawing::Size(300, 43);
			   this->txtLastName->TabIndex = 4;
			   // 
			   // lblDepartment
			   // 
			   this->lblDepartment->AutoSize = true;
			   this->lblDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblDepartment->Location = System::Drawing::Point(360, 260);
			   this->lblDepartment->Name = L"lblDepartment";
			   this->lblDepartment->Size = System::Drawing::Size(165, 37);
			   this->lblDepartment->TabIndex = 5;
			   this->lblDepartment->Text = L"Department:";
			   // 
			   // txtDepartment
			   // 
			   this->txtDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtDepartment->Location = System::Drawing::Point(360, 290);
			   this->txtDepartment->Name = L"txtDepartment";
			   this->txtDepartment->Size = System::Drawing::Size(300, 43);
			   this->txtDepartment->TabIndex = 6;
			   // 
			   // btnSaveProfile
			   // 
			   this->btnSaveProfile->BackColor = System::Drawing::Color::Maroon;
			   this->btnSaveProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSaveProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->btnSaveProfile->ForeColor = System::Drawing::Color::White;
			   this->btnSaveProfile->Location = System::Drawing::Point(360, 350);
			   this->btnSaveProfile->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnSaveProfile->Name = L"btnSaveProfile";
			   this->btnSaveProfile->Size = System::Drawing::Size(300, 56);
			   this->btnSaveProfile->TabIndex = 7;
			   this->btnSaveProfile->Text = L"Save Profile";
			   this->btnSaveProfile->UseVisualStyleBackColor = false;
			   this->btnSaveProfile->Click += gcnew System::EventHandler(this, &FcacultyProfile::btnSaveProfile_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(53, 34);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(224, 202);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // FcacultyProfile
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1407, 957);
			   this->Controls->Add(this->btnSaveProfile);
			   this->Controls->Add(this->txtDepartment);
			   this->Controls->Add(this->lblDepartment);
			   this->Controls->Add(this->txtLastName);
			   this->Controls->Add(this->lblLastName);
			   this->Controls->Add(this->txtFirstName);
			   this->Controls->Add(this->lblFirstName);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"FcacultyProfile";
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
		MessageBox::Show("Navigating to Faculty Dashboard");
	}

		   // Save Profile changes
	private: System::Void btnSaveProfile_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Placeholder for saving profile changes
		MessageBox::Show("Profile updated successfully!");

		// Here, you would implement logic to update the profile in the backend (database)
	}
	};
}
