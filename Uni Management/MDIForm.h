#pragma once

#include "StudentDashboard.h"
#include "FacultyDashboard.h"
#include "AdminDashboard.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MDIForm
	/// </summary>
	public ref class MDIForm : public System::Windows::Forms::Form
	{
	private:
		String^ userRole;
		String^ userEmail;
	
		
	public:
		MDIForm(String^ role, String^ email)
		{
			InitializeComponent();

			// Store the user role
			userRole = role;
			userEmail = email;

			toolStripStatusLabel1->Text = "User: " + userEmail;
			toolStripStatusLabel2->Text = "Role: " + userRole;



			// Define a Handler for Form Closing
			this->FormClosing += gcnew FormClosingEventHandler(this, &MDIForm::OnFormClosing);
			studentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MDIForm::studentToolStripMenuItem_Click);

			// Configure menu visibility based on role
			ConfigureMenuVisibility();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		void OnFormClosing(Object^ sender, FormClosingEventArgs^ e) {
			// Custom code before the form closes

			if (MessageBox::Show("Are you sure you want to close?", "Confirm Close",
				MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No) {
				e->Cancel = true; // Cancel the close operation
			}
			else {
				Application::Exit();
			}
		}
		void ConfigureMenuVisibility() {
			// Hide all role-specific menus by default
			studentToolStripMenuItem->Visible = false;
			facultyToolStripMenuItem->Visible = false;
			adminToolStripMenuItem->Visible = false;

			// Show menu based on user role
			if (userRole == "student") {
				studentToolStripMenuItem->Visible = true;
			}
			else if (userRole == "faculty") {
				facultyToolStripMenuItem->Visible = true;
			}
			else if (userRole == "admin") {
				adminToolStripMenuItem->Visible = true;
			}
			else {
				// If role is not recognized, show all menus (for testing/fallback)
				studentToolStripMenuItem->Visible = true;
				facultyToolStripMenuItem->Visible = true;
				adminToolStripMenuItem->Visible = true;
			}
		}

		~MDIForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:











	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;

	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;




	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changePasswordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitApplicationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MDIForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->studentToolStripMenuItem, this->facultyToolStripMenuItem, this->adminToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1039, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->manageProfileToolStripMenuItem,
					this->changePasswordToolStripMenuItem, this->logoutToolStripMenuItem, this->exitApplicationsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 22);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// manageProfileToolStripMenuItem
			// 
			this->manageProfileToolStripMenuItem->Name = L"manageProfileToolStripMenuItem";
			this->manageProfileToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->manageProfileToolStripMenuItem->Text = L"Manage Profile";
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->changePasswordToolStripMenuItem->Text = L"Change Password";
			// 
			// logoutToolStripMenuItem
			// 
			this->logoutToolStripMenuItem->Name = L"logoutToolStripMenuItem";
			this->logoutToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->logoutToolStripMenuItem->Text = L"Logout";
			// 
			// exitApplicationsToolStripMenuItem
			// 
			this->exitApplicationsToolStripMenuItem->Name = L"exitApplicationsToolStripMenuItem";
			this->exitApplicationsToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->exitApplicationsToolStripMenuItem->Text = L"Exit Applications";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(60, 22);
			this->studentToolStripMenuItem->Text = L"Student";
			this->studentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MDIForm::studentToolStripMenuItem_Click);
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(57, 22);
			this->facultyToolStripMenuItem->Text = L"Faculty";
			this->facultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MDIForm::facultyToolStripMenuItem_Click);
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(55, 22);
			this->adminToolStripMenuItem->Text = L"Admin";
			this->adminToolStripMenuItem->Click += gcnew System::EventHandler(this, &MDIForm::adminToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 537);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1039, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(36, 17);
			this->toolStripStatusLabel1->Text = L"User: ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(33, 17);
			this->toolStripStatusLabel2->Text = L"Role:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 42);
			this->label1->TabIndex = 6;
			// 
			// MDIForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 559);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MDIForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"University Record Management";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MDIForm::MDIForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MDIForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}


		   
	private: System::Void toolStripProgressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void studentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		StudentDashboard^ studentDashboard = gcnew StudentDashboard(userEmail);

		// Set the StudentDashboard as a child of this MDI parent form
		studentDashboard->MdiParent = this;

		// Show the StudentDashboard
		studentDashboard->Show();
	}
private: System::Void facultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	FacultyDashboard^ facultyDashboard = gcnew FacultyDashboard(userEmail);

	// Set the StudentDashboard as a child of this MDI parent form
	facultyDashboard->MdiParent = this;

	// Show the StudentDashboard
	facultyDashboard->Show();

}
private: System::Void adminToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	AdminDashboard^ adminDashboard = gcnew AdminDashboard();
	

	// Set the StudentDashboard as a child of this MDI parent form
	adminDashboard->MdiParent = this;

	// Show the StudentDashboard
	adminDashboard->Show();
}
};
}
