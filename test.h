﻿#pragma once

namespace SpotifyApp {

	using namespace System;
	System::Windows::Forms::Form;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ComponentFactory::Krypton::Toolkit;

	/// <summary>
	/// Summary for test
	/// </summary>
	/// 
	public ref class test : public KryptonForm
	{
	public:
		test(void)
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
		~test()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: System::Windows::Forms::Label^ label2;

	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ userTxt;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ emailTxt;


	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ passTxt;

	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ nameTxt;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ signUpBtn;
	private: System::Windows::Forms::Label^ label3;





	protected private:




	private:




	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(test::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->userTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->emailTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->passTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->nameTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->signUpBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(440, 433);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &test::pictureBox1_Click);
			// 
			// kryptonPalette1
			// 
			this->kryptonPalette1->ButtonSpecs->FormClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.Image")));
			this->kryptonPalette1->ButtonSpecs->FormMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.Image")));
			this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->FormStyles->FormMain->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateActive->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateActive->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateActive->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->FormStyles->FormMain->StateInactive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->FormStyles->FormMain->StateInactive->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color1 = System::Drawing::Color::Orchid;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color2 = System::Drawing::Color::Fuchsia;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->ColorAngle = 45;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Border->Color1 = System::Drawing::Color::DarkMagenta;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Border->Color2 = System::Drawing::Color::DarkMagenta;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Fuchsia;
			this->label2->Location = System::Drawing::Point(594, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 58);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Sign Up";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// userTxt
			// 
			this->userTxt->Location = System::Drawing::Point(572, 167);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(219, 25);
			this->userTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->userTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->userTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
			this->userTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->userTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->userTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->userTxt->TabIndex = 5;
			this->userTxt->Text = L"Username";
			this->userTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->userTxt->TextChanged += gcnew System::EventHandler(this, &test::userTxt_TextChanged);
			// 
			// emailTxt
			// 
			this->emailTxt->Location = System::Drawing::Point(572, 301);
			this->emailTxt->Name = L"emailTxt";
			this->emailTxt->Size = System::Drawing::Size(219, 25);
			this->emailTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->emailTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->emailTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
			this->emailTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->emailTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->emailTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->emailTxt->TabIndex = 6;
			this->emailTxt->Text = L"E-mail";
			this->emailTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// passTxt
			// 
			this->passTxt->Location = System::Drawing::Point(572, 259);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Palette = this->kryptonPalette1;
			this->passTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->passTxt->PasswordChar = '●';
			this->passTxt->Size = System::Drawing::Size(219, 25);
			this->passTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->passTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->passTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
			this->passTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->passTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->passTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->passTxt->TabIndex = 7;
			this->passTxt->Text = L"password";
			this->passTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->passTxt->UseSystemPasswordChar = true;
			// 
			// nameTxt
			// 
			this->nameTxt->Location = System::Drawing::Point(572, 213);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(219, 25);
			this->nameTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->nameTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->nameTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
			this->nameTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->nameTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->nameTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->nameTxt->TabIndex = 8;
			this->nameTxt->Text = L"Complete Name";
			this->nameTxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// signUpBtn
			// 
			this->signUpBtn->Location = System::Drawing::Point(589, 352);
			this->signUpBtn->Name = L"signUpBtn";
			this->signUpBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->signUpBtn->Size = System::Drawing::Size(196, 43);
			this->signUpBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->signUpBtn->StateCommon->Back->Color2 = System::Drawing::Color::Fuchsia;
			this->signUpBtn->StateCommon->Back->ColorAngle = 50;
			this->signUpBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->signUpBtn->StateCommon->Border->Rounding = 20;
			this->signUpBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->signUpBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->signUpBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signUpBtn->TabIndex = 9;
			this->signUpBtn->Values->Text = L"Sign Up";
			this->signUpBtn->Click += gcnew System::EventHandler(this, &test::signUpBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(556, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 38);
			this->label3->TabIndex = 10;
			this->label3->Text = L"play any song, anytime, free.\r\n\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->ClientSize = System::Drawing::Size(834, 461);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->signUpBtn);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->passTxt);
			this->Controls->Add(this->emailTxt);
			this->Controls->Add(this->userTxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"test";
			this->Palette = this->kryptonPalette1;
			this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->StateCommon->Header->Back->Color1 = System::Drawing::Color::Fuchsia;
			this->StateCommon->Header->Back->Color2 = System::Drawing::Color::Violet;
			this->StateCommon->Header->Back->ColorAngle = 45;
			this->StateCommon->Header->Border->Color1 = System::Drawing::Color::DarkOrange;
			this->StateCommon->Header->Border->Color2 = System::Drawing::Color::DarkMagenta;
			this->StateCommon->Header->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->StateCommon->Header->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->TransparencyKey = System::Drawing::Color::Cyan;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void userTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void signUpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userTxt->Text != "Username" && passTxt->Text != "Password" 
			&& nameTxt->Text != "Complete Name" && emailTxt->Text != "E-mail")
		{
			Application::Exit();
		}
		else {
			MessageBox::Show("Faltan requisitos.", "Error", MessageBoxButtons::OK);
		}
	}
	};

}