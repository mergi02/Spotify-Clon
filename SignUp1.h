#pragma once

using namespace System;
System::Windows::Forms::Form;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace ComponentFactory::Krypton::Toolkit;

namespace SpotifyApp {

	/// <summary>
	/// Summary for signUp
	/// </summary>
	public ref class signUp : public KryptonForm
	{
	public:
		signUp(void)
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
		~signUp()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ usernameTxt;


	private: System::Windows::Forms::Label^ label3;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;


    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ comNameTxt;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ emailTxt;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ passTxt;
    private: System::Windows::Forms::PictureBox^ fondoSignUp;

    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;












    protected:


	protected:
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
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signUp::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->usernameTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
            this->comNameTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->emailTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->passTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->fondoSignUp = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fondoSignUp))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(552, 245);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 13);
            this->label1->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(555, 226);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 13);
            this->label2->TabIndex = 1;
            // 
            // usernameTxt
            // 
            this->usernameTxt->Location = System::Drawing::Point(530, 93);
            this->usernameTxt->Name = L"usernameTxt";
            this->usernameTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->usernameTxt->ShortcutsEnabled = false;
            this->usernameTxt->Size = System::Drawing::Size(258, 18);
            this->usernameTxt->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->usernameTxt->StateActive->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->usernameTxt->StateActive->Content->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->usernameTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->usernameTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->usernameTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->usernameTxt->StateCommon->Border->Rounding = 20;
            this->usernameTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->usernameTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->usernameTxt->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->usernameTxt->StateNormal->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->usernameTxt->StateNormal->Content->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->usernameTxt->TabIndex = 2;
            this->usernameTxt->Text = L"Username";
            this->usernameTxt->TextChanged += gcnew System::EventHandler(this, &signUp::kryptonTextBox1_TextChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(579, 101);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 13);
            this->label3->TabIndex = 4;
            // 
            // kryptonButton1
            // 
            this->kryptonButton1->Location = System::Drawing::Point(582, 307);
            this->kryptonButton1->Name = L"kryptonButton1";
            this->kryptonButton1->OverrideDefault->Border->Color1 = System::Drawing::Color::White;
            this->kryptonButton1->OverrideDefault->Border->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton1->OverrideDefault->Border->Width = 1;
            this->kryptonButton1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->kryptonButton1->Size = System::Drawing::Size(131, 43);
            this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
            this->kryptonButton1->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
            this->kryptonButton1->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::ExpertSquareHighlight2;
            this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateCommon->Border->Rounding = 20;
            this->kryptonButton1->StateCommon->Border->Width = 1;
            this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
            this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
            this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->kryptonButton1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
            this->kryptonButton1->StatePressed->Back->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
            this->kryptonButton1->StatePressed->Border->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StatePressed->Border->Rounding = 20;
            this->kryptonButton1->StatePressed->Border->Width = 1;
            this->kryptonButton1->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
            this->kryptonButton1->StatePressed->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(124)));
            this->kryptonButton1->StateTracking->Border->Color1 = System::Drawing::Color::White;
            this->kryptonButton1->StateTracking->Border->Color2 = System::Drawing::Color::White;
            this->kryptonButton1->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateTracking->Border->Rounding = 20;
            this->kryptonButton1->StateTracking->Border->Width = 1;
            this->kryptonButton1->TabIndex = 5;
            this->kryptonButton1->Values->Text = L"Sign In";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(235)));
            this->label4->Location = System::Drawing::Point(629, 353);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(202, 128);
            this->label4->TabIndex = 3;
            this->label4->Text = L"free,\r\nanytime,\r\nplay any song\r\n\r\n";
            this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
            this->label4->Click += gcnew System::EventHandler(this, &signUp::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(235)));
            this->label5->Location = System::Drawing::Point(557, 9);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(199, 58);
            this->label5->TabIndex = 11;
            this->label5->Text = L"Sign Up";
            this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // kryptonPalette1
            // 
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateNormal->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StatePressed->Border->Width = 0;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Back->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::False;
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->ButtonStyles->ButtonForm->StateTracking->Border->Width = 0;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
                static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(196)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
                static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(196)));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Rounding = 12;
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->ButtonEdgeInset = 10;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, -1, -1, -1);
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            // 
            // comNameTxt
            // 
            this->comNameTxt->Location = System::Drawing::Point(530, 158);
            this->comNameTxt->Name = L"comNameTxt";
            this->comNameTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->comNameTxt->ShortcutsEnabled = false;
            this->comNameTxt->Size = System::Drawing::Size(258, 18);
            this->comNameTxt->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->comNameTxt->StateActive->Border->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateActive->Border->Color2 = System::Drawing::Color::White;
            this->comNameTxt->StateActive->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->comNameTxt->StateActive->Content->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateActive->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comNameTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->comNameTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->comNameTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->comNameTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->comNameTxt->StateCommon->Border->Rounding = 20;
            this->comNameTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comNameTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->comNameTxt->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->comNameTxt->StateNormal->Border->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateNormal->Border->Color2 = System::Drawing::Color::White;
            this->comNameTxt->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->comNameTxt->StateNormal->Content->Color1 = System::Drawing::Color::White;
            this->comNameTxt->StateNormal->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comNameTxt->TabIndex = 12;
            this->comNameTxt->Text = L"Complete Name";
            this->comNameTxt->TextChanged += gcnew System::EventHandler(this, &signUp::kryptonTextBox2_TextChanged);
            // 
            // emailTxt
            // 
            this->emailTxt->Location = System::Drawing::Point(530, 275);
            this->emailTxt->Name = L"emailTxt";
            this->emailTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->emailTxt->ShortcutsEnabled = false;
            this->emailTxt->Size = System::Drawing::Size(258, 18);
            this->emailTxt->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->emailTxt->StateActive->Border->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateActive->Border->Color2 = System::Drawing::Color::White;
            this->emailTxt->StateActive->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->emailTxt->StateActive->Content->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateActive->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->emailTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->emailTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->emailTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->emailTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->emailTxt->StateCommon->Border->Rounding = 20;
            this->emailTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->emailTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->emailTxt->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->emailTxt->StateNormal->Border->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateNormal->Border->Color2 = System::Drawing::Color::White;
            this->emailTxt->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->emailTxt->StateNormal->Content->Color1 = System::Drawing::Color::White;
            this->emailTxt->StateNormal->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->emailTxt->TabIndex = 13;
            this->emailTxt->Text = L"E-mail";
            // 
            // passTxt
            // 
            this->passTxt->Location = System::Drawing::Point(530, 221);
            this->passTxt->Name = L"passTxt";
            this->passTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->passTxt->ShortcutsEnabled = false;
            this->passTxt->Size = System::Drawing::Size(258, 18);
            this->passTxt->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->passTxt->StateActive->Border->Color1 = System::Drawing::Color::White;
            this->passTxt->StateActive->Border->Color2 = System::Drawing::Color::White;
            this->passTxt->StateActive->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->passTxt->StateActive->Content->Color1 = System::Drawing::Color::White;
            this->passTxt->StateActive->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->passTxt->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->passTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->passTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->passTxt->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->passTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->passTxt->StateCommon->Border->Rounding = 20;
            this->passTxt->StateCommon->Content->Color1 = System::Drawing::Color::White;
            this->passTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->passTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->passTxt->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->passTxt->StateNormal->Border->Color1 = System::Drawing::Color::White;
            this->passTxt->StateNormal->Border->Color2 = System::Drawing::Color::White;
            this->passTxt->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->passTxt->StateNormal->Content->Color1 = System::Drawing::Color::White;
            this->passTxt->StateNormal->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->passTxt->TabIndex = 14;
            this->passTxt->Text = L"Password";
            // 
            // fondoSignUp
             
            this->fondoSignUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fondoSignUp.Image")));
            this->fondoSignUp->Location = System::Drawing::Point(-2, -27);
            this->fondoSignUp->Name = L"fondoSignUp";
            this->fondoSignUp->Size = System::Drawing::Size(475, 508);
            this->fondoSignUp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->fondoSignUp->TabIndex = 25;
            this->fondoSignUp->TabStop = false;
             
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(-2, 190);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(279, 160);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 26;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(398, 126);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(100, 50);
            this->pictureBox2->TabIndex = 27;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(12, 17);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(100, 50);
            this->pictureBox4->TabIndex = 28;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(411, 353);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(100, 50);
            this->pictureBox5->TabIndex = 29;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(54, 390);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(100, 50);
            this->pictureBox6->TabIndex = 30;
            this->pictureBox6->TabStop = false;
            // 
            // signUp
            // 
            this->AccessibleRole = System::Windows::Forms::AccessibleRole::PageTabList;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(834, 466);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->fondoSignUp);
            this->Controls->Add(this->passTxt);
            this->Controls->Add(this->emailTxt);
            this->Controls->Add(this->comNameTxt);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->kryptonButton1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->usernameTxt);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->ForeColor = System::Drawing::Color::White;
            this->Name = L"signUp";
            this->Palette = this->kryptonPalette1;
            this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->ShowIcon = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->StateCommon->Border->Rounding = 20;
            this->StateCommon->Header->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
            this->StateCommon->Header->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Header->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Header->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
            this->StateCommon->Header->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->StateCommon->Header->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->StateCommon->Header->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->StateCommon->Header->Content->ShortText->ColorAngle = 45;
            this->StateCommon->Header->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->TransparencyKey = System::Drawing::Color::Cyan;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fondoSignUp))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void kryptonTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void kryptonTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
}

#pragma endregion
	/*private: System::Void kryptonPalette2_PalettePaint(System::Object^ sender, ComponentFactory::Krypton::Toolkit::PaletteLayoutEventArgs^ e) {
	}*/
	;
}