#pragma once
#include "Upload.h"
namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for FacCOurses
	/// </summary>
	public ref class FacultyCourse : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;

	private:
		String^ useremail;
	public:
		FacultyCourse(String^ email)
		{
			InitializeComponent();
			useremail = email;
			LoadFacultyCourses();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyCourse()
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

	private: System::Windows::Forms::Button^ btnUploadMaterial;

	private: System::Windows::Forms::DataGridView^ dgvRoster;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacultyCourse::typeid));
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->btnUploadMaterial = (gcnew System::Windows::Forms::Button());
			   this->dgvRoster = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->BeginInit();
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
			   this->sidebarPanel->Size = System::Drawing::Size(124, 557);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(124, 118);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold));
			   this->btnDashboard->ForeColor = System::Drawing::Color::Black;
			   this->btnDashboard->Location = System::Drawing::Point(2, 485);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(105, 41);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = false;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FacultyCourse::btnDashboard_Click);
			   // 
			   // btnUploadMaterial
			   // 
			   this->btnUploadMaterial->BackColor = System::Drawing::Color::Maroon;
			   this->btnUploadMaterial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnUploadMaterial->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnUploadMaterial->ForeColor = System::Drawing::Color::White;
			   this->btnUploadMaterial->Location = System::Drawing::Point(214, 515);
			   this->btnUploadMaterial->Margin = System::Windows::Forms::Padding(2);
			   this->btnUploadMaterial->Name = L"btnUploadMaterial";
			   this->btnUploadMaterial->Size = System::Drawing::Size(231, 30);
			   this->btnUploadMaterial->TabIndex = 2;
			   this->btnUploadMaterial->Text = L"Upload Material";
			   this->btnUploadMaterial->UseVisualStyleBackColor = false;
			   this->btnUploadMaterial->Click += gcnew System::EventHandler(this, &FacultyCourse::btnUploadMaterial_Click);
			   // 
			   // dgvRoster
			   // 
			   this->dgvRoster->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvRoster->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn4,
					   this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			   });
			   this->dgvRoster->Location = System::Drawing::Point(214, 54);
			   this->dgvRoster->Margin = System::Windows::Forms::Padding(2);
			   this->dgvRoster->Name = L"dgvRoster";
			   this->dgvRoster->RowHeadersWidth = 82;
			   this->dgvRoster->Size = System::Drawing::Size(790, 447);
			   this->dgvRoster->TabIndex = 4;
			   this->dgvRoster->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FacultyCourse::dgvRoster_CellContentClick);
			   // 
			   // dataGridViewTextBoxColumn1
			   // 
			   this->dataGridViewTextBoxColumn1->HeaderText = L"Student ID";
			   this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			   this->dataGridViewTextBoxColumn1->Width = 200;
			   // 
			   // dataGridViewTextBoxColumn2
			   // 
			   this->dataGridViewTextBoxColumn2->HeaderText = L"Student Name";
			   this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			   this->dataGridViewTextBoxColumn2->Width = 200;
			   // 
			   // dataGridViewTextBoxColumn3
			   // 
			   this->dataGridViewTextBoxColumn3->HeaderText = L"Enrollment Status";
			   this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			   this->dataGridViewTextBoxColumn3->Width = 200;
			   // 
			   // dataGridViewTextBoxColumn4
			   // 
			   this->dataGridViewTextBoxColumn4->HeaderText = L"Faculty Name";
			   this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			   // 
			   // dataGridViewTextBoxColumn5
			   // 
			   this->dataGridViewTextBoxColumn5->HeaderText = L"Course ID";
			   this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			   // 
			   // dataGridViewTextBoxColumn6
			   // 
			   this->dataGridViewTextBoxColumn6->HeaderText = L"Course Name";
			   this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			   // 
			   // FacultyCourse
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1104, 557);
			   this->Controls->Add(this->dgvRoster);
			   this->Controls->Add(this->btnUploadMaterial);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"FacultyCourse";
			   this->Text = L"Manage Courses";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // Button click event handlers
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	private: System::Void btnUploadMaterial_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Upload^ upload = gcnew Upload(useremail);
		upload->Show();
	}




	private: System::Void btnVerifyEnrollment_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Verify student enrollment logic, allow faculty to approve or deny enrollment
		MessageBox::Show("Enrollment verification complete.");
	}
	private: System::Void dgvRoster_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: void LoadFacultyCourses()
{
	try
	{
		// Use the class-level sqlConn instead of creating a new connection
		sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=''; database=ashesi;";
		sqlConn->Open();

		// Prepare the SQL query to fetch faculty courses
		String^ query = "SELECT f.firstname, f.lastname, fc.course_id, c.course_name " +
			"FROM icp_faculty f " +
			"JOIN icp_users u ON f.user_id = u.user_id " +
			"JOIN icp_facultycourses fc ON f.faculty_id = fc.faculty_id " +
			"JOIN icp_courses c ON fc.course_id = c.course_id " +
			"WHERE u.email = @email";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, sqlConn);
		cmd->Parameters->AddWithValue("@email", useremail);

		// Clear existing rows
		dgvRoster->Rows->Clear();

		// Ensure columns are set up correctly
		if (dgvRoster->Columns->Count == 0)
		{
			dgvRoster->Columns->Add("Faculty Name", "Faculty Name");
			dgvRoster->Columns->Add("Course ID", "Course ID");
			dgvRoster->Columns->Add("Course Name", "Course Name");
		}

		// Execute the query
		MySqlDataReader^ reader = cmd->ExecuteReader();

		// Flag to track if we've added faculty name (to avoid repeating)
		String^ facultyFullName = "";
		bool facultyNameAdded = false;

		// Read and populate the DataGridView
		while (reader->Read())
		{
			if (!facultyNameAdded)
			{
				facultyFullName = reader->GetString("firstname") + " " + reader->GetString("lastname");
				facultyNameAdded = true;
			}

			// Add course details to the grid
			dgvRoster->Rows->Add(
				facultyFullName,
				reader->GetInt32("course_id"),
				reader->GetString("course_name")
			);
		}

		// Close the reader
		reader->Close();
	}
	catch (Exception^ ex)
	{
		// Show error message if something goes wrong
		MessageBox::Show("Error loading faculty courses: " + ex->Message, "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		// Ensure connection is closed
		if (sqlConn->State == ConnectionState::Open)
		{
			sqlConn->Close();
		}
	}
}

};
}