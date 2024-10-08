#pragma once

#include "Coder.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class RailCodeForm : public System::Windows::Forms::Form
	{
	public:
		RailCodeForm(void)
		{
			InitializeComponent();
			coder = gcnew Coder();
		}

	protected:
		~RailCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Coder^ coder;
	private: System::Windows::Forms::Button^ bttnEncode;
	private: System::Windows::Forms::Button^ bttnDecode;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::TextBox^ txtbxRail;


	private: System::Windows::Forms::TextBox^ txtbxOriginal;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RailCodeForm::typeid));
			   this->bttnEncode = (gcnew System::Windows::Forms::Button());
			   this->bttnDecode = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->txtbxChanged = (gcnew System::Windows::Forms::TextBox());
			   this->txtbxRail = (gcnew System::Windows::Forms::TextBox());
			   this->txtbxOriginal = (gcnew System::Windows::Forms::TextBox());
			   this->SuspendLayout();
			   // 
			   // bttnEncode
			   // 
			   this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->bttnEncode->Location = System::Drawing::Point(12, 168);
			   this->bttnEncode->Name = L"bttnEncode";
			   this->bttnEncode->Size = System::Drawing::Size(275, 53);
			   this->bttnEncode->TabIndex = 0;
			   this->bttnEncode->Text = L"Зашифровать";
			   this->bttnEncode->UseVisualStyleBackColor = true;
			   this->bttnEncode->Click += gcnew System::EventHandler(this, &RailCodeForm::button1_Click);
			   // 
			   // bttnDecode
			   // 
			   this->bttnDecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->bttnDecode->Location = System::Drawing::Point(330, 168);
			   this->bttnDecode->Name = L"bttnDecode";
			   this->bttnDecode->Size = System::Drawing::Size(257, 52);
			   this->bttnDecode->TabIndex = 1;
			   this->bttnDecode->Text = L"Расшифровать";
			   this->bttnDecode->UseVisualStyleBackColor = true;
			   this->bttnDecode->Click += gcnew System::EventHandler(this, &RailCodeForm::bttnDecode_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(349, 29);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Введите текст и кол-во рельс";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(242, 251);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(128, 29);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Результат";
			   // 
			   // txtbxChanged
			   // 
			   this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxChanged->Location = System::Drawing::Point(12, 294);
			   this->txtbxChanged->Multiline = true;
			   this->txtbxChanged->Name = L"txtbxChanged";
			   this->txtbxChanged->ReadOnly = true;
			   this->txtbxChanged->Size = System::Drawing::Size(575, 121);
			   this->txtbxChanged->TabIndex = 4;
			   // 
			   // txtbxRail
			   // 
			   this->txtbxRail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxRail->Location = System::Drawing::Point(466, 9);
			   this->txtbxRail->Multiline = true;
			   this->txtbxRail->Name = L"txtbxRail";
			   this->txtbxRail->Size = System::Drawing::Size(121, 31);
			   this->txtbxRail->TabIndex = 5;
			   // 
			   // txtbxOriginal
			   // 
			   this->txtbxOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxOriginal->Location = System::Drawing::Point(12, 46);
			   this->txtbxOriginal->Multiline = true;
			   this->txtbxOriginal->Name = L"txtbxOriginal";
			   this->txtbxOriginal->Size = System::Drawing::Size(575, 116);
			   this->txtbxOriginal->TabIndex = 6;
			   // 
			   // RailCodeForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(599, 427);
			   this->Controls->Add(this->txtbxOriginal);
			   this->Controls->Add(this->txtbxRail);
			   this->Controls->Add(this->txtbxChanged);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->bttnDecode);
			   this->Controls->Add(this->bttnEncode);
			   this->Cursor = System::Windows::Forms::Cursors::AppStarting;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"RailCodeForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Шифр рельсового ограничения";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			int railCount = System::Convert::ToInt32(txtbxRail->Text);
			coder->RailFenceEncode(railCount);
			txtbxChanged->Text = coder->EncryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Некорректные данные!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void bttnDecode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			int railCount = System::Convert::ToInt32(txtbxRail->Text);
			coder->RailFenceDecode(railCount);
			txtbxChanged->Text = coder->DecryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Некорректные данные!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
