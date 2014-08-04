#pragma once
#using <Microsoft.VisualBasic.dll>
#include "CSC330-Lab4.h"

namespace CSC330Lab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ConvMil;


	private: System::Windows::Forms::RadioButton^  AM;
	private: System::Windows::Forms::RadioButton^  PM;
	private: System::Windows::Forms::TextBox^  txthours;
	private: System::Windows::Forms::TextBox^  txtmins;
	private: System::Windows::Forms::TextBox^  txtsecs;
	private: System::Windows::Forms::TextBox^  txtmilsecs;

	private: System::Windows::Forms::TextBox^  txtmilmins;

	private: System::Windows::Forms::TextBox^  txtmilhours;

	private: System::Windows::Forms::Label^  label2;








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
			this->ConvMil = (gcnew System::Windows::Forms::Button());
			this->AM = (gcnew System::Windows::Forms::RadioButton());
			this->PM = (gcnew System::Windows::Forms::RadioButton());
			this->txthours = (gcnew System::Windows::Forms::TextBox());
			this->txtmins = (gcnew System::Windows::Forms::TextBox());
			this->txtsecs = (gcnew System::Windows::Forms::TextBox());
			this->txtmilsecs = (gcnew System::Windows::Forms::TextBox());
			this->txtmilmins = (gcnew System::Windows::Forms::TextBox());
			this->txtmilhours = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Standard Time";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// ConvMil
			// 
			this->ConvMil->Location = System::Drawing::Point(365, 73);
			this->ConvMil->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ConvMil->Name = L"ConvMil";
			this->ConvMil->Size = System::Drawing::Size(87, 42);
			this->ConvMil->TabIndex = 3;
			this->ConvMil->Text = L"Convert to Military";
			this->ConvMil->UseVisualStyleBackColor = true;
			this->ConvMil->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// AM
			// 
			this->AM->AllowDrop = true;
			this->AM->AutoSize = true;
			this->AM->Location = System::Drawing::Point(254, 84);
			this->AM->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AM->Name = L"AM";
			this->AM->Size = System::Drawing::Size(46, 20);
			this->AM->TabIndex = 4;
			this->AM->TabStop = true;
			this->AM->Text = L"AM";
			this->AM->UseVisualStyleBackColor = true;
			this->AM->CheckedChanged += gcnew System::EventHandler(this, &Form1::AM_CheckedChanged);
			// 
			// PM
			// 
			this->PM->AutoSize = true;
			this->PM->Location = System::Drawing::Point(306, 84);
			this->PM->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->PM->Name = L"PM";
			this->PM->Size = System::Drawing::Size(45, 20);
			this->PM->TabIndex = 5;
			this->PM->TabStop = true;
			this->PM->Text = L"PM";
			this->PM->UseVisualStyleBackColor = true;
			this->PM->CheckedChanged += gcnew System::EventHandler(this, &Form1::PM_CheckedChanged);
			// 
			// txthours
			// 
			this->txthours->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txthours->Location = System::Drawing::Point(111, 82);
			this->txthours->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txthours->Name = L"txthours";
			this->txthours->Size = System::Drawing::Size(44, 22);
			this->txthours->TabIndex = 6;
			this->txthours->TextChanged += gcnew System::EventHandler(this, &Form1::txthours_TextChanged);
			// 
			// txtmins
			// 
			this->txtmins->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtmins->Location = System::Drawing::Point(155, 82);
			this->txtmins->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtmins->Name = L"txtmins";
			this->txtmins->Size = System::Drawing::Size(44, 22);
			this->txtmins->TabIndex = 7;
			this->txtmins->TextChanged += gcnew System::EventHandler(this, &Form1::txtmins_TextChanged);
			// 
			// txtsecs
			// 
			this->txtsecs->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtsecs->Location = System::Drawing::Point(199, 82);
			this->txtsecs->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtsecs->Name = L"txtsecs";
			this->txtsecs->Size = System::Drawing::Size(44, 22);
			this->txtsecs->TabIndex = 8;
			// 
			// txtmilsecs
			// 
			this->txtmilsecs->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtmilsecs->Location = System::Drawing::Point(199, 172);
			this->txtmilsecs->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtmilsecs->Name = L"txtmilsecs";
			this->txtmilsecs->Size = System::Drawing::Size(44, 22);
			this->txtmilsecs->TabIndex = 12;
			// 
			// txtmilmins
			// 
			this->txtmilmins->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtmilmins->Location = System::Drawing::Point(155, 172);
			this->txtmilmins->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtmilmins->Name = L"txtmilmins";
			this->txtmilmins->Size = System::Drawing::Size(44, 22);
			this->txtmilmins->TabIndex = 11;
			// 
			// txtmilhours
			// 
			this->txtmilhours->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtmilhours->Location = System::Drawing::Point(111, 172);
			this->txtmilhours->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtmilhours->Name = L"txtmilhours";
			this->txtmilhours->Size = System::Drawing::Size(44, 22);
			this->txtmilhours->TabIndex = 10;
			this->txtmilhours->TextChanged += gcnew System::EventHandler(this, &Form1::txtmilhours_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Military Time";
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LimeGreen;
			this->ClientSize = System::Drawing::Size(467, 325);
			this->Controls->Add(this->txtmilsecs);
			this->Controls->Add(this->txtmilmins);
			this->Controls->Add(this->txtmilhours);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtsecs);
			this->Controls->Add(this->txtmins);
			this->Controls->Add(this->txthours);
			this->Controls->Add(this->PM);
			this->Controls->Add(this->AM);
			this->Controls->Add(this->ConvMil);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->ForeColor = System::Drawing::Color::Maroon;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->Text = L"Funny clock";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //variable to hold std time
				 int hour, min, sec;
				 bool check;
				 //calling Time class
				 Time t;
				 
				 
				 //Validate Input Data for hours variable
				 if (!Microsoft::VisualBasic::Information::IsNumeric (txthours->Text))
				 {
					 MessageBoxButtons buttons = MessageBoxButtons::RetryCancel;
					 System::Windows::Forms::DialogResult result;

					 result = MessageBox::Show ("You entered an incorrect value: " + this->txthours->Text,
						 "Enter a value from 0 to 12",buttons);
					 if ( result == System::Windows::Forms::DialogResult::Retry)
						 this->txthours->Text = "";
					 else
						 this->Close();
					 hour = 00;
				 }
				 else if (!Microsoft::VisualBasic::Information::IsNumeric (txtmins->Text))
				 {
					 MessageBoxButtons buttons = MessageBoxButtons::RetryCancel;
					 System::Windows::Forms::DialogResult result;

					 result = MessageBox::Show ("You entered an incorrect value: " + this->txtmins->Text,
						 "Enter a value from 0 to 12",buttons);
					 if ( result == System::Windows::Forms::DialogResult::Retry)
						 this->txtmins->Text = "";
					 else
						 this->Close();
					 min = 00;
				 }
				 else if (!Microsoft::VisualBasic::Information::IsNumeric (txtsecs->Text))
				 {
					 MessageBoxButtons buttons = MessageBoxButtons::RetryCancel;
					 System::Windows::Forms::DialogResult result;

					 result = MessageBox::Show ("You entered an incorrect value: " + this->txtsecs->Text,
						 "Enter a value from 0 to 12",buttons);
					 if ( result == System::Windows::Forms::DialogResult::Retry)
						 this->txtsecs->Text = "";
					 else
						 this->Close();
					 sec = 00;
				 }
				 else
				 {
					 hour = Microsoft::VisualBasic::Conversion::Val (this->txthours->Text);
					 min = Microsoft::VisualBasic::Conversion::Val (this->txtmins->Text);
					 sec = Microsoft::VisualBasic::Conversion::Val (this->txtsecs->Text);
				 }

				 check = t.setTime(hour, min, sec);

				 if ((check)&&((this->AM->Checked) == true))
					 {
						 txtmilhours->Text = Convert::ToString (hour);
						 txtmilmins->Text = Convert::ToString (min);
						 txtmilsecs->Text = Convert::ToString (sec);
					 }
				 else if ((check)&&((this->PM->Checked) == true))
					 {
						 txtmilhours->Text = Convert::ToString (hour+12);
						 txtmilmins->Text = Convert::ToString (min);
						 txtmilsecs->Text = Convert::ToString (sec);
					 }
				 else
						 MessageBox:: Show ("Please enter a correct value for STD Time (12hrs) (hh:mm:ss)");
		 		 

			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void AM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void PM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtmilhours_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txthours_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtmins_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

