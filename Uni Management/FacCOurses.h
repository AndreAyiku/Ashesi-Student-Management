#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacCOurses
	/// </summary>
	public ref class FacCOurses : public System::Windows::Forms::Form
	{
	public:
		FacCOurses(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacCOurses()
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
	private: System::Windows::Forms::ComboBox^ cbCourseSelection;
	private: System::Windows::Forms::Button^ btnUploadMaterial;
	private: System::Windows::Forms::Button^ btnViewRoster;
	private: System::Windows::Forms::DataGridView^ dgvRoster;
	private: System::Windows::Forms::Button^ btnSaveMaterial;
	private: System::Windows::Forms::TextBox^ txtMaterialName;
	private: System::Windows::Forms::Label^ lblMaterialName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnVerifyEnrollment;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacCOurses::typeid));
			   this->sidebarPanel = (gcnew System::Windows::Forms::Panel());
			   this->btnDashboard = (gcnew System::Windows::Forms::Button());
			   this->cbCourseSelection = (gcnew System::Windows::Forms::ComboBox());
			   this->btnUploadMaterial = (gcnew System::Windows::Forms::Button());
			   this->btnViewRoster = (gcnew System::Windows::Forms::Button());
			   this->dgvRoster = (gcnew System::Windows::Forms::DataGridView());
			   this->btnSaveMaterial = (gcnew System::Windows::Forms::Button());
			   this->txtMaterialName = (gcnew System::Windows::Forms::TextBox());
			   this->lblMaterialName = (gcnew System::Windows::Forms::Label());
			   this->btnVerifyEnrollment = (gcnew System::Windows::Forms::Button());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->sidebarPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->BeginInit();
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
			   this->sidebarPanel->Size = System::Drawing::Size(247, 950);
			   this->sidebarPanel->TabIndex = 0;
			   // 
			   // btnDashboard
			   // 
			   this->btnDashboard->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold));
			   this->btnDashboard->ForeColor = System::Drawing::Color::Black;
			   this->btnDashboard->Location = System::Drawing::Point(13, 818);
			   this->btnDashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->btnDashboard->Name = L"btnDashboard";
			   this->btnDashboard->Size = System::Drawing::Size(210, 78);
			   this->btnDashboard->TabIndex = 0;
			   this->btnDashboard->Text = L"BACK";
			   this->btnDashboard->UseVisualStyleBackColor = false;
			   this->btnDashboard->Click += gcnew System::EventHandler(this, &FacCOurses::btnDashboard_Click);
			   // 
			   // cbCourseSelection
			   // 
			   this->cbCourseSelection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->cbCourseSelection->FormattingEnabled = true;
			   this->cbCourseSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Math 101", L"Physics 102", L"Chemistry 103" });
			   this->cbCourseSelection->Location = System::Drawing::Point(250, 3);
			   this->cbCourseSelection->Name = L"cbCourseSelection";
			   this->cbCourseSelection->Size = System::Drawing::Size(300, 45);
			   this->cbCourseSelection->TabIndex = 1;
			   // 
			   // btnUploadMaterial
			   // 
			   this->btnUploadMaterial->BackColor = System::Drawing::Color::Maroon;
			   this->btnUploadMaterial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnUploadMaterial->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnUploadMaterial->ForeColor = System::Drawing::Color::White;
			   this->btnUploadMaterial->Location = System::Drawing::Point(1119, 54);
			   this->btnUploadMaterial->Name = L"btnUploadMaterial";
			   this->btnUploadMaterial->Size = System::Drawing::Size(249, 57);
			   this->btnUploadMaterial->TabIndex = 2;
			   this->btnUploadMaterial->Text = L"Upload Course Material";
			   this->btnUploadMaterial->UseVisualStyleBackColor = false;
			   this->btnUploadMaterial->Click += gcnew System::EventHandler(this, &FacCOurses::btnUploadMaterial_Click);
			   // 
			   // btnViewRoster
			   // 
			   this->btnViewRoster->BackColor = System::Drawing::Color::Maroon;
			   this->btnViewRoster->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnViewRoster->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnViewRoster->ForeColor = System::Drawing::Color::White;
			   this->btnViewRoster->Location = System::Drawing::Point(250, 54);
			   this->btnViewRoster->Name = L"btnViewRoster";
			   this->btnViewRoster->Size = System::Drawing::Size(245, 57);
			   this->btnViewRoster->TabIndex = 3;
			   this->btnViewRoster->Text = L"View Course Roster";
			   this->btnViewRoster->UseVisualStyleBackColor = false;
			   this->btnViewRoster->Click += gcnew System::EventHandler(this, &FacCOurses::btnViewRoster_Click);
			   // 
			   // dgvRoster
			   // 
			   this->dgvRoster->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvRoster->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			   });
			   this->dgvRoster->Location = System::Drawing::Point(250, 104);
			   this->dgvRoster->Name = L"dgvRoster";
			   this->dgvRoster->RowHeadersWidth = 82;
			   this->dgvRoster->Size = System::Drawing::Size(1154, 792);
			   this->dgvRoster->TabIndex = 4;
			   // 
			   // btnSaveMaterial
			   // 
			   this->btnSaveMaterial->BackColor = System::Drawing::Color::Maroon;
			   this->btnSaveMaterial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSaveMaterial->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnSaveMaterial->ForeColor = System::Drawing::Color::White;
			   this->btnSaveMaterial->Location = System::Drawing::Point(1168, 891);
			   this->btnSaveMaterial->Name = L"btnSaveMaterial";
			   this->btnSaveMaterial->Size = System::Drawing::Size(236, 59);
			   this->btnSaveMaterial->TabIndex = 5;
			   this->btnSaveMaterial->Text = L"Save Material";
			   this->btnSaveMaterial->UseVisualStyleBackColor = false;
			   this->btnSaveMaterial->Click += gcnew System::EventHandler(this, &FacCOurses::btnSaveMaterial_Click);
			   // 
			   // txtMaterialName
			   // 
			   this->txtMaterialName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->txtMaterialName->Location = System::Drawing::Point(305, 440);
			   this->txtMaterialName->Name = L"txtMaterialName";
			   this->txtMaterialName->Size = System::Drawing::Size(300, 43);
			   this->txtMaterialName->TabIndex = 7;
			   // 
			   // lblMaterialName
			   // 
			   this->lblMaterialName->AutoSize = true;
			   this->lblMaterialName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->lblMaterialName->Location = System::Drawing::Point(300, 400);
			   this->lblMaterialName->Name = L"lblMaterialName";
			   this->lblMaterialName->Size = System::Drawing::Size(199, 37);
			   this->lblMaterialName->TabIndex = 6;
			   this->lblMaterialName->Text = L"Material Name:";
			   // 
			   // btnVerifyEnrollment
			   // 
			   this->btnVerifyEnrollment->BackColor = System::Drawing::Color::Maroon;
			   this->btnVerifyEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnVerifyEnrollment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			   this->btnVerifyEnrollment->ForeColor = System::Drawing::Color::White;
			   this->btnVerifyEnrollment->Location = System::Drawing::Point(250, 891);
			   this->btnVerifyEnrollment->Name = L"btnVerifyEnrollment";
			   this->btnVerifyEnrollment->Size = System::Drawing::Size(266, 59);
			   this->btnVerifyEnrollment->TabIndex = 8;
			   this->btnVerifyEnrollment->Text = L"Verify Enrollment";
			   this->btnVerifyEnrollment->UseVisualStyleBackColor = false;
			   this->btnVerifyEnrollment->Click += gcnew System::EventHandler(this, &FacCOurses::btnVerifyEnrollment_Click);
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
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(247, 226);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // FacCOurses
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1406, 950);
			   this->Controls->Add(this->btnVerifyEnrollment);
			   this->Controls->Add(this->txtMaterialName);
			   this->Controls->Add(this->lblMaterialName);
			   this->Controls->Add(this->btnSaveMaterial);
			   this->Controls->Add(this->dgvRoster);
			   this->Controls->Add(this->btnViewRoster);
			   this->Controls->Add(this->btnUploadMaterial);
			   this->Controls->Add(this->cbCourseSelection);
			   this->Controls->Add(this->sidebarPanel);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"FacCOurses";
			   this->Text = L"Manage Courses";
			   this->sidebarPanel->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRoster))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   // Button click event handlers
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Navigating to Faculty Dashboard");
	}

	private: System::Void btnUploadMaterial_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Placeholder for file upload logic
		MessageBox::Show("Material uploaded successfully!");
	}

	private: System::Void btnSaveMaterial_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Save uploaded material logic here
		MessageBox::Show("Material saved successfully!");
	}

	private: System::Void btnViewRoster_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// View roster logic, populate dgvRoster with student details
		// Example: Fetch data from backend
		this->dgvRoster->Rows->Clear();
		this->dgvRoster->Rows->Add("S1001", "John Doe", "Enrolled");
		this->dgvRoster->Rows->Add("S1002", "Jane Smith", "Enrolled");
	}

	private: System::Void btnVerifyEnrollment_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Verify student enrollment logic, allow faculty to approve or deny enrollment
		MessageBox::Show("Enrollment verification complete.");
	}
	};
}
