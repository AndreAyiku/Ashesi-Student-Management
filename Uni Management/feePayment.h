#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for feePayment
	/// </summary>
	public ref class feePayment : public System::Windows::Forms::Form
	{
	public:
		feePayment(void)
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
		~feePayment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(feePayment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(355, 1094);
			this->panel1->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(11, 965);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(317, 68);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Transcripts";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(36, 866);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(270, 69);
			this->button7->TabIndex = 7;
			this->button7->Text = L"BACK";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 279);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(362, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1157, 128);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20));
			this->label1->Location = System::Drawing::Point(327, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FEE PAYMENT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label2->Location = System::Drawing::Point(454, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Arrears";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(599, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(659, 158);
			this->dataGridView1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(493, 695);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 81);
			this->button1->TabIndex = 6;
			this->button1->Text = L"PAY";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1031, 695);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 81);
			this->button2->TabIndex = 7;
			this->button2->Text = L"CANCEL";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15));
			this->label3->Location = System::Drawing::Point(454, 461);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 46);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Amount";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(599, 461);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(414, 50);
			this->textBox1->TabIndex = 9;
			// 
			// feePayment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1522, 948);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F));
			this->Name = L"feePayment";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &feePayment::feePayment_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void feePayment_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
