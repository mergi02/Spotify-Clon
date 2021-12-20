#pragma once
//#include "Catalogo.h"
namespace SpotifyApp {

	using namespace System;
	using System::Windows::Forms::Form;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ComponentFactory::Krypton::Toolkit;

	/// <summary>
	/// Summary for popUpBox
	/// </summary>
	public ref class popUpBox : public KryptonForm
	{
	public:
		bool salvarShowing;
		popUpBox(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}popUpBox(bool show)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~popUpBox()
		{
			if (components)
			{
				delete components;
			}
		}
	public: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ nombreLista;
	public:

		//Catalogo^ ct = gcnew Catalogo;
		//static const char* listaa = ct->lista;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ aceptarBtn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ cancelBtn;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nombreLista = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->aceptarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->cancelBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->SuspendLayout();
			// 
			// nombreLista
			// 
			this->nombreLista->Location = System::Drawing::Point(28, 66);
			this->nombreLista->Name = L"nombreLista";
			this->nombreLista->Size = System::Drawing::Size(255, 22);
			this->nombreLista->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->nombreLista->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->nombreLista->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->nombreLista->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->nombreLista->TabIndex = 0;
			this->nombreLista->TextChanged += gcnew System::EventHandler(this, &popUpBox::nombreLista_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(25, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"INGRESE NOMBRE DE SU NUEVA\r\nLISTA DE REPRODUCCION";
			// 
			// aceptarBtn
			// 
			this->aceptarBtn->Location = System::Drawing::Point(329, 32);
			this->aceptarBtn->Name = L"aceptarBtn";
			this->aceptarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->OverrideDefault->Back->ColorAngle = 45;
			this->aceptarBtn->Size = System::Drawing::Size(90, 25);
			this->aceptarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StateCommon->Back->ColorAngle = 45;
			this->aceptarBtn->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::None;
			this->aceptarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->aceptarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->aceptarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StatePressed->Back->ColorAngle = 45;
			this->aceptarBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->aceptarBtn->StateTracking->Back->ColorAngle = 45;
			this->aceptarBtn->TabIndex = 2;
			this->aceptarBtn->Values->Text = L"ACEPTAR";
			this->aceptarBtn->Click += gcnew System::EventHandler(this, &popUpBox::aceptarBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Location = System::Drawing::Point(329, 63);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->OverrideDefault->Back->ColorAngle = 45;
			this->cancelBtn->Size = System::Drawing::Size(90, 25);
			this->cancelBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StateCommon->Back->ColorAngle = 45;
			this->cancelBtn->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::None;
			this->cancelBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->cancelBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancelBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StatePressed->Back->ColorAngle = 45;
			this->cancelBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->cancelBtn->StateTracking->Back->ColorAngle = 45;
			this->cancelBtn->TabIndex = 4;
			this->cancelBtn->Values->Text = L"CANCELAR";
			this->cancelBtn->Click += gcnew System::EventHandler(this, &popUpBox::cancelBtn_Click);
			// 
			// popUpBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)));
			this->ClientSize = System::Drawing::Size(456, 124);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->aceptarBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nombreLista);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"popUpBox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"popUpBox";
			this->Load += gcnew System::EventHandler(this, &popUpBox::popUpBox_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void aceptarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
		

	}

	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
	}
	private: System::Void popUpBox_Load(System::Object^ sender, System::EventArgs^ e) {

		
	}
private: System::Void nombreLista_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
