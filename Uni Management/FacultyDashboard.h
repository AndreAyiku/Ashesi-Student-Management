#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ImprovedAdminDashboard
	/// </summary>
	public ref class ImprovedAdminDashboard : public System::Windows::Forms::Form
	{
	public:
		ImprovedAdminDashboard(void)
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
		~ImprovedAdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnViewRoster;
	private: System::Windows::Forms::Button^ btnDownloadRoster;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ImprovedAdminDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnViewRoster = (gcnew System::Windows::Forms::Button());
			this->btnDownloadRoster = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(363, 980);
			this->panel1->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(31, 853);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(286, 66);
			this->button7->TabIndex = 7;
			this->button7->Text = L"View Students\' Performance";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(31, 757);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(286, 63);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Report Generation";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(31, 654);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(286, 59);
			this->button5->TabIndex = 5;
			this->button5->Text = L"View Teaching Schedule";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(31, 547);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(286, 70);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Upload Course Materials";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 449);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(286, 67);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Manage My Courses";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 67);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Profile";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 72);
			this->button1->TabIndex = 1;
			this->button1->Text = L"View Class Roster";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::button1_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::pictureBox1_Click_1);
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
			this->panel2->Location = System::Drawing::Point(433, 46);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1161, 175);
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
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ImprovedAdminDashboard::panel7_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 25);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Scheduled Courses";
			this->label7->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::label7_Click);
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
			this->label5->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::label5_Click);
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
			this->label2->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->panel3->Location = System::Drawing::Point(430, 237);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1161, 252);
			this->panel3->TabIndex = 4;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::ForestGreen;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button9->Location = System::Drawing::Point(457, 160);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(129, 44);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Generate";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(22, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(212, 31);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Financial Report";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::ForestGreen;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button8->Location = System::Drawing::Point(457, 93);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(129, 46);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Generate";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(22, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(424, 31);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Academic Performance Transcript";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 37);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Report Generation";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(420, 734);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1174, 227);
			this->panel4->TabIndex = 5;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button10->Location = System::Drawing::Point(454, 96);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(129, 44);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Manage";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(19, 100);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(347, 31);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Manage Teaching Materials";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(3, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(368, 37);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Curriculum Management";
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(499, 890);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(8, 8);
			this->panel8->TabIndex = 6;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->btnDownloadRoster);
			this->panel9->Controls->Add(this->btnViewRoster);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Location = System::Drawing::Point(420, 519);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1174, 195);
			this->panel9->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label11->Location = System::Drawing::Point(7, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(282, 36);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Roster Management";
			this->label11->Click += gcnew System::EventHandler(this, &ImprovedAdminDashboard::label11_Click);
			// 
			// btnViewRoster
			// 
			this->btnViewRoster->BackColor = System::Drawing::SystemColors::Info;
			this->btnViewRoster->Location = System::Drawing::Point(13, 72);
			this->btnViewRoster->Name = L"btnViewRoster";
			this->btnViewRoster->Size = System::Drawing::Size(358, 65);
			this->btnViewRoster->TabIndex = 1;
			this->btnViewRoster->Text = L"View Class Roster";
			this->btnViewRoster->UseVisualStyleBackColor = false;
			// 
			// btnDownloadRoster
			// 
			this->btnDownloadRoster->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnDownloadRoster->Location = System::Drawing::Point(414, 72);
			this->btnDownloadRoster->Name = L"btnDownloadRoster";
			this->btnDownloadRoster->Size = System::Drawing::Size(358, 65);
			this->btnDownloadRoster->TabIndex = 2;
			this->btnDownloadRoster->Text = L"Download Class Roster";
			this->btnDownloadRoster->UseVisualStyleBackColor = false;
			// 
			// ImprovedAdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1627, 964);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"ImprovedAdminDashboard";
			this->Text = L"FacultyDashboard";
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
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
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
};
}
