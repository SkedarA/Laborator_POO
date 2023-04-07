#pragma once


namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::TextBox^ inputCnp;
	private: System::Windows::Forms::TextBox^ cnpBirthDay;

	protected:

	protected:

	private: System::Windows::Forms::Button^ calcBtn;


	private: System::Windows::Forms::Button^ clearBtn;
	private: System::Windows::Forms::Label^ labelTimeNow;
	private: System::Windows::Forms::Button^ timeNowBtn;
	private: System::Windows::Forms::TextBox^ cnpAge;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputCnp = (gcnew System::Windows::Forms::TextBox());
			this->cnpBirthDay = (gcnew System::Windows::Forms::TextBox());
			this->calcBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->labelTimeNow = (gcnew System::Windows::Forms::Label());
			this->timeNowBtn = (gcnew System::Windows::Forms::Button());
			this->cnpAge = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// inputCnp
			// 
			this->inputCnp->Location = System::Drawing::Point(239, 81);
			this->inputCnp->Margin = System::Windows::Forms::Padding(4);
			this->inputCnp->Multiline = true;
			this->inputCnp->Name = L"inputCnp";
			this->inputCnp->Size = System::Drawing::Size(312, 45);
			this->inputCnp->TabIndex = 0;
			this->inputCnp->TextChanged += gcnew System::EventHandler(this, &Form1::inputCnp_TextChanged);
			// 
			// cnpBirthDay
			// 
			this->cnpBirthDay->Location = System::Drawing::Point(239, 220);
			this->cnpBirthDay->Margin = System::Windows::Forms::Padding(4);
			this->cnpBirthDay->Multiline = true;
			this->cnpBirthDay->Name = L"cnpBirthDay";
			this->cnpBirthDay->ReadOnly = true;
			this->cnpBirthDay->Size = System::Drawing::Size(312, 45);
			this->cnpBirthDay->TabIndex = 1;
			this->cnpBirthDay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// calcBtn
			// 
			this->calcBtn->Location = System::Drawing::Point(239, 154);
			this->calcBtn->Margin = System::Windows::Forms::Padding(4);
			this->calcBtn->Name = L"calcBtn";
			this->calcBtn->Size = System::Drawing::Size(137, 42);
			this->calcBtn->TabIndex = 2;
			this->calcBtn->Text = L"Calculate";
			this->calcBtn->UseVisualStyleBackColor = true;
			this->calcBtn->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(413, 155);
			this->clearBtn->Margin = System::Windows::Forms::Padding(4);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(139, 41);
			this->clearBtn->TabIndex = 3;
			this->clearBtn->Text = L"Clear";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &Form1::clearBtn_Click);
			// 
			// labelTimeNow
			// 
			this->labelTimeNow->AutoSize = true;
			this->labelTimeNow->Location = System::Drawing::Point(363, 351);
			this->labelTimeNow->Name = L"labelTimeNow";
			this->labelTimeNow->Size = System::Drawing::Size(63, 15);
			this->labelTimeNow->TabIndex = 4;
			this->labelTimeNow->Text = L"Time Now";
			// 
			// timeNowBtn
			// 
			this->timeNowBtn->Location = System::Drawing::Point(330, 393);
			this->timeNowBtn->Name = L"timeNowBtn";
			this->timeNowBtn->Size = System::Drawing::Size(137, 35);
			this->timeNowBtn->TabIndex = 5;
			this->timeNowBtn->Text = L"show current time";
			this->timeNowBtn->UseVisualStyleBackColor = true;
			this->timeNowBtn->Click += gcnew System::EventHandler(this, &Form1::timeNowBtn_Click);
			// 
			// cnpAge
			// 
			this->cnpAge->Location = System::Drawing::Point(239, 273);
			this->cnpAge->Margin = System::Windows::Forms::Padding(4);
			this->cnpAge->Multiline = true;
			this->cnpAge->Name = L"cnpAge";
			this->cnpAge->ReadOnly = true;
			this->cnpAge->Size = System::Drawing::Size(312, 45);
			this->cnpAge->TabIndex = 1;
			this->cnpAge->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 459);
			this->Controls->Add(this->timeNowBtn);
			this->Controls->Add(this->labelTimeNow);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->calcBtn);
			this->Controls->Add(this->cnpAge);
			this->Controls->Add(this->cnpBirthDay);
			this->Controls->Add(this->inputCnp);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (inputCnp->Text->Length != 13) {
			MessageBox::Show("CNP-ul trebuie sa fie format numai din 13 cifre!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else {
			String^ cnp = inputCnp->Text;

			String^ yearStr;
			switch (cnp[0]) {
			case'1':
			case'2':
				yearStr = "19";
				break;
			case'3':
			case'4':
				yearStr = "18";
				break;
			case'5':
			case'6':
				yearStr = "20";
				break;
			}
			yearStr += cnp->Substring(1,2);

			int birthYear = Int32::Parse(yearStr);
			int birthMonth = Int32::Parse(cnp->Substring(3, 2));
			int birthDay = Int32::Parse(cnp->Substring(5, 2));

			DateTime today = DateTime::Now;
			DateTime birthTime = DateTime(birthYear, birthMonth, birthDay);


			int varsta = today.Year - birthYear;
			if (birthTime.Month > today.Month || (birthTime.Month == today.Month && birthTime.Day > today.Day)) {
				varsta--;
			}
			// Exception: Daca varsta e mai mica ca 0
			if (varsta < 0) {
				MessageBox::Show("Data nasterii nu poate fi in viitor.", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			cnpBirthDay->Text = "Data nasterii: " + birthTime.ToString("dd-MM-yyy", System::Globalization::CultureInfo::InvariantCulture);
			cnpAge->Text = "Varsta: " + varsta.ToString() + " ani";
		}
	}
	private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		inputCnp->Clear();
		cnpBirthDay->Clear();
	}

	private: System::Void timeNowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime azi = DateTime::Now;
		labelTimeNow->Text = azi.ToString();
	}
private: System::Void inputCnp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
