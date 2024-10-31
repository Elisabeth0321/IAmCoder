#pragma once

#include "FourSquareCoder.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FourSquareCodeForm : public System::Windows::Forms::Form
	{
	public:
		FourSquareCodeForm(void)
		{
			InitializeComponent();
			coder = gcnew FourSquareCoder();
		}

	protected:
		~FourSquareCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: FourSquareCoder^ coder;
	private: System::Windows::Forms::TextBox^ txtbxOriginal;

	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bttnDecode;
	private: System::Windows::Forms::Button^ bttnEncode;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtbxFirstKey;
	private: System::Windows::Forms::TextBox^ txtbxSecondKey;
	private: System::Windows::Forms::RadioButton^ rdbtnLatin;
	private: System::Windows::Forms::RadioButton^ rdbtnCyrillic;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ bttnCopy;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FourSquareCodeForm::typeid));
			this->txtbxOriginal = (gcnew System::Windows::Forms::TextBox());
			this->txtbxChanged = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttnDecode = (gcnew System::Windows::Forms::Button());
			this->bttnEncode = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtbxFirstKey = (gcnew System::Windows::Forms::TextBox());
			this->txtbxSecondKey = (gcnew System::Windows::Forms::TextBox());
			this->rdbtnLatin = (gcnew System::Windows::Forms::RadioButton());
			this->rdbtnCyrillic = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bttnCopy = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtbxOriginal
			// 
			this->txtbxOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxOriginal->Location = System::Drawing::Point(12, 68);
			this->txtbxOriginal->Multiline = true;
			this->txtbxOriginal->Name = L"txtbxOriginal";
			this->txtbxOriginal->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxOriginal->Size = System::Drawing::Size(675, 172);
			this->txtbxOriginal->TabIndex = 13;
			this->txtbxOriginal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FourSquareCodeForm::txtbxKey_KeyPress);
			// 
			// txtbxChanged
			// 
			this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxChanged->Location = System::Drawing::Point(12, 372);
			this->txtbxChanged->Multiline = true;
			this->txtbxChanged->Name = L"txtbxChanged";
			this->txtbxChanged->ReadOnly = true;
			this->txtbxChanged->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxChanged->Size = System::Drawing::Size(675, 121);
			this->txtbxChanged->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Ðåçóëüòàò";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ââåäèòå òåêñò è êîäîâûå ñëîâà";
			// 
			// bttnDecode
			// 
			this->bttnDecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnDecode->Location = System::Drawing::Point(405, 260);
			this->bttnDecode->Name = L"bttnDecode";
			this->bttnDecode->Size = System::Drawing::Size(282, 52);
			this->bttnDecode->TabIndex = 8;
			this->bttnDecode->Text = L"Ðàñøèôðîâàòü";
			this->bttnDecode->UseVisualStyleBackColor = true;
			this->bttnDecode->Click += gcnew System::EventHandler(this, &FourSquareCodeForm::bttnDecode_Click);
			// 
			// bttnEncode
			// 
			this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnEncode->Location = System::Drawing::Point(12, 259);
			this->bttnEncode->Name = L"bttnEncode";
			this->bttnEncode->Size = System::Drawing::Size(311, 53);
			this->bttnEncode->TabIndex = 7;
			this->bttnEncode->Text = L"Çàøèôðîâàòü";
			this->bttnEncode->UseVisualStyleBackColor = true;
			this->bttnEncode->Click += gcnew System::EventHandler(this, &FourSquareCodeForm::bttnEncode_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(727, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 29);
			this->label3->TabIndex = 14;
			this->label3->Text = L"1å êîäîâîå ñëîâî:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(727, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"2å êîäîâîå ñëîâî:";
			// 
			// txtbxFirstKey
			// 
			this->txtbxFirstKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxFirstKey->Location = System::Drawing::Point(732, 100);
			this->txtbxFirstKey->MaxLength = 50;
			this->txtbxFirstKey->Multiline = true;
			this->txtbxFirstKey->Name = L"txtbxFirstKey";
			this->txtbxFirstKey->Size = System::Drawing::Size(224, 47);
			this->txtbxFirstKey->TabIndex = 16;
			this->txtbxFirstKey->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FourSquareCodeForm::txtbxKey_KeyPress);
			// 
			// txtbxSecondKey
			// 
			this->txtbxSecondKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxSecondKey->Location = System::Drawing::Point(728, 193);
			this->txtbxSecondKey->MaxLength = 50;
			this->txtbxSecondKey->Multiline = true;
			this->txtbxSecondKey->Name = L"txtbxSecondKey";
			this->txtbxSecondKey->Size = System::Drawing::Size(230, 47);
			this->txtbxSecondKey->TabIndex = 17;
			this->txtbxSecondKey->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FourSquareCodeForm::txtbxKey_KeyPress);
			// 
			// rdbtnLatin
			// 
			this->rdbtnLatin->AutoSize = true;
			this->rdbtnLatin->Checked = true;
			this->rdbtnLatin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rdbtnLatin->Location = System::Drawing::Point(732, 386);
			this->rdbtnLatin->Name = L"rdbtnLatin";
			this->rdbtnLatin->Size = System::Drawing::Size(141, 29);
			this->rdbtnLatin->TabIndex = 18;
			this->rdbtnLatin->TabStop = true;
			this->rdbtnLatin->Text = L"Àíãëèéñêèé";
			this->rdbtnLatin->UseVisualStyleBackColor = true;
			this->rdbtnLatin->CheckedChanged += gcnew System::EventHandler(this, &FourSquareCodeForm::rdbtn_CheckedChanged);
			// 
			// rdbtnCyrillic
			// 
			this->rdbtnCyrillic->AutoSize = true;
			this->rdbtnCyrillic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rdbtnCyrillic->Location = System::Drawing::Point(732, 351);
			this->rdbtnCyrillic->Name = L"rdbtnCyrillic";
			this->rdbtnCyrillic->Size = System::Drawing::Size(106, 29);
			this->rdbtnCyrillic->TabIndex = 19;
			this->rdbtnCyrillic->TabStop = true;
			this->rdbtnCyrillic->Text = L"Ðóññêèé";
			this->rdbtnCyrillic->UseVisualStyleBackColor = true;
			this->rdbtnCyrillic->CheckedChanged += gcnew System::EventHandler(this, &FourSquareCodeForm::rdbtn_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(727, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(239, 58);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Âûáåðèòå àëôàâèò \r\näëÿ øèôðîâàíèÿ:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(981, 28);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îòêðûòüToolStripMenuItem,
					this->ñîõðàíèòüToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêðûòüToolStripMenuItem
			// 
			this->îòêðûòüToolStripMenuItem->Name = L"îòêðûòüToolStripMenuItem";
			this->îòêðûòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->îòêðûòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->îòêðûòüToolStripMenuItem->Text = L"Îòêðûòü";
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &FourSquareCodeForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &FourSquareCodeForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// bttnCopy
			// 
			this->bttnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnCopy.Image")));
			this->bttnCopy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bttnCopy->Location = System::Drawing::Point(247, 499);
			this->bttnCopy->Name = L"bttnCopy";
			this->bttnCopy->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bttnCopy->Size = System::Drawing::Size(204, 50);
			this->bttnCopy->TabIndex = 30;
			this->bttnCopy->Text = L"Êîïèðîâàòü";
			this->bttnCopy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bttnCopy->UseVisualStyleBackColor = true;
			this->bttnCopy->Click += gcnew System::EventHandler(this, &FourSquareCodeForm::bttnCopy_Click);
			// 
			// FourSquareCodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 556);
			this->Controls->Add(this->bttnCopy);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->rdbtnCyrillic);
			this->Controls->Add(this->rdbtnLatin);
			this->Controls->Add(this->txtbxSecondKey);
			this->Controls->Add(this->txtbxFirstKey);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtbxOriginal);
			this->Controls->Add(this->txtbxChanged);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttnDecode);
			this->Controls->Add(this->bttnEncode);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(999, 603);
			this->Name = L"FourSquareCodeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Øèôð ÷åòûð¸õ êâàäðàòîâ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnEncode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			coder->FourSquareEncode(txtbxFirstKey->Text, txtbxSecondKey->Text, rdbtnLatin->Checked);
			txtbxChanged->Text = coder->EncryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void bttnDecode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			coder->FourSquareDecode(txtbxFirstKey->Text, txtbxSecondKey->Text, rdbtnLatin->Checked);
			txtbxChanged->Text = coder->DecryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void bttnCopy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(txtbxChanged->Text)) {
			Clipboard::SetText(txtbxChanged->Text);
		}
	}

	private: System::Void txtbxKey_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		bool isLatin = rdbtnLatin->Checked && ((e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z'));
		bool isCyrillic = rdbtnCyrillic->Checked && ((e->KeyChar >= L'À' && e->KeyChar <= L'ß') || (e->KeyChar >= L'à' && e->KeyChar <= L'ÿ'));
		if (!(Char::IsLetter(e->KeyChar) && (isLatin || isCyrillic)) && e->KeyChar != '\b') {
			e->Handled = true;
		}
	}

	private: System::Void rdbtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		txtbxOriginal->Text = "";
		txtbxChanged->Text = "";
		txtbxFirstKey->Text = "";
		txtbxSecondKey->Text = "";
	}

	private: System::Void îòêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog->FilterIndex = 1;
		openFileDialog->RestoreDirectory = true;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog->FileName;
			try {
				txtbxOriginal->Text = System::IO::File::ReadAllText(filePath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Îøèáêà ïðè ÷òåíèè ôàéëà: " + ex->Message);
			}
		}
	}

	private: System::Void ñîõðàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

		saveFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog->FilterIndex = 1;
		saveFileDialog->RestoreDirectory = true;

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = saveFileDialog->FileName;
			try {
				System::IO::File::WriteAllText(filePath, txtbxChanged->Text);
				MessageBox::Show("Ôàéë óñïåøíî ñîõðàí¸í.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Îøèáêà ïðè ñîõðàíåíèè ôàéëà: " + ex->Message);
			}
		}
	}

};
}