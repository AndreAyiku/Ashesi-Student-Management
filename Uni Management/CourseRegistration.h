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
	private: System::Windows::Forms::CheckBox^ Gibbyx1;
	protected:

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
			this->Gibbyx1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// Gibbyx1
			// 
			this->Gibbyx1->AutoSize = true;
			this->Gibbyx1->Location = System::Drawing::Point(584, 253);
			this->Gibbyx1->Name = L"Gibbyx1";
			this->Gibbyx1->Size = System::Drawing::Size(150, 29);
			this->Gibbyx1->TabIndex = 0;
			this->Gibbyx1->Text = L"checkBox1";
			this->Gibbyx1->UseVisualStyleBackColor = true;
			this->Gibbyx1->CheckedChanged += gcnew System::EventHandler(this, &CourseRegistration::checkBox1_CheckedChanged);
			// 
			// CourseRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1519, 1073);
			this->Controls->Add(this->Gibbyx1);
			this->Name = L"CourseRegistration";
			this->Text = L"CourseRegistration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
