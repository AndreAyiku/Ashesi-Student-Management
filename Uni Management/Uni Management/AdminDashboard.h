#pragma once


#include "StudentManage.h"
#include "FacultyManage.h"
#include "CourseManage.h"
#include "Finacial.h"

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for ImprovedAdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
		   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Button^ FinancialManagement;



	private: System::Windows::Forms::Button^ ManageCourses;

	private: System::Windows::Forms::Button^ ManageFaculty;

	private: System::Windows::Forms::Button^ ManageStudents;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button10;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->FinancialManagement = (gcnew System::Windows::Forms::Button());
			this->ManageCourses = (gcnew System::Windows::Forms::Button());
			this->ManageFaculty = (gcnew System::Windows::Forms::Button());
			this->ManageStudents = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->FinancialManagement);
			this->panel1->Controls->Add(this->ManageCourses);
			this->panel1->Controls->Add(this->ManageFaculty);
			this->panel1->Controls->Add(this->ManageStudents);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 510);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel1_Paint);
			// 
			// FinancialManagement
			// 
			this->FinancialManagement->Location = System::Drawing::Point(16, 286);
			this->FinancialManagement->Margin = System::Windows::Forms::Padding(2);
			this->FinancialManagement->Name = L"FinancialManagement";
			this->FinancialManagement->Size = System::Drawing::Size(143, 31);
			this->FinancialManagement->TabIndex = 5;
			this->FinancialManagement->Text = L"Financial Management";
			this->FinancialManagement->UseVisualStyleBackColor = true;
			this->FinancialManagement->Click += gcnew System::EventHandler(this, &AdminDashboard::FinancialManagement_Click);
			// 
			// ManageCourses
			// 
			this->ManageCourses->Location = System::Drawing::Point(16, 233);
			this->ManageCourses->Margin = System::Windows::Forms::Padding(2);
			this->ManageCourses->Name = L"ManageCourses";
			this->ManageCourses->Size = System::Drawing::Size(143, 35);
			this->ManageCourses->TabIndex = 3;
			this->ManageCourses->Text = L"Manage Courses";
			this->ManageCourses->UseVisualStyleBackColor = true;
			this->ManageCourses->Click += gcnew System::EventHandler(this, &AdminDashboard::ManageCourses_Click);
			// 
			// ManageFaculty
			// 
			this->ManageFaculty->Location = System::Drawing::Point(16, 186);
			this->ManageFaculty->Margin = System::Windows::Forms::Padding(2);
			this->ManageFaculty->Name = L"ManageFaculty";
			this->ManageFaculty->Size = System::Drawing::Size(143, 35);
			this->ManageFaculty->TabIndex = 2;
			this->ManageFaculty->Text = L"Manage Faculty";
			this->ManageFaculty->UseVisualStyleBackColor = true;
			this->ManageFaculty->Click += gcnew System::EventHandler(this, &AdminDashboard::ManageFaculty_Click);
			// 
			// ManageStudents
			// 
			this->ManageStudents->Location = System::Drawing::Point(16, 133);
			this->ManageStudents->Margin = System::Windows::Forms::Padding(2);
			this->ManageStudents->Name = L"ManageStudents";
			this->ManageStudents->Size = System::Drawing::Size(143, 37);
			this->ManageStudents->TabIndex = 1;
			this->ManageStudents->Text = L"Manage Students";
			this->ManageStudents->UseVisualStyleBackColor = true;
			this->ManageStudents->Click += gcnew System::EventHandler(this, &AdminDashboard::ManageStudents_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = nullptr;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(-54, -7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminDashboard::pictureBox1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(309, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ADMINISTRATIVE DASHBOARD";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(602, 183);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(4, 4);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(210, 70);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(580, 91);
			this->panel2->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Location = System::Drawing::Point(355, 21);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(112, 59);
			this->panel7->TabIndex = 3;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel7_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"label13";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 9);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Faculty Count";
			this->label7->Click += gcnew System::EventHandler(this, &AdminDashboard::label7_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(184, 23);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(118, 57);
			this->panel6->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(32, 37);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"label12";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 7);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Total Courses";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(14, 23);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(124, 57);
			this->panel5->TabIndex = 1;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel5_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"label11";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 7);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Total Students";
			this->label5->Click += gcnew System::EventHandler(this, &AdminDashboard::label5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(4, 6);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Quick Statistics";
			this->label2->Click += gcnew System::EventHandler(this, &AdminDashboard::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->panel3->Location = System::Drawing::Point(210, 187);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(580, 131);
			this->panel3->TabIndex = 4;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminDashboard::panel3_Paint);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::ForestGreen;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button9->Location = System::Drawing::Point(229, 62);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 23);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Generate";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(16, 65);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Financial Report";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Report Generation";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(212, 334);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(572, 136);
			this->panel4->TabIndex = 5;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button10->Location = System::Drawing::Point(275, 69);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Manage";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(9, 75);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(221, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Course Prerequisite Configuration";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(2, 7);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Curriculum Management";
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 507);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminDashboard";
			this->Text = L"Admin Dashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	UpdateQuickStats(); // Call the method to update quick stats when the dashboard loads
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ManageStudents_Click(System::Object^ sender, System::EventArgs^ e) {

	StudentManage^ managestudents = gcnew StudentManage();
	managestudents->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

private: System::Void ManageFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
	FacultyManage^ managefaculty = gcnew FacultyManage();

	managefaculty->Show();
}
private: System::Void ManageCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	CourseManage^ managecourse = gcnew CourseManage();
	managecourse->Show();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void UpdateQuickStats()
	   {
		   // Connection string to your database
		   

		   sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		   sqlConn->Open();
		   

		   // Get total number of students
		   String^ studentsQuery = "SELECT COUNT(*) AS TotalStudents FROM icp_students";
		   String^ totalStudents = GetSingleValueFromQuery(sqlConn, studentsQuery);

		   // Get total number of courses
		   String^ coursesQuery = "SELECT COUNT(*) AS TotalCourses FROM icp_courses";
		   String^ totalCourses = GetSingleValueFromQuery(sqlConn, coursesQuery);

		   // Get total number of faculty
		   String^ facultyQuery = "SELECT COUNT(*) AS FacultyCount FROM icp_faculty";
		   String^ facultyCount = GetSingleValueFromQuery(sqlConn, facultyQuery);

		   // Update the UI
		   this->label11->Text = totalStudents;
		   this->label12->Text = totalCourses;
		   this->label13->Text = facultyCount;

		   sqlConn->Close();
	   }
	   String^ GetSingleValueFromQuery(MySqlConnection^ connection, String^ query) {
		   MySqlCommand^ command = gcnew MySqlCommand(query, connection);
		   Object^ result = command->ExecuteScalar();

		   if (result != nullptr && result != DBNull::Value)
		   {
			   // Convert to string directly
			   return result->ToString();
		   }

		   return "0"; // Default return if no valid value found
	   }
private: System::Void FinancialManagement_Click(System::Object^ sender, System::EventArgs^ e) {
	Finacial^ finance = gcnew Finacial();

	finance->Show();

}
};
}
