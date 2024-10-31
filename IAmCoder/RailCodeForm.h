#pragma once

#include "RailCoder.h"

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
			coder = gcnew RailCoder();
		}

	protected:
		~RailCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: RailCoder^ coder;
	private: System::Windows::Forms::Button^ bttnEncode;
	private: System::Windows::Forms::Button^ bttnDecode;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::TextBox^ txtbxRail;
	private: System::Windows::Forms::TextBox^ txtbxOriginal;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ bttnCopy;

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
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->bttnCopy = (gcnew System::Windows::Forms::Button());
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // bttnEncode
			   // 
			   this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->bttnEncode->Location = System::Drawing::Point(12, 265);
			   this->bttnEncode->Name = L"bttnEncode";
			   this->bttnEncode->Size = System::Drawing::Size(275, 53);
			   this->bttnEncode->TabIndex = 0;
			   this->bttnEncode->Text = L"Çàøèôðîâàòü";
			   this->bttnEncode->UseVisualStyleBackColor = true;
			   this->bttnEncode->Click += gcnew System::EventHandler(this, &RailCodeForm::bttnEncode_Click);
			   // 
			   // bttnDecode
			   // 
			   this->bttnDecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->bttnDecode->Location = System::Drawing::Point(330, 265);
			   this->bttnDecode->Name = L"bttnDecode";
			   this->bttnDecode->Size = System::Drawing::Size(257, 52);
			   this->bttnDecode->TabIndex = 1;
			   this->bttnDecode->Text = L"Ðàñøèôðîâàòü";
			   this->bttnDecode->UseVisualStyleBackColor = true;
			   this->bttnDecode->Click += gcnew System::EventHandler(this, &RailCodeForm::bttnDecode_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(12, 38);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(377, 87);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Ââåäèòå òåêñò è êîë-âî ðåëüñ\r\n(åñëè îíî áîëüøå äëèíû òåêñòà,\r\nøèôðîâàíèå íå èìååò"
				   L" ñìûñëà)";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(237, 331);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(128, 29);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Ðåçóëüòàò";
			   // 
			   // txtbxChanged
			   // 
			   this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxChanged->Location = System::Drawing::Point(12, 374);
			   this->txtbxChanged->Multiline = true;
			   this->txtbxChanged->Name = L"txtbxChanged";
			   this->txtbxChanged->ReadOnly = true;
			   this->txtbxChanged->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->txtbxChanged->Size = System::Drawing::Size(575, 121);
			   this->txtbxChanged->TabIndex = 4;
			   // 
			   // txtbxRail
			   // 
			   this->txtbxRail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxRail->Location = System::Drawing::Point(453, 64);
			   this->txtbxRail->MaxLength = 4;
			   this->txtbxRail->Multiline = true;
			   this->txtbxRail->Name = L"txtbxRail";
			   this->txtbxRail->Size = System::Drawing::Size(134, 49);
			   this->txtbxRail->TabIndex = 5;
			   this->txtbxRail->Text = L"4";
			   this->txtbxRail->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RailCodeForm::txtbxRail_KeyPress);
			   // 
			   // txtbxOriginal
			   // 
			   this->txtbxOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->txtbxOriginal->Location = System::Drawing::Point(12, 128);
			   this->txtbxOriginal->Multiline = true;
			   this->txtbxOriginal->Name = L"txtbxOriginal";
			   this->txtbxOriginal->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->txtbxOriginal->Size = System::Drawing::Size(575, 116);
			   this->txtbxOriginal->TabIndex = 6;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(602, 28);
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
			   this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailCodeForm::îòêðûòüToolStripMenuItem_Click);
			   // 
			   // ñîõðàíèòüToolStripMenuItem
			   // 
			   this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			   this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			   this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			   this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			   this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &RailCodeForm::ñîõðàíèòüToolStripMenuItem_Click);
			   // 
			   // bttnCopy
			   // 
			   this->bttnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->bttnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnCopy.Image")));
			   this->bttnCopy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->bttnCopy->Location = System::Drawing::Point(197, 501);
			   this->bttnCopy->Name = L"bttnCopy";
			   this->bttnCopy->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->bttnCopy->Size = System::Drawing::Size(204, 50);
			   this->bttnCopy->TabIndex = 30;
			   this->bttnCopy->Text = L"Êîïèðîâàòü";
			   this->bttnCopy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->bttnCopy->UseVisualStyleBackColor = true;
			   this->bttnCopy->Click += gcnew System::EventHandler(this, &RailCodeForm::bttnCopy_Click);
			   // 
			   // RailCodeForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(602, 561);
			   this->Controls->Add(this->bttnCopy);
			   this->Controls->Add(this->menuStrip1);
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
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(620, 608);
			   this->Name = L"RailCodeForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Øèôð ðåëüñîâîãî îãðàíè÷åíèÿ";
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion

	private: System::Void bttnEncode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			int railCount = System::Convert::ToInt32(txtbxRail->Text);
			coder->RailFenceEncode(railCount);
			txtbxChanged->Text = coder->EncryptedText;
		}
		catch (...) {
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
			MessageBox::Show(this, "Íåêîððåêòíûå äàííûå!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void bttnCopy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(txtbxChanged->Text)) {
			Clipboard::SetText(txtbxChanged->Text);
		}
	}

	private: System::Void txtbxRail_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b') {
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