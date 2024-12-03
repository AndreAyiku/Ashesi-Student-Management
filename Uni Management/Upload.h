#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO; // For file handling



	/// <summary>
	/// Summary for Upload
	/// </summary>
	public ref class Upload : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		System::Data::DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::TextBox^ materialNameTextBox;

	private:
		String^ useremail;

	public:
		Upload(String^ email)
		{
			InitializeComponent();
			useremail = email;
			PopulateCourses();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Upload()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ coursesComboBox;
	private: System::Windows::Forms::TextBox^ filePathTextBox;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->coursesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->filePathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->materialNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select Course";
			this->label1->Click += gcnew System::EventHandler(this, &Upload::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Material Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Upload File";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(422, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Upload::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 50);
			this->button2->TabIndex = 58;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Upload::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(524, 395);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 50);
			this->button3->TabIndex = 57;
			this->button3->Text = L"Upload";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Upload::button3_Click);
			// 
			// coursesComboBox
			// 
			this->coursesComboBox->FormattingEnabled = true;
			this->coursesComboBox->Location = System::Drawing::Point(289, 55);
			this->coursesComboBox->Name = L"coursesComboBox";
			this->coursesComboBox->Size = System::Drawing::Size(398, 21);
			this->coursesComboBox->TabIndex = 59;
			this->coursesComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Upload::coursesComboBox_SelectedIndexChanged);
			// 
			// filePathTextBox
			// 
			this->filePathTextBox->Location = System::Drawing::Point(73, 337);
			this->filePathTextBox->Name = L"filePathTextBox";
			this->filePathTextBox->Size = System::Drawing::Size(303, 20);
			this->filePathTextBox->TabIndex = 60;
			// 
			// materialNameTextBox
			// 
			this->materialNameTextBox->Location = System::Drawing::Point(66, 215);
			this->materialNameTextBox->Name = L"materialNameTextBox";
			this->materialNameTextBox->Size = System::Drawing::Size(357, 20);
			this->materialNameTextBox->TabIndex = 61;
			// 
			// Upload
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 511);
			this->Controls->Add(this->materialNameTextBox);
			this->Controls->Add(this->filePathTextBox);
			this->Controls->Add(this->coursesComboBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Upload";
			this->Text = L"Upload";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		coursesComboBox->Visible = true;
		coursesComboBox->DroppedDown = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "All files (*.*)|*.*|PDF Files (*.pdf)|*.pdf|Word Documents (*.docx)|*.docx|Text Files (*.txt)|*.txt";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			filePathTextBox->Text = openFileDialog1->FileName;
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (coursesComboBox->SelectedIndex == -1)
	{
		MessageBox::Show("Please select a course.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (String::IsNullOrWhiteSpace(materialNameTextBox->Text))
	{
		MessageBox::Show("Please enter a material name.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (String::IsNullOrWhiteSpace(filePathTextBox->Text))
	{
		MessageBox::Show("Please select a file to upload.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try
	{
		// Read file bytes
		array<Byte>^ fileBytes = File::ReadAllBytes(filePathTextBox->Text);

		// Prepare SQL command
		String^ query = "INSERT INTO icp_course_materials (course_id, material_name, material_file, upload_date) VALUES (@courseId, @materialName, @materialFile, @uploadDate)";
		MySqlCommand^ cmd = gcnew MySqlCommand(query, sqlConn);

		// Add parameters
		cmd->Parameters->Add("@courseId", MySqlDbType::Int32)->Value = coursesComboBox->SelectedValue;
		cmd->Parameters->Add("@materialName", MySqlDbType::VarChar)->Value = materialNameTextBox->Text;
		cmd->Parameters->Add("@materialFile", MySqlDbType::Blob)->Value = fileBytes;
		cmd->Parameters->Add("@uploadDate", MySqlDbType::DateTime)->Value = DateTime::Now;

		// Execute command
		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0)
		{
			MessageBox::Show("File uploaded successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear form after successful upload
			coursesComboBox->SelectedIndex = -1;
			materialNameTextBox->Clear();
			filePathTextBox->Clear();
		}
		else
		{
			MessageBox::Show("File upload failed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Upload Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
	  private: void PopulateCourses()
	   {
		   try
		   {
			   // Create connection 
			   MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource=localhost; port=3306; username=root; password=''; database=ashesi;");
			   sqlConn->Open();

			   // Create command to get courses for the current faculty
			   String^ query = "SELECT DISTINCT c.course_id, c.course_name " +
				   "FROM icp_courses c " +
				   "JOIN icp_facultycourses fc ON c.course_id = fc.course_id " +
				   "JOIN icp_faculty f ON fc.faculty_id = f.faculty_id " +
				   "JOIN icp_users u ON f.user_id = u.user_id " +
				   "WHERE u.email = @email"; // Assuming you'll pass the current user's email

			   MySqlCommand^ cmd = gcnew MySqlCommand(query, sqlConn);
			   cmd->Parameters->AddWithValue("@email", useremail); // You'll need to set this variable

			   // Create data adapter and fill combo box
			   MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cmd);
			   DataTable^ dt = gcnew DataTable();
			   da->Fill(dt);

			   // Populate combo box
			   coursesComboBox->DisplayMember = "course_name";
			   coursesComboBox->ValueMember = "course_id";
			   coursesComboBox->DataSource = dt;
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Error Loading Courses: " + ex->Message, "Error",
				   MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }
private: System::Void coursesComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
