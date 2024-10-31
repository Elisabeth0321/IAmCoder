#pragma once

#include "AtbashCoder.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AtbashCodeForm : public System::Windows::Forms::Form
	{
	public:
		AtbashCodeForm(void)
		{
			InitializeComponent();
			coder = gcnew AtbashCoder();
		}

	protected:
		~AtbashCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: AtbashCoder^ coder;
	private: System::Windows::Forms::TextBox^ txtbxOriginal;
	private: System::Windows::Forms::TextBox^ txtbxChanged;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ bttnEncode;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::Button^ bttnCopy;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AtbashCodeForm::typeid));
			this->txtbxOriginal = (gcnew System::Windows::Forms::TextBox());
			this->txtbxChanged = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->txtbxOriginal->Location = System::Drawing::Point(12, 72);
			this->txtbxOriginal->Multiline = true;
			this->txtbxOriginal->Name = L"txtbxOriginal";
			this->txtbxOriginal->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxOriginal->Size = System::Drawing::Size(445, 116);
			this->txtbxOriginal->TabIndex = 27;
			// 
			// txtbxChanged
			// 
			this->txtbxChanged->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtbxChanged->Location = System::Drawing::Point(12, 319);
			this->txtbxChanged->Multiline = true;
			this->txtbxChanged->Name = L"txtbxChanged";
			this->txtbxChanged->ReadOnly = true;
			this->txtbxChanged->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbxChanged->Size = System::Drawing::Size(452, 121);
			this->txtbxChanged->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(160, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 32);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Ðåçóëüòàò";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(132, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 32);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Ââåäèòå òåêñò";
			// 
			// bttnEncode
			// 
			this->bttnEncode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnEncode->Location = System::Drawing::Point(129, 206);
			this->bttnEncode->Name = L"bttnEncode";
			this->bttnEncode->Size = System::Drawing::Size(214, 53);
			this->bttnEncode->TabIndex = 21;
			this->bttnEncode->Text = L"Çàøèôðîâàòü";
			this->bttnEncode->UseVisualStyleBackColor = true;
			this->bttnEncode->Click += gcnew System::EventHandler(this, &AtbashCodeForm::bttnEncode_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(475, 28);
			this->menuStrip1->TabIndex = 28;
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
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AtbashCodeForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"Ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AtbashCodeForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// bttnCopy
			// 
			this->bttnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bttnCopy.Image")));
			this->bttnCopy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bttnCopy->Location = System::Drawing::Point(130, 446);
			this->bttnCopy->Name = L"bttnCopy";
			this->bttnCopy->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bttnCopy->Size = System::Drawing::Size(204, 50);
			this->bttnCopy->TabIndex = 29;
			this->bttnCopy->Text = L"Êîïèðîâàòü";
			this->bttnCopy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bttnCopy->UseVisualStyleBackColor = true;
			this->bttnCopy->Click += gcnew System::EventHandler(this, &AtbashCodeForm::bttnCopy_Click);
			// 
			// AtbashCodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 504);
			this->Controls->Add(this->bttnCopy);
			this->Controls->Add(this->txtbxOriginal);
			this->Controls->Add(this->txtbxChanged);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttnEncode);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(493, 557);
			this->Name = L"AtbashCodeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Øèôð Àòáàø";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnEncode_Click(System::Object^ sender, System::EventArgs^ e) {
		coder->OriginalText = txtbxOriginal->Text;
		try {
			coder->AtbashEncode();
			txtbxChanged->Text = coder->EncryptedText;
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

};
}