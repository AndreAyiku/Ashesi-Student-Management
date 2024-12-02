#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyDashboard
	/// </summary>
	public ref class FacultyDashboard : public System::Windows::Forms::Form
	{
	public:
		FacultyDashboard(void)
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
		~FacultyDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;






	private: System::Windows::Forms::Panel^ panel8;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacultyDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(363, 980);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(31, 443);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(286, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Upload Course Materials";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FacultyDashboard::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(286, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Manage My Courses";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 56);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Profile";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(-108, -13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 243);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FacultyDashboard::pictureBox1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(618, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(546, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"FACULTY DASHBOARD";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(1203, 352);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(8, 8);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(420, 46);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1174, 175);
			this->panel2->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel7->Controls->Add(this->label7);
			this->panel7->Location = System::Drawing::Point(710, 41);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(225, 114);
			this->panel7->TabIndex = 3;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FacultyDashboard::panel7_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Scheduled Courses";
			this->label7->Click += gcnew System::EventHandler(this, &FacultyDashboard::label7_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(369, 45);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(235, 110);
			this->panel6->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 25);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Grades to Submit";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(28, 45);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(249, 110);
			this->panel5->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"My Classes(Count)";
			this->label5->Click += gcnew System::EventHandler(this, &FacultyDashboard::label5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(7, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Quick Statistics";
			this->label2->Click += gcnew System::EventHandler(this, &FacultyDashboard::label2_Click);
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(499, 890);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(8, 8);
			this->panel8->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 532);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 47);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Class Rosters";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FacultyDashboard::button1_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(31, 607);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(286, 47);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Grade Management";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(31, 694);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(286, 44);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Enrollment Verification";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// FacultyDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1627, 964);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"FacultyDashboard";
			this->Text = L"3";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void.ctor() {
	this->InitializeComponent();
}
private: System::Void btnDownloadRoster_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
