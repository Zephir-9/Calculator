#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
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
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnEquals;
	protected:
	private: System::Windows::Forms::Button^ BtnDot;
	private: System::Windows::Forms::Button^ BtnZero;
	private: System::Windows::Forms::Button^ BtnOne;
	private: System::Windows::Forms::Button^ BtnTwo;
	private: System::Windows::Forms::Button^ BtnThree;
	private: System::Windows::Forms::Button^ BtnPlus;
	private: System::Windows::Forms::Button^ BtnMinus;
	private: System::Windows::Forms::Button^ BtnMult;
	private: System::Windows::Forms::Button^ BtnDiv;

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
			this->BtnEquals = (gcnew System::Windows::Forms::Button());
			this->BtnDot = (gcnew System::Windows::Forms::Button());
			this->BtnZero = (gcnew System::Windows::Forms::Button());
			this->BtnOne = (gcnew System::Windows::Forms::Button());
			this->BtnTwo = (gcnew System::Windows::Forms::Button());
			this->BtnThree = (gcnew System::Windows::Forms::Button());
			this->BtnPlus = (gcnew System::Windows::Forms::Button());
			this->BtnMinus = (gcnew System::Windows::Forms::Button());
			this->BtnMult = (gcnew System::Windows::Forms::Button());
			this->BtnDiv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnEquals
			// 
			this->BtnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnEquals->Location = System::Drawing::Point(255, 335);
			this->BtnEquals->Name = L"BtnEquals";
			this->BtnEquals->Size = System::Drawing::Size(57, 30);
			this->BtnEquals->TabIndex = 0;
			this->BtnEquals->Text = L"=";
			this->BtnEquals->UseVisualStyleBackColor = true;
			// 
			// BtnDot
			// 
			this->BtnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnDot->Location = System::Drawing::Point(192, 335);
			this->BtnDot->Name = L"BtnDot";
			this->BtnDot->Size = System::Drawing::Size(57, 30);
			this->BtnDot->TabIndex = 1;
			this->BtnDot->Text = L".";
			this->BtnDot->UseVisualStyleBackColor = true;
			// 
			// BtnZero
			// 
			this->BtnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnZero->Location = System::Drawing::Point(129, 335);
			this->BtnZero->Name = L"BtnZero";
			this->BtnZero->Size = System::Drawing::Size(57, 30);
			this->BtnZero->TabIndex = 2;
			this->BtnZero->Text = L"0";
			this->BtnZero->UseVisualStyleBackColor = true;
			// 
			// BtnOne
			// 
			this->BtnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnOne->Location = System::Drawing::Point(66, 299);
			this->BtnOne->Name = L"BtnOne";
			this->BtnOne->Size = System::Drawing::Size(57, 30);
			this->BtnOne->TabIndex = 3;
			this->BtnOne->Text = L"1";
			this->BtnOne->UseVisualStyleBackColor = true;
			// 
			// BtnTwo
			// 
			this->BtnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnTwo->Location = System::Drawing::Point(129, 299);
			this->BtnTwo->Name = L"BtnTwo";
			this->BtnTwo->Size = System::Drawing::Size(57, 30);
			this->BtnTwo->TabIndex = 4;
			this->BtnTwo->Text = L"2";
			this->BtnTwo->UseVisualStyleBackColor = true;
			this->BtnTwo->Click += gcnew System::EventHandler(this, &CalcForm::BtnTwo_Click);
			// 
			// BtnThree
			// 
			this->BtnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnThree->Location = System::Drawing::Point(192, 299);
			this->BtnThree->Name = L"BtnThree";
			this->BtnThree->Size = System::Drawing::Size(57, 30);
			this->BtnThree->TabIndex = 5;
			this->BtnThree->Text = L"3";
			this->BtnThree->UseVisualStyleBackColor = true;
			// 
			// BtnPlus
			// 
			this->BtnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnPlus->Location = System::Drawing::Point(255, 299);
			this->BtnPlus->Name = L"BtnPlus";
			this->BtnPlus->Size = System::Drawing::Size(57, 30);
			this->BtnPlus->TabIndex = 6;
			this->BtnPlus->Text = L"+";
			this->BtnPlus->UseVisualStyleBackColor = true;
			// 
			// BtnMinus
			// 
			this->BtnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnMinus->Location = System::Drawing::Point(255, 263);
			this->BtnMinus->Name = L"BtnMinus";
			this->BtnMinus->Size = System::Drawing::Size(57, 30);
			this->BtnMinus->TabIndex = 7;
			this->BtnMinus->Text = L"-";
			this->BtnMinus->UseVisualStyleBackColor = true;
			// 
			// BtnMult
			// 
			this->BtnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnMult->Location = System::Drawing::Point(255, 227);
			this->BtnMult->Name = L"BtnMult";
			this->BtnMult->Size = System::Drawing::Size(57, 30);
			this->BtnMult->TabIndex = 8;
			this->BtnMult->Text = L"*";
			this->BtnMult->UseVisualStyleBackColor = true;
			// 
			// BtnDiv
			// 
			this->BtnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BtnDiv->Location = System::Drawing::Point(255, 191);
			this->BtnDiv->Name = L"BtnDiv";
			this->BtnDiv->Size = System::Drawing::Size(57, 30);
			this->BtnDiv->TabIndex = 9;
			this->BtnDiv->Text = L"/";
			this->BtnDiv->UseVisualStyleBackColor = true;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(313, 367);
			this->Controls->Add(this->BtnDiv);
			this->Controls->Add(this->BtnMult);
			this->Controls->Add(this->BtnMinus);
			this->Controls->Add(this->BtnPlus);
			this->Controls->Add(this->BtnThree);
			this->Controls->Add(this->BtnTwo);
			this->Controls->Add(this->BtnOne);
			this->Controls->Add(this->BtnZero);
			this->Controls->Add(this->BtnDot);
			this->Controls->Add(this->BtnEquals);
			this->Name = L"CalcForm";
			this->Text = L"CalcForm";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CalcForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnTwo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
