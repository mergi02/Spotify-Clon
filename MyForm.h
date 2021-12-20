#pragma once
#include "test.h"
#include "dashboard.h"
#include "structLista.h"
using namespace System;
System::Windows::Forms::Form;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace ComponentFactory::Krypton::Toolkit;




namespace SpotifyApp {

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public KryptonForm
	{
    
	public:
		MyForm(void)
		{
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ usernameTxt;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ passwordTxt;


	private: System::Windows::Forms::Label^ label3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ signInBtn;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ signUpBtn;

    private: System::Windows::Forms::PictureBox^ random;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;



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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->usernameTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->passwordTxt = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->signInBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->signUpBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->random = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->random))->BeginInit();
            this->SuspendLayout();
            // 
            // kryptonPalette1
            // 
            this->kryptonPalette1->ButtonSpecs->FormClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.Image")));
            this->kryptonPalette1->ButtonSpecs->FormClose->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormClose->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormClose.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.Image")));
            this->kryptonPalette1->ButtonSpecs->FormMax->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormMax->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMax.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.Image")));
            this->kryptonPalette1->ButtonSpecs->FormMin->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormMin->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormMin.ImageStates.ImageTracking")));
            this->kryptonPalette1->ButtonSpecs->FormRestore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormRestore.Image")));
            this->kryptonPalette1->ButtonSpecs->FormRestore->ImageStates->ImagePressed = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormRestore.ImageStates.ImagePressed")));
            this->kryptonPalette1->ButtonSpecs->FormRestore->ImageStates->ImageTracking = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPalette1.ButtonSpecs.FormRestore.ImageStates.ImageTracking")));
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
            this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
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
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
            this->kryptonPalette1->HeaderStyles->HeaderCustom1->StateNormal->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->ButtonEdgeInset = 10;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, -1, -1, -1);
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Local;
            this->kryptonPalette1->HeaderStyles->HeaderForm->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonPalette1->PalettePaint += gcnew System::EventHandler<ComponentFactory::Krypton::Toolkit::PaletteLayoutEventArgs^ >(this, &MyForm::kryptonPalette1_PalettePaint);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(28, 210);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 13);
            this->label1->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(42, 291);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(0, 13);
            this->label2->TabIndex = 1;
            // 
            // usernameTxt
            // 
            this->usernameTxt->Location = System::Drawing::Point(85, 195);
            this->usernameTxt->Name = L"usernameTxt";
            this->usernameTxt->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->usernameTxt->ShortcutsEnabled = false;
            this->usernameTxt->Size = System::Drawing::Size(224, 29);
            this->usernameTxt->StateActive->Back->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->usernameTxt->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->usernameTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->usernameTxt->StateCommon->Border->Rounding = 20;
            this->usernameTxt->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->usernameTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->usernameTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->usernameTxt->StateNormal->Back->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Border->Color1 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Border->Color2 = System::Drawing::Color::White;
            this->usernameTxt->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->usernameTxt->StateNormal->Content->Color1 = System::Drawing::Color::Gray;
            this->usernameTxt->TabIndex = 2;
            this->usernameTxt->Text = L"Username";
            this->usernameTxt->TextChanged += gcnew System::EventHandler(this, &MyForm::kryptonTextBox1_TextChanged);
            // 
            // passwordTxt
            // 
            this->passwordTxt->Location = System::Drawing::Point(85, 240);
            this->passwordTxt->Name = L"passwordTxt";
            this->passwordTxt->PasswordChar = '●';
            this->passwordTxt->ShortcutsEnabled = false;
            this->passwordTxt->Size = System::Drawing::Size(224, 29);
            this->passwordTxt->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->passwordTxt->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->passwordTxt->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->passwordTxt->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->passwordTxt->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->passwordTxt->StateCommon->Border->Rounding = 20;
            this->passwordTxt->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->passwordTxt->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->passwordTxt->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->passwordTxt->TabIndex = 3;
            this->passwordTxt->Text = L"Password";
            this->passwordTxt->UseSystemPasswordChar = true;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(47, 32);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 13);
            this->label3->TabIndex = 4;
            // 
            // signInBtn
            // 
            this->signInBtn->Location = System::Drawing::Point(85, 286);
            this->signInBtn->Name = L"signInBtn";
            this->signInBtn->OverrideDefault->Border->Color1 = System::Drawing::Color::White;
            this->signInBtn->OverrideDefault->Border->Color2 = System::Drawing::Color::White;
            this->signInBtn->OverrideDefault->Border->ColorAngle = 45;
            this->signInBtn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signInBtn->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signInBtn->OverrideDefault->Border->Rounding = 20;
            this->signInBtn->OverrideDefault->Border->Width = 1;
            this->signInBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->signInBtn->Size = System::Drawing::Size(112, 48);
            this->signInBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->signInBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->signInBtn->StateCommon->Back->ColorAngle = 45;
            this->signInBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->signInBtn->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
            this->signInBtn->StateCommon->Border->ColorAngle = 45;
            this->signInBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signInBtn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signInBtn->StateCommon->Border->Rounding = 20;
            this->signInBtn->StateCommon->Border->Width = 1;
            this->signInBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->signInBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->signInBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->signInBtn->StatePressed->Border->Color1 = System::Drawing::Color::White;
            this->signInBtn->StatePressed->Border->Color2 = System::Drawing::Color::White;
            this->signInBtn->StatePressed->Border->ColorAngle = 135;
            this->signInBtn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signInBtn->StatePressed->Border->Rounding = 20;
            this->signInBtn->StatePressed->Border->Width = 1;
            this->signInBtn->StateTracking->Border->Color1 = System::Drawing::Color::White;
            this->signInBtn->StateTracking->Border->Color2 = System::Drawing::Color::White;
            this->signInBtn->StateTracking->Border->ColorAngle = 45;
            this->signInBtn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signInBtn->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signInBtn->StateTracking->Border->Rounding = 20;
            this->signInBtn->StateTracking->Border->Width = 1;
            this->signInBtn->TabIndex = 5;
            this->signInBtn->Values->Text = L"Sign In";
            this->signInBtn->Click += gcnew System::EventHandler(this, &MyForm::signInBtn_Click);
            // 
            // signUpBtn
            // 
            this->signUpBtn->Location = System::Drawing::Point(203, 286);
            this->signUpBtn->Name = L"signUpBtn";
            this->signUpBtn->OverrideDefault->Border->Color1 = System::Drawing::Color::White;
            this->signUpBtn->OverrideDefault->Border->Color2 = System::Drawing::Color::White;
            this->signUpBtn->OverrideDefault->Border->ColorAngle = 45;
            this->signUpBtn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signUpBtn->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signUpBtn->OverrideDefault->Border->Rounding = 20;
            this->signUpBtn->OverrideDefault->Border->Width = 1;
            this->signUpBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
            this->signUpBtn->Size = System::Drawing::Size(106, 48);
            this->signUpBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->signUpBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->signUpBtn->StateCommon->Back->ColorAngle = 45;
            this->signUpBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->signUpBtn->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
                static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
            this->signUpBtn->StateCommon->Border->ColorAngle = 45;
            this->signUpBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signUpBtn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signUpBtn->StateCommon->Border->Rounding = 20;
            this->signUpBtn->StateCommon->Border->Width = 2;
            this->signUpBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->signUpBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->signUpBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->signUpBtn->StatePressed->Border->Color1 = System::Drawing::Color::White;
            this->signUpBtn->StatePressed->Border->Color2 = System::Drawing::Color::White;
            this->signUpBtn->StatePressed->Border->ColorAngle = 135;
            this->signUpBtn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signUpBtn->StatePressed->Border->Rounding = 20;
            this->signUpBtn->StatePressed->Border->Width = 1;
            this->signUpBtn->StateTracking->Border->Color1 = System::Drawing::Color::White;
            this->signUpBtn->StateTracking->Border->Color2 = System::Drawing::Color::White;
            this->signUpBtn->StateTracking->Border->ColorAngle = 45;
            this->signUpBtn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->signUpBtn->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->signUpBtn->StateTracking->Border->Rounding = 20;
            this->signUpBtn->StateTracking->Border->Width = 1;
            this->signUpBtn->TabIndex = 6;
            this->signUpBtn->Values->Text = L"Sign Up";
            this->signUpBtn->Click += gcnew System::EventHandler(this, &MyForm::signUpBtn_Click);
            // 
            // random
            // 
            this->random->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"random.BackgroundImage")));
            this->random->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->random->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->random->Enabled = false;
            this->random->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"random.Image")));
            this->random->Location = System::Drawing::Point(389, 56);
            this->random->Margin = System::Windows::Forms::Padding(0, 0, 20, 0);
            this->random->Name = L"random";
            this->random->Size = System::Drawing::Size(373, 328);
            this->random->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->random->TabIndex = 8;
            this->random->TabStop = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->label4->Location = System::Drawing::Point(102, 146);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(191, 32);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Made for you\r\n";
            this->label4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
                static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->label5->Location = System::Drawing::Point(113, 88);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(180, 58);
            this->label5->TabIndex = 11;
            this->label5->Text = L"Spotify";
            this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // MyForm
            // 
            this->AccessibleRole = System::Windows::Forms::AccessibleRole::PageTabList;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(834, 466);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->random);
            this->Controls->Add(this->signUpBtn);
            this->Controls->Add(this->signInBtn);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->passwordTxt);
            this->Controls->Add(this->usernameTxt);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->ForeColor = System::Drawing::Color::White;
            this->Name = L"MyForm";
            this->Palette = this->kryptonPalette1;
            this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->ShowIcon = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->StateCommon->Border->Rounding = 20;
            this->StateCommon->Header->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->StateCommon->Header->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->StateCommon->Header->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->StateCommon->Header->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->StateCommon->Header->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->StateCommon->Header->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->StateCommon->Header->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->StateCommon->Header->Content->ShortText->ColorAngle = 45;
            this->StateCommon->Header->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->TransparencyKey = System::Drawing::Color::Cyan;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->random))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void kryptonTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
   
}
private: System::Void kryptonPalette1_PalettePaint(System::Object^ sender, ComponentFactory::Krypton::Toolkit::PaletteLayoutEventArgs^ e) {
}
private: System::Void signUpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
//    this->Hide();
//    test^ sgn= gcnew test;
//    sgn->Show();
//  
    test^ sgn = gcnew test;
    sgn->Tag = this;
    sgn->Show(this);
    Hide();

}
          public:
              static String^ users;


    private: System::Void signInBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {

        bool showWindownForm = false;


        System::String^ text = usernameTxt->Text;
        std::string user = msclr::interop::marshal_as<std::string>(text);


        ifstream archivo_SU("spotifyUsers.bin", ios::in | ios::binary);
        spotUs ss;

        if (!archivo_SU)
        {
            return;
        }
        bool error = false;
        String^ usuario;
        String^ pass;

 
        archivo_SU.seekg(0, ios::beg);
        archivo_SU.read(reinterpret_cast<char*> (&ss), sizeof(spotUs));

        while (!archivo_SU.eof())
        {

             usuario = gcnew String(ss.usuario);
             pass = gcnew String(ss.contra);

            if (usuario == usernameTxt->Text  && pass == passwordTxt->Text)
            {
                users = gcnew String(ss.usuario);
                this->Hide();
                dashboard^ sgn = gcnew dashboard(usernameTxt->Text);
                sgn->Show();
            }
            else {

                MessageBox::Show("Datos incorrectos.", "Error!", MessageBoxButtons::OK);
            }

            archivo_SU.read(reinterpret_cast<char*> (&ss), sizeof(spotUs));

        }
        archivo_SU.close();

        


        /* }
         else if (usernameTxt->Text == _user && passwordTxt->Text == _pass)
         {
             MessageBox::Show("Ya existe!", "Error!", MessageBoxButtons::OK);
         }
         else {
             MessageBox::Show("Datos incorrectos.", "Error!", MessageBoxButtons::OK);
         }*/

    }
}

#pragma endregion
	/*private: System::Void kryptonPalette2_PalettePaint(System::Object^ sender, ComponentFactory::Krypton::Toolkit::PaletteLayoutEventArgs^ e) {
	}*/
	;
}
