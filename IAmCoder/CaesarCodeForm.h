#pragma once

#include "CaesarCoder.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CaesarCodeForm : public System::Windows::Forms::Form
	{
	public:
		CaesarCodeForm(void)
		{
			InitializeComponent();
			coder = gcnew CaesarCoder();
		}

	protected:
		~CaesarCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: CaesarCoder^ coder;
	private: System::Windows::Forms::TextBox^ txtbxOriginal;
	private: System::Windows::Forms::TextBox^ txtbxShift;

	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ bttnEncode;
	private: System::Windows::Forms::CheckBox^ chckbxLatin;
	private: System::Windows::Forms::CheckBox^ chckbxCyrillic;
	private: System::Windows::Forms::CheckBox^ chckbxDigit;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ bttnDecode;
	private: System::Windows::Forms::Button^ bttnCopy;




	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CaesarCodeForm::typeid));
			this->txtbxOriginal = (gcnew System::Windows::Forms::TextBox());
			this->txtbxShift = (gcnew System::Windows::Forms::TextBox());
			this->txtbxChanged = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttnEncode = (gcnew System::Windows::Forms::Button());
			this->chckbxLatin = (gcnew System::Windows::Forms::CheckBox());
			this->chckbxCyrillic = (gcnew System::Windows::Forms::CheckBox());
			this->chckbxDigit = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bttnDecode = (gcnew System::Windows::Forms::Button());
			this->bttnCopy = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtbxOriginal
			// 
			this->txtbxOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxOriginal->Location = System::Drawing::Point(12, 80);
			this->txtbxOriginal->Multiline = true;
			this->txtbxOriginal->Name = L"txtbxOriginal";
			this->txtbxOriginal->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxOriginal->Size = System::Drawing::Size(817, 116);
			this->txtbxOriginal->TabIndex = 13;
			// 
			// txtbxShift
			// 
			this->txtbxShift->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxShift->Location = System::Drawing::Point(469, 36);
			this->txtbxShift->MaxLength = 4;
			this->txtbxShift->Multiline = true;
			this->txtbxShift->Name = L"txtbxShift";
			this->txtbxShift->Size = System::Drawing::Size(121, 38);
			this->txtbxShift->TabIndex = 12;
			this->txtbxShift->Text = L"3";
			this->txtbxShift->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CaesarCodeForm::txtbxShift_KeyPress);
			// 
			// txtbxChanged
			// 
			this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxChanged->Location = System::Drawing::Point(17, 333);
			this->txtbxChanged->Multiline = true;
			this->txtbxChanged->Name = L"txtbxChanged";
			this->txtbxChanged->ReadOnly = true;
			this->txtbxChanged->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxChanged->Size = System::Drawing::Size(812, 121);
			this->txtbxChanged->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 36);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Ðåçóëüòàò";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 36);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ââåäèòå òåêñò è øàã ñäâèãà \r\n";
			// 
			// bttnEncode
			// 
			this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnEncode->Location = System::Drawing::Point(12, 208);
			this->bttnEncode->Name = L"bttnEncode";
			this->bttnEncode->Size = System::Drawing::Size(202, 53);
			this->bttnEncode->TabIndex = 7;
			this->bttnEncode->Text = L"Çàøèôðîâàòü";
			this->bttnEncode->UseVisualStyleBackColor = true;
			this->bttnEncode->Click += gcnew System::EventHandler(this, &CaesarCodeForm::bttnEncode_Click);
			// 
			// chckbxLatin
			// 
			this->chckbxLatin->AutoSize = true;
			this->chckbxLatin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chckbxLatin->Location = System::Drawing::Point(493, 208);
			this->chckbxLatin->Name = L"chckbxLatin";
			this->chckbxLatin->Size = System::Drawing::Size(336, 33);
			this->chckbxLatin->TabIndex = 15;
			this->chckbxLatin->Text = L"Ñäâèãàòü ëàòèíñêèå áóêâû";
			this->chckbxLatin->UseVisualStyleBackColor = true;
			// 
			// chckbxCyrillic
			// 
			this->chckbxCyrillic->AutoSize = true;
			this->chckbxCyrillic->Checked = true;
			this->chckbxCyrillic->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chckbxCyrillic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chckbxCyrillic->Location = System::Drawing::Point(493, 237);
			this->chckbxCyrillic->Name = L"chckbxCyrillic";
			this->chckbxCyrillic->Size = System::Drawing::Size(342, 33);
			this->chckbxCyrillic->TabIndex = 16;
			this->chckbxCyrillic->Text = L"Ñäâèãàòü áóêâû êèðèëëèöû";
			this->chckbxCyrillic->UseVisualStyleBackColor = true;
			// 
			// chckbxDigit
			// 
			this->chckbxDigit->AutoSize = true;
			this->chckbxDigit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chckbxDigit->Location = System::Drawing::Point(493, 262);
			this->chckbxDigit->Name = L"chckbxDigit";
			this->chckbxDigit->Size = System::Drawing::Size(226, 33);
			this->chckbxDigit->TabIndex = 17;
			this->chckbxDigit->Text = L"Ñäâèãàòü öèôðû";
			this->chckbxDigit->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(860, 28);
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
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CaesarCodeForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &CaesarCodeForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// bttnDecode
			// 
			this->bttnDecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnDecode->Location = System::Drawing::Point(238, 208);
			this->bttnDecode->Name = L"bttnDecode";
			this->bttnDecode->Size = System::Drawing::Size(221, 53);
			this->bttnDecode->TabIndex = 30;
			this->bttnDecode->Text = L"Ðàñøèôðîâàòü";
			this->bttnDecode->UseVisualStyleBackColor = true;
			this->bttnDecode->Click += gcnew System::EventHandler(this, &CaesarCodeForm::bttnDecode_Click);
			// 
			// bttnCopy
			// 
			this->bttnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnCopy.Image")));
			this->bttnCopy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bttnCopy->Location = System::Drawing::Point(321, 460);
			this->bttnCopy->Name = L"bttnCopy";
			this->bttnCopy->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bttnCopy->Size = System::Drawing::Size(204, 50);
			this->bttnCopy->TabIndex = 31;
			this->bttnCopy->Text = L"Êîïèðîâàòü";
			this->bttnCopy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bttnCopy->UseVisualStyleBackColor = true;
			this->bttnCopy->Click += gcnew System::EventHandler(this, &CaesarCodeForm::bttnCopy_Click);
			// 
			// CaesarCodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 515);
			this->Controls->Add(this->bttnCopy);
			this->Controls->Add(this->bttnDecode);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->chckbxDigit);
			this->Controls->Add(this->chckbxCyrillic);
			this->Controls->Add(this->chckbxLatin);
			this->Controls->Add(this->txtbxOriginal);
			this->Controls->Add(this->txtbxShift);
			this->Controls->Add(this->txtbxChanged);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttnEncode);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(878, 562);
			this->Name = L"CaesarCodeForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Øèôð Öåçàðÿ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void bttnEncode_Click(System::Object^ sender, System::EventArgs^ e) {
	coder->OriginalText = txtbxOriginal->Text;
	
	try {
		int shift = System::Convert::ToInt32(txtbxShift->Text);

		bool isLatin = chckbxLatin->Checked;     
		bool isCyrillic = chckbxCyrillic->Checked;  
		bool isDigit = chckbxDigit->Checked;

		coder->CaesarEncode(shift, isLatin, isCyrillic, isDigit);
		txtbxChanged->Text = coder->EncryptedText;
	}
	catch (...) {
		MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void bttnDecode_Click(System::Object^ sender, System::EventArgs^ e) {
	coder->OriginalText = txtbxOriginal->Text;

	try {
		int shift = System::Convert::ToInt32(txtbxShift->Text);

		bool isLatin = chckbxLatin->Checked;
		bool isCyrillic = chckbxCyrillic->Checked;
		bool isDigit = chckbxDigit->Checked;

		coder->CaesarDecode(shift, isLatin, isCyrillic, isDigit);
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
private: System::Void txtbxShift_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b') {
		e->Handled = true;
	}
}


};
}