#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(void)
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
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22));
			this->label1->Location = System::Drawing::Point(602, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(677, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT DASHBOARD";
			this->label1->Click += gcnew System::EventHandler(this, &StudentDashboard::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(2, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(313, 1073);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 233);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(10, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(293, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(293, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Course Registration";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentDashboard::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(10, 484);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(293, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Enrollment History";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentDashboard::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 578);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(290, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"View Grades";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(10, 683);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(290, 58);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Fee Payment";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(10, 779);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(290, 61);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Class Schedule";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(10, 876);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(290, 58);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Student Profile";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(10, 965);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(293, 68);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Transcripts";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(372, 160);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(457, 335);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(372, 543);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1183, 393);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label9);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->panel4->Location = System::Drawing::Point(27, 99);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(259, 251);
			this->panel4->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label11);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->panel6->Location = System::Drawing::Point(612, 99);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(276, 251);
			this->panel6->TabIndex = 2;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(316, 99);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(266, 251);
			this->panel5->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(912, 99);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(256, 251);
			this->panel7->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 25);
			this->label2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->Location = System::Drawing::Point(20, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 39);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Personal Information";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel8->Controls->Add(this->label4);
			this->panel8->Location = System::Drawing::Point(873, 160);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(682, 335);
			this->panel8->TabIndex = 6;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::panel8_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4->Location = System::Drawing::Point(29, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 39);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Current Courses";
			this->label4->Click += gcnew System::EventHandler(this, &StudentDashboard::label4_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5->Location = System::Drawing::Point(21, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(380, 39);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Academic Performance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(22, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 29);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Name :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(23, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 29);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Student ID :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(23, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(251, 29);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Semester Enrollment :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(27, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 37);
			this->label9->TabIndex = 0;
			this->label9->Text = L"GPA";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(48, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 37);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Credits";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(44, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(179, 37);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Attendance";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(29, 37);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(134, 37);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ranking";
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1590, 1055);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"StudentDashboard";
			this->Text = L"StudentDashboard";
			this->Load += gcnew System::EventHandler(this, &StudentDashboard::StudentDashboard_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StudentDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
