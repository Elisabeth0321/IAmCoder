#pragma once

#include "VinegereCoder.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class VinegereCodeForm : public System::Windows::Forms::Form
	{
	public:
		VinegereCodeForm(void)
		{
			InitializeComponent();
			coder = gcnew VinegereCoder();
		}

	protected:
		~VinegereCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: VinegereCoder^ coder;
	private: System::Windows::Forms::TextBox^ txtbxOriginal;
	private: System::Windows::Forms::TextBox^ txtbxKey;

	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bttnDecode;
	private: System::Windows::Forms::Button^ bttnEncode;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VinegereCodeForm::typeid));
			this->txtbxOriginal = (gcnew System::Windows::Forms::TextBox());
			this->txtbxKey = (gcnew System::Windows::Forms::TextBox());
			this->txtbxChanged = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bttnDecode = (gcnew System::Windows::Forms::Button());
			this->bttnEncode = (gcnew System::Windows::Forms::Button());
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
			this->txtbxOriginal->Location = System::Drawing::Point(12, 113);
			this->txtbxOriginal->Multiline = true;
			this->txtbxOriginal->Name = L"txtbxOriginal";
			this->txtbxOriginal->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxOriginal->Size = System::Drawing::Size(707, 116);
			this->txtbxOriginal->TabIndex = 20;
			this->txtbxOriginal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VinegereCodeForm::txtbxKey_KeyPress);
			// 
			// txtbxKey
			// 
			this->txtbxKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxKey->Location = System::Drawing::Point(462, 46);
			this->txtbxKey->MaxLength = 50;
			this->txtbxKey->Multiline = true;
			this->txtbxKey->Name = L"txtbxKey";
			this->txtbxKey->Size = System::Drawing::Size(257, 36);
			this->txtbxKey->TabIndex = 19;
			this->txtbxKey->Text = L"ONOSHKO";
			this->txtbxKey->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VinegereCodeForm::txtbxKey_KeyPress);
			// 
			// txtbxChanged
			// 
			this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxChanged->Location = System::Drawing::Point(12, 378);
			this->txtbxChanged->Multiline = true;
			this->txtbxChanged->Name = L"txtbxChanged";
			this->txtbxChanged->ReadOnly = true;
			this->txtbxChanged->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxChanged->Size = System::Drawing::Size(707, 121);
			this->txtbxChanged->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 32);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Ðåçóëüòàò";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(425, 64);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Ââåäèòå òåêñò è êîäîâîå ñëîâî\r\n(ëàòèíèöåé)";
			// 
			// bttnDecode
			// 
			this->bttnDecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnDecode->Location = System::Drawing::Point(462, 249);
			this->bttnDecode->Name = L"bttnDecode";
			this->bttnDecode->Size = System::Drawing::Size(257, 52);
			this->bttnDecode->TabIndex = 15;
			this->bttnDecode->Text = L"Ðàñøèôðîâàòü";
			this->bttnDecode->UseVisualStyleBackColor = true;
			this->bttnDecode->Click += gcnew System::EventHandler(this, &VinegereCodeForm::bttnDecode_Click);
			// 
			// bttnEncode
			// 
			this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnEncode->Location = System::Drawing::Point(12, 249);
			this->bttnEncode->Name = L"bttnEncode";
			this->bttnEncode->Size = System::Drawing::Size(275, 53);
			this->bttnEncode->TabIndex = 14;
			this->bttnEncode->Text = L"Çàøèôðîâàòü";
			this->bttnEncode->UseVisualStyleBackColor = true;
			this->bttnEncode->Click += gcnew System::EventHandler(this, &VinegereCodeForm::bttnEncode_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(738, 28);
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
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &VinegereCodeForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &VinegereCodeForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// bttnCopy
			// 
			this->bttnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnCopy.Image")));
			this->bttnCopy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bttnCopy->Location = System::Drawing::Point(267, 505);
			this->bttnCopy->Name = L"bttnCopy";
			this->bttnCopy->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bttnCopy->Size = System::Drawing::Size(204, 50);
			this->bttnCopy->TabIndex = 30;
			this->bttnCopy->Text = L"Êîïèðîâàòü";
			this->bttnCopy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bttnCopy->UseVisualStyleBackColor = true;
			this->bttnCopy->Click += gcnew System::EventHandler(this, &VinegereCodeForm::bttnCopy_Click);
			// 
			// VinegereCodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 560);
			this->Controls->Add(this->bttnCopy);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->txtbxOriginal);
			this->Controls->Add(this->txtbxKey);
			this->Controls->Add(this->txtbxChanged);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttnDecode);
			this->Controls->Add(this->bttnEncode);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(756, 607);
			this->Name = L"VinegereCodeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Øèôð Âèíåæåðà";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnEncode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			coder->VinegereEncode(txtbxKey->Text);
			txtbxChanged->Text = coder->EncryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void bttnDecode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			coder->VinegereDecode(txtbxKey->Text);
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
		if (!(Char::IsLetter(e->KeyChar) && ((e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z')))
			&& e->KeyChar != '\b') {
			e->Handled = true;
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

};
}