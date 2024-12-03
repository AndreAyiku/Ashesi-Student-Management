#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CourseRegistration
	/// </summary>
	public ref class CourseRegistration : public System::Windows::Forms::Form
	{
	public:
		CourseRegistration(void)
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
		~CourseRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(125, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(692, 56);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(148, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(486, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT COURSE REGISTRATION FORM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 7);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(324, 82);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(476, 39);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Enter Your Name";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(246, 82);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(80, 37);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(246, 156);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(80, 37);
			this->panel3->TabIndex = 4;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CourseRegistration::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 10);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"ID";
			this->label3->Click += gcnew System::EventHandler(this, &CourseRegistration::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(324, 156);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(476, 39);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Enter Your Student ID";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(245, 224);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(81, 37);
			this->panel4->TabIndex = 6;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CourseRegistration::panel4_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 11);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Email";
			this->label4->Click += gcnew System::EventHandler(this, &CourseRegistration::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(324, 224);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(476, 39);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Enter Your Student Email";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &CourseRegistration::textBox3_TextChanged);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(246, 317);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(80, 37);
			this->panel5->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.125F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(2, 9);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Department";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox4->Location = System::Drawing::Point(324, 317);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(476, 39);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"Enter Your Department";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 7);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 19);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Select Courses :";
			this->label6->Click += gcnew System::EventHandler(this, &CourseRegistration::label6_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(266, 394);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(123, 33);
			this->panel6->TabIndex = 12;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Maroon;
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->pictureBox2);
			this->panel7->Controls->Add(this->pictureBox1);
			this->panel7->Location = System::Drawing::Point(0, -1);
			this->panel7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(118, 877);
			this->panel7->TabIndex = 13;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CourseRegistration::panel7_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 568);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(6, 4);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(104, 118);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(56, 72);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(4, 4);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// CourseRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 661);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CourseRegistration";
			this->Text = L"CourseRegistration";
			this->Load += gcnew System::EventHandler(this, &CourseRegistration::CourseRegistration_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CourseRegistration_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}