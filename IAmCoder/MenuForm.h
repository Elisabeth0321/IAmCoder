#pragma once

#include "FourSquareCodeForm.h"
#include "RailCodeForm.h"
#include "VinegereCodeForm.h"

#include "CaesarCodeForm.h"
#include "AtbashCodeForm.h"
#include "VernamCodeForm.h"

#include "AboutForm.h"

namespace IAmCoder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ mnItemHelp;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Label^ lbl4squares;
	private: System::Windows::Forms::Button^ bttnCaeser;
	private: System::Windows::Forms::LinkLabel^ lnklbl4squares;
	private: System::Windows::Forms::Button^ bttnVinegere;
	private: System::Windows::Forms::Button^ bttnRailFence;
	private: System::Windows::Forms::Button^ bttnVernam;
	private: System::Windows::Forms::Button^ bttnAtbash;
	private: System::Windows::Forms::Button^ bttn4square;
	private: System::Windows::Forms::LinkLabel^ lnklblVinegere;
	private: System::Windows::Forms::LinkLabel^ lnklblRailFence;
	private: System::Windows::Forms::LinkLabel^ lnklblVernam;
	private: System::Windows::Forms::LinkLabel^ lnklblAtbash;
	private: System::Windows::Forms::LinkLabel^ lnklblCaesar;
	private: System::Windows::Forms::Label^ lblRailFence;
	private: System::Windows::Forms::Label^ lblVinegere;
	private: System::Windows::Forms::Label^ lblVernam;
	private: System::Windows::Forms::Label^ lblAtbash;
	private: System::Windows::Forms::Label^ lblCaesar;
	private: System::Windows::Forms::ToolStripMenuItem^ оРазработчикеToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->mnItemHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->lblVinegere = (gcnew System::Windows::Forms::Label());
			this->lnklblVinegere = (gcnew System::Windows::Forms::LinkLabel());
			this->bttnVinegere = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->lblRailFence = (gcnew System::Windows::Forms::Label());
			this->lnklblRailFence = (gcnew System::Windows::Forms::LinkLabel());
			this->bttnRailFence = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->bttn4square = (gcnew System::Windows::Forms::Button());
			this->lbl4squares = (gcnew System::Windows::Forms::Label());
			this->lnklbl4squares = (gcnew System::Windows::Forms::LinkLabel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->lblVernam = (gcnew System::Windows::Forms::Label());
			this->lnklblVernam = (gcnew System::Windows::Forms::LinkLabel());
			this->bttnVernam = (gcnew System::Windows::Forms::Button());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->lblAtbash = (gcnew System::Windows::Forms::Label());
			this->lnklblAtbash = (gcnew System::Windows::Forms::LinkLabel());
			this->bttnAtbash = (gcnew System::Windows::Forms::Button());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->lblCaesar = (gcnew System::Windows::Forms::Label());
			this->lnklblCaesar = (gcnew System::Windows::Forms::LinkLabel());
			this->bttnCaeser = (gcnew System::Windows::Forms::Button());
			this->menuStrip2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel31->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mnItemHelp, this->оРазработчикеToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1282, 28);
			this->menuStrip2->TabIndex = 1;
			// 
			// mnItemHelp
			// 
			this->mnItemHelp->Name = L"mnItemHelp";
			this->mnItemHelp->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->mnItemHelp->Size = System::Drawing::Size(81, 24);
			this->mnItemHelp->Text = L"Справка";
			this->mnItemHelp->Click += gcnew System::EventHandler(this, &MenuForm::mnItemHelp_Click);
			// 
			// оРазработчикеToolStripMenuItem
			// 
			this->оРазработчикеToolStripMenuItem->Name = L"оРазработчикеToolStripMenuItem";
			this->оРазработчикеToolStripMenuItem->Size = System::Drawing::Size(135, 24);
			this->оРазработчикеToolStripMenuItem->Text = L"О разработчике";
			this->оРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::оРазработчикеToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1282, 313);
			this->panel1->TabIndex = 2;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Controls->Add(this->lblVinegere);
			this->panel13->Controls->Add(this->lnklblVinegere);
			this->panel13->Controls->Add(this->bttnVinegere);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel13->Location = System::Drawing::Point(862, 0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(420, 313);
			this->panel13->TabIndex = 5;
			// 
			// lblVinegere
			// 
			this->lblVinegere->AutoSize = true;
			this->lblVinegere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblVinegere->Location = System::Drawing::Point(12, 87);
			this->lblVinegere->Name = L"lblVinegere";
			this->lblVinegere->Size = System::Drawing::Size(347, 100);
			this->lblVinegere->TabIndex = 5;
			this->lblVinegere->Text = L"полиалфавитный шифр, в котором\r\nкаждый символ текста шифруется\r\nс помощью сдвига,"
				L" определенного \r\nключевым словом.";
			// 
			// lnklblVinegere
			// 
			this->lnklblVinegere->AutoSize = true;
			this->lnklblVinegere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklblVinegere->Location = System::Drawing::Point(120, 278);
			this->lnklblVinegere->Name = L"lnklblVinegere";
			this->lnklblVinegere->Size = System::Drawing::Size(154, 25);
			this->lnklblVinegere->TabIndex = 5;
			this->lnklblVinegere->TabStop = true;
			this->lnklblVinegere->Text = L"Узнать больше";
			this->lnklblVinegere->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklblVinegere_LinkClicked);
			// 
			// bttnVinegere
			// 
			this->bttnVinegere->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttnVinegere->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttnVinegere->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttnVinegere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnVinegere->Location = System::Drawing::Point(49, 20);
			this->bttnVinegere->Name = L"bttnVinegere";
			this->bttnVinegere->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bttnVinegere->Size = System::Drawing::Size(310, 51);
			this->bttnVinegere->TabIndex = 4;
			this->bttnVinegere->Text = L"Шифр Винежера";
			this->bttnVinegere->UseVisualStyleBackColor = false;
			this->bttnVinegere->Click += gcnew System::EventHandler(this, &MenuForm::bttnVinegere_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->lblRailFence);
			this->panel12->Controls->Add(this->lnklblRailFence);
			this->panel12->Controls->Add(this->bttnRailFence);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel12->Location = System::Drawing::Point(420, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(862, 313);
			this->panel12->TabIndex = 5;
			// 
			// lblRailFence
			// 
			this->lblRailFence->AutoSize = true;
			this->lblRailFence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRailFence->Location = System::Drawing::Point(27, 115);
			this->lblRailFence->Name = L"lblRailFence";
			this->lblRailFence->Size = System::Drawing::Size(374, 150);
			this->lblRailFence->TabIndex = 4;
			this->lblRailFence->Text = L"простой перестановочный шифр,\r\nв котором текст записывается по\r\nдиагонали на неск"
				L"олько \"рельсов\",\r\nа затем считывается построчно.\r\nОн используется для перемешива"
				L"ния \r\nсимволов исходного текста.";
			// 
			// lnklblRailFence
			// 
			this->lnklblRailFence->AutoSize = true;
			this->lnklblRailFence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklblRailFence->Location = System::Drawing::Point(115, 278);
			this->lnklblRailFence->Name = L"lnklblRailFence";
			this->lnklblRailFence->Size = System::Drawing::Size(154, 25);
			this->lnklblRailFence->TabIndex = 4;
			this->lnklblRailFence->TabStop = true;
			this->lnklblRailFence->Text = L"Узнать больше";
			this->lnklblRailFence->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklblRailFence_LinkClicked);
			// 
			// bttnRailFence
			// 
			this->bttnRailFence->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttnRailFence->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttnRailFence->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttnRailFence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnRailFence->Location = System::Drawing::Point(32, 20);
			this->bttnRailFence->Name = L"bttnRailFence";
			this->bttnRailFence->Size = System::Drawing::Size(349, 92);
			this->bttnRailFence->TabIndex = 3;
			this->bttnRailFence->Text = L"Шифр рельсового\r\nограничения";
			this->bttnRailFence->UseVisualStyleBackColor = false;
			this->bttnRailFence->Click += gcnew System::EventHandler(this, &MenuForm::bttnRailFence_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->bttn4square);
			this->panel11->Controls->Add(this->lbl4squares);
			this->panel11->Controls->Add(this->lnklbl4squares);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(420, 313);
			this->panel11->TabIndex = 4;
			// 
			// bttn4square
			// 
			this->bttn4square->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttn4square->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttn4square->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttn4square->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttn4square->Location = System::Drawing::Point(22, 20);
			this->bttn4square->Name = L"bttn4square";
			this->bttn4square->Size = System::Drawing::Size(359, 51);
			this->bttn4square->TabIndex = 3;
			this->bttn4square->Text = L"Шифр 4х квадратов";
			this->bttn4square->UseVisualStyleBackColor = false;
			this->bttn4square->Click += gcnew System::EventHandler(this, &MenuForm::bttn4square_Click);
			// 
			// lbl4squares
			// 
			this->lbl4squares->AutoSize = true;
			this->lbl4squares->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl4squares->Location = System::Drawing::Point(10, 87);
			this->lbl4squares->Name = L"lbl4squares";
			this->lbl4squares->Size = System::Drawing::Size(396, 150);
			this->lbl4squares->TabIndex = 2;
			this->lbl4squares->Text = resources->GetString(L"lbl4squares.Text");
			// 
			// lnklbl4squares
			// 
			this->lnklbl4squares->AutoSize = true;
			this->lnklbl4squares->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklbl4squares->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;
			this->lnklbl4squares->Location = System::Drawing::Point(114, 276);
			this->lnklbl4squares->Name = L"lnklbl4squares";
			this->lnklbl4squares->Size = System::Drawing::Size(154, 25);
			this->lnklbl4squares->TabIndex = 0;
			this->lnklbl4squares->TabStop = true;
			this->lnklbl4squares->Text = L"Узнать больше";
			this->lnklbl4squares->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklbl4squares_LinkClicked);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(387, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(400, 300);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel33);
			this->panel3->Controls->Add(this->panel32);
			this->panel3->Controls->Add(this->panel31);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 345);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1282, 312);
			this->panel3->TabIndex = 6;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel33->Controls->Add(this->lblVernam);
			this->panel33->Controls->Add(this->lnklblVernam);
			this->panel33->Controls->Add(this->bttnVernam);
			this->panel33->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel33->Location = System::Drawing::Point(862, 0);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(420, 312);
			this->panel33->TabIndex = 5;
			// 
			// lblVernam
			// 
			this->lblVernam->AutoSize = true;
			this->lblVernam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblVernam->Location = System::Drawing::Point(3, 82);
			this->lblVernam->Name = L"lblVernam";
			this->lblVernam->Size = System::Drawing::Size(374, 175);
			this->lblVernam->TabIndex = 8;
			this->lblVernam->Text = resources->GetString(L"lblVernam.Text");
			// 
			// lnklblVernam
			// 
			this->lnklblVernam->AutoSize = true;
			this->lnklblVernam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklblVernam->Location = System::Drawing::Point(120, 267);
			this->lnklblVernam->Name = L"lnklblVernam";
			this->lnklblVernam->Size = System::Drawing::Size(154, 25);
			this->lnklblVernam->TabIndex = 4;
			this->lnklblVernam->TabStop = true;
			this->lnklblVernam->Text = L"Узнать больше";
			this->lnklblVernam->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklblVernam_LinkClicked);
			// 
			// bttnVernam
			// 
			this->bttnVernam->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttnVernam->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttnVernam->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttnVernam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnVernam->Location = System::Drawing::Point(49, 17);
			this->bttnVernam->Name = L"bttnVernam";
			this->bttnVernam->Size = System::Drawing::Size(297, 51);
			this->bttnVernam->TabIndex = 3;
			this->bttnVernam->Text = L"Шифр Вернама";
			this->bttnVernam->UseVisualStyleBackColor = false;
			this->bttnVernam->Click += gcnew System::EventHandler(this, &MenuForm::bttnVernam_Click);
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel32->Controls->Add(this->lblAtbash);
			this->panel32->Controls->Add(this->lnklblAtbash);
			this->panel32->Controls->Add(this->bttnAtbash);
			this->panel32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel32->Location = System::Drawing::Point(420, 0);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(862, 312);
			this->panel32->TabIndex = 5;
			// 
			// lblAtbash
			// 
			this->lblAtbash->AutoSize = true;
			this->lblAtbash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAtbash->Location = System::Drawing::Point(7, 82);
			this->lblAtbash->Name = L"lblAtbash";
			this->lblAtbash->Size = System::Drawing::Size(389, 150);
			this->lblAtbash->TabIndex = 7;
			this->lblAtbash->Text = resources->GetString(L"lblAtbash.Text");
			// 
			// lnklblAtbash
			// 
			this->lnklblAtbash->AutoSize = true;
			this->lnklblAtbash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklblAtbash->Location = System::Drawing::Point(115, 267);
			this->lnklblAtbash->Name = L"lnklblAtbash";
			this->lnklblAtbash->Size = System::Drawing::Size(154, 25);
			this->lnklblAtbash->TabIndex = 3;
			this->lnklblAtbash->TabStop = true;
			this->lnklblAtbash->Text = L"Узнать больше";
			this->lnklblAtbash->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklblAtbash_LinkClicked);
			// 
			// bttnAtbash
			// 
			this->bttnAtbash->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttnAtbash->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttnAtbash->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttnAtbash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnAtbash->Location = System::Drawing::Point(61, 17);
			this->bttnAtbash->Name = L"bttnAtbash";
			this->bttnAtbash->Size = System::Drawing::Size(272, 51);
			this->bttnAtbash->TabIndex = 2;
			this->bttnAtbash->Text = L"Шифр Атбаш";
			this->bttnAtbash->UseVisualStyleBackColor = false;
			this->bttnAtbash->Click += gcnew System::EventHandler(this, &MenuForm::bttnAtbash_Click);
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel31->Controls->Add(this->lblCaesar);
			this->panel31->Controls->Add(this->lnklblCaesar);
			this->panel31->Controls->Add(this->bttnCaeser);
			this->panel31->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel31->Location = System::Drawing::Point(0, 0);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(420, 312);
			this->panel31->TabIndex = 4;
			// 
			// lblCaesar
			// 
			this->lblCaesar->AutoSize = true;
			this->lblCaesar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCaesar->Location = System::Drawing::Point(12, 82);
			this->lblCaesar->Name = L"lblCaesar";
			this->lblCaesar->Size = System::Drawing::Size(394, 150);
			this->lblCaesar->TabIndex = 6;
			this->lblCaesar->Text = resources->GetString(L"lblCaesar.Text");
			// 
			// lnklblCaesar
			// 
			this->lnklblCaesar->AutoSize = true;
			this->lnklblCaesar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lnklblCaesar->Location = System::Drawing::Point(114, 267);
			this->lnklblCaesar->Name = L"lnklblCaesar";
			this->lnklblCaesar->Size = System::Drawing::Size(154, 25);
			this->lnklblCaesar->TabIndex = 2;
			this->lnklblCaesar->TabStop = true;
			this->lnklblCaesar->Text = L"Узнать больше";
			this->lnklblCaesar->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MenuForm::lnklblCaesar_LinkClicked);
			// 
			// bttnCaeser
			// 
			this->bttnCaeser->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->bttnCaeser->Cursor = System::Windows::Forms::Cursors::Default;
			this->bttnCaeser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bttnCaeser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bttnCaeser->Location = System::Drawing::Point(46, 17);
			this->bttnCaeser->Name = L"bttnCaeser";
			this->bttnCaeser->Size = System::Drawing::Size(272, 51);
			this->bttnCaeser->TabIndex = 1;
			this->bttnCaeser->Text = L"Шифр Цезаря";
			this->bttnCaeser->UseVisualStyleBackColor = false;
			this->bttnCaeser->Click += gcnew System::EventHandler(this, &MenuForm::bttnCaeser_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1282, 657);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1300, 704);
			this->MinimumSize = System::Drawing::Size(1300, 704);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Шифратор";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MenuForm::MenuForm_FormClosing);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		RailCodeForm^ formRailCoder = gcnew RailCodeForm();

private: System::Void bttn4square_Click(System::Object^ sender, System::EventArgs^ e) {
	FourSquareCodeForm^ form4square = gcnew FourSquareCodeForm();
	form4square->ShowDialog();
}

private: System::Void bttnRailFence_Click(System::Object^ sender, System::EventArgs^ e) {
	RailCodeForm^ formRail = gcnew RailCodeForm();
	formRail->ShowDialog();
}

private: System::Void bttnVinegere_Click(System::Object^ sender, System::EventArgs^ e) {
	VinegereCodeForm^ formVinegere = gcnew VinegereCodeForm();
	formVinegere->ShowDialog();
}

private: System::Void bttnCaeser_Click(System::Object^ sender, System::EventArgs^ e) {
	CaesarCodeForm^ formCaesar = gcnew CaesarCodeForm();
	formCaesar->ShowDialog();
}

private: System::Void bttnAtbash_Click(System::Object^ sender, System::EventArgs^ e) {
	AtbashCodeForm^ formAtbash = gcnew AtbashCodeForm();
	formAtbash->ShowDialog();
}

private: System::Void bttnVernam_Click(System::Object^ sender, System::EventArgs^ e) {
	VernamCodeForm^ formVernam = gcnew VernamCodeForm();
	formVernam->ShowDialog();
}


private: System::Void startLink(System::Object^ sender, String^ link) {
	try
	{
		LinkLabel^ linklabel = safe_cast<LinkLabel^>(sender);
		linklabel->LinkVisited = true;
		System::Diagnostics::Process::Start(link);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(this, 
			"Не получается открыть ссылку :(", 
			"Ошибка", 
			MessageBoxButtons::OK, 
			MessageBoxIcon::Error);
	}
}

private: System::Void lnklbl4squares_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D1%87%D0%B5%D1%82%D1%8B%D1%80%D1%91%D1%85_%D0%BA%D0%B2%D0%B0%D0%B4%D1%80%D0%B0%D1%82%D0%BE%D0%B2");
}

private: System::Void lnklblRailFence_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://dencode.com/ru/cipher/rail-fence");
}

private: System::Void lnklblVinegere_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D0%92%D0%B8%D0%B6%D0%B5%D0%BD%D0%B5%D1%80%D0%B0");
}

private: System::Void lnklblCaesar_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D0%A6%D0%B5%D0%B7%D0%B0%D1%80%D1%8F");
}

private: System::Void lnklblAtbash_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://ru.wikipedia.org/wiki/%D0%90%D1%82%D0%B1%D0%B0%D1%88");
}

private: System::Void lnklblVernam_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	startLink(sender, "https://ru.wikipedia.org/wiki/%D0%A8%D0%B8%D1%84%D1%80_%D0%92%D0%B5%D1%80%D0%BD%D0%B0%D0%BC%D0%B0");
}

private: System::Void mnItemHelp_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		System::Diagnostics::Process::Start("https://docs.google.com/document/d/10wAV8JoF1a61S06Ljn7nKmItwfSLEmqRnTZ9YlS4Y9s/edit?hl=ru&tab=t.0");
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(this, 
			"Не получается открыть справку :(",
			"Ошибка", 
			MessageBoxButtons::OK, 
			MessageBoxIcon::Error);
	}
}

private: System::Void оРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutForm^ formAboutMe = gcnew AboutForm();
	formAboutMe->ShowDialog();
}

private: System::Void MenuForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Вы действительно хотите выйти?",           
		"Подтверждение выхода",                    
		MessageBoxButtons::YesNo,                  
		MessageBoxIcon::Question);                 

	if (result == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true;
	}
}

};
}