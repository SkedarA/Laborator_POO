#pragma once
#include <cmath>
#include <string>

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
	private: System::Windows::Forms::TextBox^ calcField;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ceBtn;
	private: System::Windows::Forms::Button^ cBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ fractionBtn;
	private: System::Windows::Forms::Button^ powerBtn;
	private: System::Windows::Forms::Button^ rootBtn;
	private: System::Windows::Forms::Button^ divisionBtn;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ multBtn;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ minusBtn;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ plusBtn;
	private: System::Windows::Forms::Button^ changeSemnBtn;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ dotBtn;
	private: System::Windows::Forms::Button^ equalBtn;
	private: System::Windows::Forms::TextBox^ prevNrField;




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
			this->calcField = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ceBtn = (gcnew System::Windows::Forms::Button());
			this->cBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->fractionBtn = (gcnew System::Windows::Forms::Button());
			this->powerBtn = (gcnew System::Windows::Forms::Button());
			this->rootBtn = (gcnew System::Windows::Forms::Button());
			this->divisionBtn = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->multBtn = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->minusBtn = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->plusBtn = (gcnew System::Windows::Forms::Button());
			this->changeSemnBtn = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->dotBtn = (gcnew System::Windows::Forms::Button());
			this->equalBtn = (gcnew System::Windows::Forms::Button());
			this->prevNrField = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// calcField
			// 
			this->calcField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calcField->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->calcField->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcField->Location = System::Drawing::Point(12, 50);
			this->calcField->Multiline = true;
			this->calcField->Name = L"calcField";
			this->calcField->ReadOnly = true;
			this->calcField->Size = System::Drawing::Size(436, 80);
			this->calcField->TabIndex = 0;
			this->calcField->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->calcField->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"%";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ceBtn
			// 
			this->ceBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->ceBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ceBtn->Location = System::Drawing::Point(123, 136);
			this->ceBtn->Name = L"ceBtn";
			this->ceBtn->Size = System::Drawing::Size(105, 65);
			this->ceBtn->TabIndex = 1;
			this->ceBtn->Text = L"CE";
			this->ceBtn->UseVisualStyleBackColor = false;
			this->ceBtn->Click += gcnew System::EventHandler(this, &Form1::ceBtn_Click);
			// 
			// cBtn
			// 
			this->cBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->cBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBtn->Location = System::Drawing::Point(234, 136);
			this->cBtn->Name = L"cBtn";
			this->cBtn->Size = System::Drawing::Size(105, 65);
			this->cBtn->TabIndex = 1;
			this->cBtn->Text = L"C";
			this->cBtn->UseVisualStyleBackColor = false;
			this->cBtn->Click += gcnew System::EventHandler(this, &Form1::cBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->Location = System::Drawing::Point(345, 136);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(105, 65);
			this->deleteBtn->TabIndex = 1;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &Form1::deleteBtn_Click);
			// 
			// fractionBtn
			// 
			this->fractionBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->fractionBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fractionBtn->Location = System::Drawing::Point(12, 208);
			this->fractionBtn->Name = L"fractionBtn";
			this->fractionBtn->Size = System::Drawing::Size(105, 65);
			this->fractionBtn->TabIndex = 1;
			this->fractionBtn->Text = L"1/x";
			this->fractionBtn->UseVisualStyleBackColor = false;
			this->fractionBtn->Click += gcnew System::EventHandler(this, &Form1::fractionBtn_Click);
			// 
			// powerBtn
			// 
			this->powerBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->powerBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->powerBtn->Location = System::Drawing::Point(123, 207);
			this->powerBtn->Name = L"powerBtn";
			this->powerBtn->Size = System::Drawing::Size(105, 65);
			this->powerBtn->TabIndex = 1;
			this->powerBtn->Text = L"x^n";
			this->powerBtn->UseVisualStyleBackColor = false;
			this->powerBtn->Click += gcnew System::EventHandler(this, &Form1::powerBtn_Click);
			// 
			// rootBtn
			// 
			this->rootBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->rootBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rootBtn->Location = System::Drawing::Point(234, 207);
			this->rootBtn->Name = L"rootBtn";
			this->rootBtn->Size = System::Drawing::Size(105, 65);
			this->rootBtn->TabIndex = 1;
			this->rootBtn->Text = L"√x";
			this->rootBtn->UseVisualStyleBackColor = false;
			this->rootBtn->Click += gcnew System::EventHandler(this, &Form1::rootBtn_Click);
			// 
			// divisionBtn
			// 
			this->divisionBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->divisionBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divisionBtn->Location = System::Drawing::Point(345, 207);
			this->divisionBtn->Name = L"divisionBtn";
			this->divisionBtn->Size = System::Drawing::Size(105, 65);
			this->divisionBtn->TabIndex = 1;
			this->divisionBtn->Text = L"÷";
			this->divisionBtn->UseVisualStyleBackColor = false;
			this->divisionBtn->Click += gcnew System::EventHandler(this, &Form1::divisionBtn_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 279);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(105, 65);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(123, 278);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(105, 65);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(234, 278);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(105, 65);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// multBtn
			// 
			this->multBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->multBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multBtn->Location = System::Drawing::Point(345, 278);
			this->multBtn->Name = L"multBtn";
			this->multBtn->Size = System::Drawing::Size(105, 65);
			this->multBtn->TabIndex = 1;
			this->multBtn->Text = L"×";
			this->multBtn->UseVisualStyleBackColor = false;
			this->multBtn->Click += gcnew System::EventHandler(this, &Form1::multBtn_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 350);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(105, 65);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(123, 349);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(105, 65);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(234, 349);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(105, 65);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// minusBtn
			// 
			this->minusBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->minusBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusBtn->Location = System::Drawing::Point(345, 349);
			this->minusBtn->Name = L"minusBtn";
			this->minusBtn->Size = System::Drawing::Size(105, 65);
			this->minusBtn->TabIndex = 1;
			this->minusBtn->Text = L"-";
			this->minusBtn->UseVisualStyleBackColor = false;
			this->minusBtn->Click += gcnew System::EventHandler(this, &Form1::minusBtn_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 421);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(105, 65);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(123, 420);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(105, 65);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(234, 420);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(105, 65);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// plusBtn
			// 
			this->plusBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->plusBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusBtn->Location = System::Drawing::Point(345, 420);
			this->plusBtn->Name = L"plusBtn";
			this->plusBtn->Size = System::Drawing::Size(105, 65);
			this->plusBtn->TabIndex = 1;
			this->plusBtn->Text = L"+";
			this->plusBtn->UseVisualStyleBackColor = false;
			this->plusBtn->Click += gcnew System::EventHandler(this, &Form1::plusBtn_Click);
			// 
			// changeSemnBtn
			// 
			this->changeSemnBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changeSemnBtn->Location = System::Drawing::Point(12, 492);
			this->changeSemnBtn->Name = L"changeSemnBtn";
			this->changeSemnBtn->Size = System::Drawing::Size(105, 65);
			this->changeSemnBtn->TabIndex = 1;
			this->changeSemnBtn->Text = L"+/-";
			this->changeSemnBtn->UseVisualStyleBackColor = true;
			this->changeSemnBtn->Click += gcnew System::EventHandler(this, &Form1::changeSemnBtn_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(123, 491);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(105, 65);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// dotBtn
			// 
			this->dotBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dotBtn->Location = System::Drawing::Point(234, 491);
			this->dotBtn->Name = L"dotBtn";
			this->dotBtn->Size = System::Drawing::Size(105, 65);
			this->dotBtn->TabIndex = 1;
			this->dotBtn->Text = L".";
			this->dotBtn->UseVisualStyleBackColor = true;
			this->dotBtn->Click += gcnew System::EventHandler(this, &Form1::dotBtn_Click);
			// 
			// equalBtn
			// 
			this->equalBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->equalBtn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalBtn->Location = System::Drawing::Point(345, 491);
			this->equalBtn->Name = L"equalBtn";
			this->equalBtn->Size = System::Drawing::Size(105, 65);
			this->equalBtn->TabIndex = 1;
			this->equalBtn->Text = L"=";
			this->equalBtn->UseVisualStyleBackColor = false;
			this->equalBtn->Click += gcnew System::EventHandler(this, &Form1::equalBtn_Click);
			// 
			// prevNrField
			// 
			this->prevNrField->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->prevNrField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prevNrField->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->prevNrField->Location = System::Drawing::Point(13, 13);
			this->prevNrField->Multiline = true;
			this->prevNrField->Name = L"prevNrField";
			this->prevNrField->ReadOnly = true;
			this->prevNrField->Size = System::Drawing::Size(435, 31);
			this->prevNrField->TabIndex = 2;
			this->prevNrField->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 569);
			this->Controls->Add(this->prevNrField);
			this->Controls->Add(this->equalBtn);
			this->Controls->Add(this->plusBtn);
			this->Controls->Add(this->minusBtn);
			this->Controls->Add(this->multBtn);
			this->Controls->Add(this->divisionBtn);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->dotBtn);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->rootBtn);
			this->Controls->Add(this->cBtn);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->powerBtn);
			this->Controls->Add(this->ceBtn);
			this->Controls->Add(this->changeSemnBtn);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->fractionBtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->calcField);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double nrToCalc;
	private: char operrator;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	public: void clickOperator(char op) {
		// if field is empty
		if (calcField->Text == "" && prevNrField->Text == "") return;


		String^ s;
		
		switch (op) {
		case '-':
			s = "-";
			break;

		case '+':
			s = "+";
			break;

		case '*':
			s = "*";
			break;

		case '/':
			s = "/";
			break;

		case '^':
			s = "^";
			break;
		}

		if (prevNrField->Text == "") {
			operrator = op;

			nrToCalc = Double::Parse(calcField->Text);

			calcField->Clear();

			prevNrField->Text = nrToCalc.ToString() + " " + s;
		}

		else if (operrator != op) {
			operrator = op;

			nrToCalc = Double::Parse(prevNrField->Text->Substring(0, prevNrField->TextLength - 2));

			calcField->Clear();

			prevNrField->Text = nrToCalc.ToString() + " " + s;
		}
		else {
			calculate();
		}
	}

	public: void calculate() {
		if (!operrator) return;
		if (calcField->Text == "") return;

		double result;
		nrToCalc = Double::Parse(prevNrField->Text->Substring(0, prevNrField->TextLength - 2));
		double secondNr = Double::Parse(calcField->Text);

		switch (operrator) {
		case '-':
			result = nrToCalc - secondNr;
			break;

		case '+':
			result = nrToCalc + secondNr;
			break;

		case '*':
			result = nrToCalc * secondNr;
			break;

		case '/':
			if (secondNr == 0) {
				MessageBox::Show("Divizarea la 0 este interzisa", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			result = nrToCalc / secondNr;
			break;

		case '^':
			result = pow(nrToCalc, secondNr);
			break;
		}

		prevNrField->Text = result.ToString() + prevNrField->Text->Substring(prevNrField->TextLength-2);
		calcField->Clear();
	}




		   // cipher buttons
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 0;
	}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 1;
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 2;
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 3;
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 4;
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 5;
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 6;
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 7;
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 8;
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Text += 9;
	}
	private: System::Void minusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clickOperator('-');
	}
	private: System::Void equalBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		calculate();
	}
	private: System::Void plusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clickOperator('+');
	}
	private: System::Void multBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clickOperator('*');
	}
	private: System::Void divisionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clickOperator('/');
	}
	private: System::Void cBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		calcField->Clear();
		prevNrField->Clear();
		operrator = '\0';
	}
	private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int length = calcField->Text->Length;

		if (length < 1) return;

		calcField->Text = calcField->Text->Substring(0, length - 1);
	};
	private: System::Void dotBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// this allows only one dot in calcfield
		if (calcField->Text->Contains(".")) return;

		calcField->Text += ".";
	}
private: System::Void powerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	clickOperator('^');
}
private: System::Void rootBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// if field is empty
	if (calcField->Text == "") return;

	calcField->Text = sqrt(Double::Parse(calcField->Text)).ToString();
}
private: System::Void changeSemnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (calcField->Text->Contains("-")) {
		calcField->Text = calcField->Text->Substring(1);
	}
	else {
		calcField->Text = "-" + calcField->Text;
	}
}
private: System::Void fractionBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// if field is empty
	if (calcField->Text == "") return;

	calcField->Text = (1 / Double::Parse(calcField->Text)).ToString();
}
private: System::Void ceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	calcField->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// if field is empty
	if (calcField->Text == "" || prevNrField->Text == "") return;

	float percents = Double::Parse(calcField->Text);

	calcField->Text = (nrToCalc * percents / 100).ToString();
}
};
}
