#pragma once

namespace UniManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentSchedule
	/// </summary>
	public ref class StudentSchedule : public System::Windows::Forms::Form
	{
	public:
		StudentSchedule(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentSchedule()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridViewSchedule;
	private: System::Windows::Forms::Label^ labelMonday;
	private: System::Windows::Forms::Label^ labelTuesday;
	private: System::Windows::Forms::Label^ labelWednesday;
	private: System::Windows::Forms::Label^ labelThursday;
	private: System::Windows::Forms::Label^ labelFriday;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentSchedule::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->labelMonday = (gcnew System::Windows::Forms::Label());
			this->labelTuesday = (gcnew System::Windows::Forms::Label());
			this->labelWednesday = (gcnew System::Windows::Forms::Label());
			this->labelThursday = (gcnew System::Windows::Forms::Label());
			this->labelFriday = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSchedule))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkRed;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-4, -70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(324, 1868);
			this->panel1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(73, 879);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 76);
			this->button1->TabIndex = 8;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(16, 1768);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(270, 69);
			this->button7->TabIndex = 7;
			this->button7->Text = L"BACK";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-17, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(352, 253);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(326, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1157, 128);
			this->panel2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20));
			this->label1->Location = System::Drawing::Point(343, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TIME TABLE";
			// 
			// dataGridViewSchedule
			// 
			this->dataGridViewSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSchedule->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridViewSchedule->Location = System::Drawing::Point(337, 178);
			this->dataGridViewSchedule->Name = L"dataGridViewSchedule";
			this->dataGridViewSchedule->RowHeadersWidth = 82;
			this->dataGridViewSchedule->Size = System::Drawing::Size(1051, 766);
			this->dataGridViewSchedule->TabIndex = 10;
			// 
			// labelMonday
			// 
			this->labelMonday->AutoSize = true;
			this->labelMonday->Location = System::Drawing::Point(370, 150);
			this->labelMonday->Name = L"labelMonday";
			this->labelMonday->Size = System::Drawing::Size(89, 25);
			this->labelMonday->TabIndex = 6;
			this->labelMonday->Text = L"Monday";
			// 
			// labelTuesday
			// 
			this->labelTuesday->AutoSize = true;
			this->labelTuesday->Location = System::Drawing::Point(470, 150);
			this->labelTuesday->Name = L"labelTuesday";
			this->labelTuesday->Size = System::Drawing::Size(95, 25);
			this->labelTuesday->TabIndex = 7;
			this->labelTuesday->Text = L"Tuesday";
			// 
			// labelWednesday
			// 
			this->labelWednesday->AutoSize = true;
			this->labelWednesday->Location = System::Drawing::Point(570, 150);
			this->labelWednesday->Name = L"labelWednesday";
			this->labelWednesday->Size = System::Drawing::Size(126, 25);
			this->labelWednesday->TabIndex = 8;
			this->labelWednesday->Text = L"Wednesday";
			// 
			// labelThursday
			// 
			this->labelThursday->AutoSize = true;
			this->labelThursday->Location = System::Drawing::Point(690, 150);
			this->labelThursday->Name = L"labelThursday";
			this->labelThursday->Size = System::Drawing::Size(102, 25);
			this->labelThursday->TabIndex = 9;
			this->labelThursday->Text = L"Thursday";
			// 
			// labelFriday
			// 
			this->labelFriday->AutoSize = true;
			this->labelFriday->Location = System::Drawing::Point(800, 150);
			this->labelFriday->Name = L"labelFriday";
			this->labelFriday->Size = System::Drawing::Size(72, 25);
			this->labelFriday->TabIndex = 10;
			this->labelFriday->Text = L"Friday";
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 200;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 200;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 200;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 200;
			// 
			// StudentSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1400, 1799);
			this->Controls->Add(this->labelFriday);
			this->Controls->Add(this->labelThursday);
			this->Controls->Add(this->labelWednesday);
			this->Controls->Add(this->labelTuesday);
			this->Controls->Add(this->labelMonday);
			this->Controls->Add(this->dataGridViewSchedule);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"StudentSchedule";
			this->Text = L"StudentSchedule";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSchedule))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
