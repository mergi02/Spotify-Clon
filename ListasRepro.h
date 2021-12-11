#pragma once
#include "popUpBox.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include "listaGet.h"
//#include  "Catalogo.h"
#include "listaGetValues.h"
#include  <msclr/marshal_cppstd.h>
using std::vector;  using std::string;
using namespace msclr::interop;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using std::ofstream;
using std::ifstream;
using std::ios;
using std::cin;
namespace SpotifyApp {

	/// <summary>
	/// Summary for ListasRepro
	/// </summary>
	public ref class ListasRepro : public System::Windows::Forms::UserControl
	{
	public:

    public:
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ selecLbl;




    

    private: System::Windows::Forms::ContextMenuStrip^ strip;
    public: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ nombreLista;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ ingrese;


    public: static ComponentFactory::Krypton::Toolkit::KryptonComboBox^ listSelectBtn;





    private: ComponentFactory::Krypton::Toolkit::KryptonContextMenu^ kryptonContextMenu1;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ aceptarBtn;
    private: ComponentFactory::Krypton::Toolkit::KryptonDataGridView^ grid1;
    private: System::Windows::Forms::TableLayoutPanel^ tablePanel;

    private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artist;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Song;













    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ cancelBtn;



    //private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
    //private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artists;
    //private: System::Windows::Forms::DataGridViewTextBoxColumn^ SongName;



	public:
		ListasRepro(void)
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
		~ListasRepro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ newListBtn;
	private: System::Windows::Forms::Panel^ panel1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ importarBtn;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ exportarBtn;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ eliminarBtn;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ salvarBtn;




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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ListasRepro::typeid));
            this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
            this->kryptonLabel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->newListBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->cancelBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->aceptarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->nombreLista = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->ingrese = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->importarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->exportarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->eliminarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->salvarBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->selecLbl = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->listSelectBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonComboBox());
            this->strip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->kryptonContextMenu1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonContextMenu());
            this->grid1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDataGridView());
            this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Artist = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Song = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listSelectBtn))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->BeginInit();
            this->tablePanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // kryptonLabel1
            // 
            this->kryptonLabel1->Location = System::Drawing::Point(17, 49);
            this->kryptonLabel1->Name = L"kryptonLabel1";
            this->kryptonLabel1->Size = System::Drawing::Size(197, 61);
            this->kryptonLabel1->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonLabel1->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonLabel1->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17, System::Drawing::FontStyle::Bold));
            this->kryptonLabel1->TabIndex = 1;
            this->kryptonLabel1->Values->Text = L"     MIS LISTAS DE\r\nREPRODUCCION\r\n";
            // 
            // newListBtn
            // 
            this->newListBtn->Location = System::Drawing::Point(0, 138);
            this->newListBtn->Name = L"newListBtn";
            this->newListBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->OverrideDefault->Back->ColorAngle = 45;
            this->newListBtn->Palette = this->kryptonPalette1;
            this->newListBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->newListBtn->Size = System::Drawing::Size(234, 49);
            this->newListBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->StateCommon->Back->ColorAngle = 45;
            this->newListBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->newListBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->newListBtn->StateCommon->Border->Rounding = 0;
            this->newListBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->newListBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->newListBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->newListBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->newListBtn->StatePressed->Back->ColorAngle = 45;
            this->newListBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->newListBtn->StateTracking->Back->ColorAngle = 45;
            this->newListBtn->TabIndex = 2;
            this->newListBtn->Values->Text = L"Crear Nueva Lista";
            this->newListBtn->Click += gcnew System::EventHandler(this, &ListasRepro::newListBtn_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
                static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->panel1->Controls->Add(this->cancelBtn);
            this->panel1->Controls->Add(this->aceptarBtn);
            this->panel1->Controls->Add(this->nombreLista);
            this->panel1->Controls->Add(this->ingrese);
            this->panel1->Controls->Add(this->importarBtn);
            this->panel1->Controls->Add(this->exportarBtn);
            this->panel1->Controls->Add(this->eliminarBtn);
            this->panel1->Controls->Add(this->salvarBtn);
            this->panel1->Controls->Add(this->kryptonLabel1);
            this->panel1->Controls->Add(this->newListBtn);
            this->panel1->Location = System::Drawing::Point(528, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(234, 624);
            this->panel1->TabIndex = 3;
            // 
            // cancelBtn
            // 
            this->cancelBtn->Location = System::Drawing::Point(22, 485);
            this->cancelBtn->Name = L"cancelBtn";
            this->cancelBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->Size = System::Drawing::Size(90, 25);
            this->cancelBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StateCommon->Back->ColorAngle = 45;
            this->cancelBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->cancelBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->cancelBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->cancelBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StatePressed->Back->ColorAngle = 45;
            this->cancelBtn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->cancelBtn->StatePressed->Border->ColorAngle = 45;
            this->cancelBtn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->cancelBtn->TabIndex = 13;
            this->cancelBtn->Values->Text = L"CANCELAR";
            this->cancelBtn->Visible = false;
            // 
            // aceptarBtn
            // 
            this->aceptarBtn->Location = System::Drawing::Point(118, 485);
            this->aceptarBtn->Name = L"aceptarBtn";
            this->aceptarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->Size = System::Drawing::Size(90, 25);
            this->aceptarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StateCommon->Back->ColorAngle = 45;
            this->aceptarBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->aceptarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->aceptarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->aceptarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StatePressed->Back->ColorAngle = 45;
            this->aceptarBtn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->aceptarBtn->StatePressed->Border->ColorAngle = 45;
            this->aceptarBtn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->aceptarBtn->TabIndex = 11;
            this->aceptarBtn->Values->Text = L"ACEPTAR";
            this->aceptarBtn->Visible = false;
            this->aceptarBtn->Click += gcnew System::EventHandler(this, &ListasRepro::aceptarBtn_Click);
            // 
            // nombreLista
            // 
            this->nombreLista->Location = System::Drawing::Point(18, 457);
            this->nombreLista->Name = L"nombreLista";
            this->nombreLista->Size = System::Drawing::Size(196, 20);
            this->nombreLista->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->nombreLista->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->nombreLista->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
            this->nombreLista->StateCommon->Content->Color1 = System::Drawing::Color::White;
            this->nombreLista->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->nombreLista->TabIndex = 0;
            this->nombreLista->Visible = false;
            // 
            // ingrese
            // 
            this->ingrese->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ingrese->ForeColor = System::Drawing::Color::White;
            this->ingrese->Location = System::Drawing::Point(18, 418);
            this->ingrese->Name = L"ingrese";
            this->ingrese->Size = System::Drawing::Size(196, 33);
            this->ingrese->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->ingrese->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->ingrese->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->ingrese->TabIndex = 1;
            this->ingrese->Values->Text = L"INGRESE NOMBRE DE SU NUEVA\r\nLISTA DE REPRODUCCION";
            this->ingrese->Visible = false;
            // 
            // importarBtn
            // 
            this->importarBtn->Location = System::Drawing::Point(0, 312);
            this->importarBtn->Name = L"importarBtn";
            this->importarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->OverrideDefault->Back->ColorAngle = 45;
            this->importarBtn->Palette = this->kryptonPalette1;
            this->importarBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->importarBtn->Size = System::Drawing::Size(234, 55);
            this->importarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->StateCommon->Back->ColorAngle = 45;
            this->importarBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->importarBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->importarBtn->StateCommon->Border->Rounding = 0;
            this->importarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->importarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->importarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->importarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->importarBtn->StatePressed->Back->ColorAngle = 45;
            this->importarBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->importarBtn->StateTracking->Back->ColorAngle = 45;
            this->importarBtn->TabIndex = 10;
            this->importarBtn->Values->Text = L"Importar Lista de Reproduccion";
            // 
            // exportarBtn
            // 
            this->exportarBtn->Location = System::Drawing::Point(0, 261);
            this->exportarBtn->Name = L"exportarBtn";
            this->exportarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->OverrideDefault->Back->ColorAngle = 45;
            this->exportarBtn->Palette = this->kryptonPalette1;
            this->exportarBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->exportarBtn->Size = System::Drawing::Size(234, 55);
            this->exportarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->StateCommon->Back->ColorAngle = 45;
            this->exportarBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->exportarBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->exportarBtn->StateCommon->Border->Rounding = 0;
            this->exportarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->exportarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->exportarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->exportarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->exportarBtn->StatePressed->Back->ColorAngle = 45;
            this->exportarBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->exportarBtn->StateTracking->Back->ColorAngle = 45;
            this->exportarBtn->TabIndex = 9;
            this->exportarBtn->Values->Text = L"Exportar Lista de Reproduccion";
            // 
            // eliminarBtn
            // 
            this->eliminarBtn->Location = System::Drawing::Point(0, 222);
            this->eliminarBtn->Name = L"eliminarBtn";
            this->eliminarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->OverrideDefault->Back->ColorAngle = 45;
            this->eliminarBtn->Palette = this->kryptonPalette1;
            this->eliminarBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->eliminarBtn->Size = System::Drawing::Size(234, 42);
            this->eliminarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->StateCommon->Back->ColorAngle = 45;
            this->eliminarBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->eliminarBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->eliminarBtn->StateCommon->Border->Rounding = 0;
            this->eliminarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->eliminarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->eliminarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->eliminarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->eliminarBtn->StatePressed->Back->ColorAngle = 45;
            this->eliminarBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->eliminarBtn->StateTracking->Back->ColorAngle = 45;
            this->eliminarBtn->TabIndex = 8;
            this->eliminarBtn->Values->Text = L"Eliminar Lista de Reproduccion";
            // 
            // salvarBtn
            // 
            this->salvarBtn->Location = System::Drawing::Point(0, 186);
            this->salvarBtn->Name = L"salvarBtn";
            this->salvarBtn->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->OverrideDefault->Back->ColorAngle = 45;
            this->salvarBtn->Palette = this->kryptonPalette1;
            this->salvarBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->salvarBtn->Size = System::Drawing::Size(234, 42);
            this->salvarBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->StateCommon->Back->ColorAngle = 45;
            this->salvarBtn->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->salvarBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->salvarBtn->StateCommon->Border->Rounding = 0;
            this->salvarBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->salvarBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->salvarBtn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->salvarBtn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->salvarBtn->StatePressed->Back->ColorAngle = 45;
            this->salvarBtn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->salvarBtn->StateTracking->Back->ColorAngle = 45;
            this->salvarBtn->TabIndex = 7;
            this->salvarBtn->Values->Text = L"Salvar Lista de Reproduccion";
            this->salvarBtn->Click += gcnew System::EventHandler(this, &ListasRepro::salvarBtn_Click);
            // 
            // selecLbl
            // 
            this->selecLbl->Location = System::Drawing::Point(16, 11);
            this->selecLbl->Name = L"selecLbl";
            this->selecLbl->Size = System::Drawing::Size(198, 60);
            this->selecLbl->StateCommon->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->selecLbl->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->selecLbl->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->selecLbl->TabIndex = 6;
            this->selecLbl->Values->Text = L"Seleccione la lista de\r\nreproduccion que desea\r\n visualizar";
            // 
            // listSelectBtn
            // 
            this->listSelectBtn->DropDownWidth = 249;
            this->listSelectBtn->ItemStyle = ComponentFactory::Krypton::Toolkit::ButtonStyle::ButtonSpec;
            this->listSelectBtn->Location = System::Drawing::Point(267, 11);
            this->listSelectBtn->Name = L"listSelectBtn";
            this->listSelectBtn->Size = System::Drawing::Size(255, 28);
            this->listSelectBtn->StateCommon->ComboBox->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->listSelectBtn->StateCommon->ComboBox->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->listSelectBtn->StateCommon->ComboBox->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->listSelectBtn->StateCommon->ComboBox->Border->ColorAngle = 45;
            this->listSelectBtn->StateCommon->ComboBox->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->listSelectBtn->StateCommon->ComboBox->Border->Rounding = 10;
            this->listSelectBtn->StateCommon->ComboBox->Content->Color1 = System::Drawing::Color::White;
            this->listSelectBtn->StateCommon->ComboBox->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
            this->listSelectBtn->StateCommon->DropBack->Color1 = System::Drawing::Color::White;
            this->listSelectBtn->StateCommon->DropBack->Color2 = System::Drawing::Color::White;
            this->listSelectBtn->StateCommon->Item->Back->Color1 = System::Drawing::Color::White;
            this->listSelectBtn->StateCommon->Item->Back->Color2 = System::Drawing::Color::White;
            this->listSelectBtn->StateCommon->Item->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->listSelectBtn->StateCommon->Item->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->listSelectBtn->TabIndex = 5;
            this->listSelectBtn->SelectedIndexChanged += gcnew System::EventHandler(this, &ListasRepro::listSelectBtn_SelectedIndexChanged);
            // 
            // strip
            // 
            this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->strip->Name = L"strip";
            this->strip->Size = System::Drawing::Size(61, 4);
            // 
            // grid1
            // 
            this->grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->grid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->No, this->Artist,
                    this->Song
            });
            this->grid1->Location = System::Drawing::Point(3, 3);
            this->grid1->Name = L"grid1";
            this->grid1->Size = System::Drawing::Size(487, 384);
            this->grid1->TabIndex = 8;
            // 
            // No
            // 
            this->No->HeaderText = L"NoSong";
            this->No->Name = L"No";
            // 
            // Artist
            // 
            this->Artist->HeaderText = L"Art";
            this->Artist->Name = L"Artist";
            // 
            // Song
            // 
            this->Song->HeaderText = L"SongName";
            this->Song->Name = L"Song";
            // 
            // tablePanel
            // 
            this->tablePanel->ColumnCount = 1;
            this->tablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Controls->Add(this->grid1, 0, 0);
            this->tablePanel->Location = System::Drawing::Point(16, 87);
            this->tablePanel->Name = L"tablePanel";
            this->tablePanel->RowCount = 1;
            this->tablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Size = System::Drawing::Size(493, 390);
            this->tablePanel->TabIndex = 7;
            // 
            // ListasRepro
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->Controls->Add(this->tablePanel);
            this->Controls->Add(this->selecLbl);
            this->Controls->Add(this->listSelectBtn);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->Name = L"ListasRepro";
            this->Size = System::Drawing::Size(762, 614);
            this->Load += gcnew System::EventHandler(this, &ListasRepro::ListasRepro_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listSelectBtn))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->EndInit();
            this->tablePanel->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        public:
            List<DataGridView^> grid;
            DataGridView^ grids = (gcnew DataGridView());
            DataGridViewColumn^ colNoSong = gcnew DataGridViewColumn;
            DataGridViewCell^ cellNoSong = gcnew DataGridViewTextBoxCell;
            DataGridViewColumn^ colArtist = gcnew DataGridViewColumn;
            DataGridViewCell^ cellArtist = gcnew DataGridViewTextBoxCell;
            DataGridViewColumn^ colSongs = gcnew DataGridViewColumn;
            DataGridViewCell^ cellSongs = gcnew DataGridViewTextBoxCell;

	private: System::Void newListBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        aceptarBtn->Visible = true;
        cancelBtn->Visible = true;
        ingrese->Visible = true;
        nombreLista->Visible = true;
        
        
     
   
}
         
private: System::Void salvarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
   
    popUpBox^ popUp = gcnew popUpBox;
    popUp->Show();
    

}
       public:
           static List<String^>^ a = gcnew List<String^>();
private: System::Void listSelectBtn_Click() {


}
private: System::Void listSelectBtn_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    ifstream archivoSelectBtn("ListaBotones.txt", ios::in);
    int i = 0;
    while (!archivoSelectBtn.eof())
    {
        listSelectBtn->Items->Add(a[i]);
        i++;
    }

    int rep = 0;
    aceptarBtn->Visible = false;
    cancelBtn->Visible = false;
    ingrese->Visible = false;
    nombreLista->Visible = false;

    ComponentFactory::Krypton::Toolkit::KryptonComboBox^ test = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonComboBox^>(sender);


    for (int i = 0; i < a->Count; i++)
    {

        if (test->SelectedIndex == i)
        {
            test->Name = a[i];

        }
    }



    std::string newS = msclr::interop::marshal_as<std::string>(test->Text);
    ifstream archivoLista(newS + ".bin", ios::in | ios::binary);
    if (sizeof(archivoLista) == 0)
    {
        MessageBox::Show("Vacia", "Error", MessageBoxButtons::OK);
        return;
    }
    ListaGet lista;
    archivoLista.seekg(0, ios::beg);
    DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];
    ListaGetValues lectura;

    String^ id = lectura.getID();
    String^ art = lectura.getArtist();
    String^ song = lectura.getSong();
    archivoLista.read(reinterpret_cast<char*>(&id), sizeof(String^));
    archivoLista.read(reinterpret_cast<char*>(&art), sizeof(String^));
    archivoLista.read(reinterpret_cast<char*>(&song), sizeof(String^));

    while (!archivoLista.eof()) {


        rows->Cells[0]->Value = id;
        rows->Cells[1]->Value = art;
        rows->Cells[2]->Value = song;

        tablePanel->Controls->Add(grid1);
        Controls->Add(tablePanel);

        archivoLista.read(reinterpret_cast<char*>(&id), sizeof(String^));
        archivoLista.read(reinterpret_cast<char*>(&art), sizeof(String^));
        archivoLista.read(reinterpret_cast<char*>(&song), sizeof(String^));
    }

    archivoLista.close();

    /* if (test->SelectedIndex == 0 )
     {

     }*/
     //else
     //    //prueba de esconder // pero se esconde todo el panel
     //    grids->Hide();
  /*   int numTry = 0;
     while (numTry!=num)
     {
         if (grid[numTry] != grid[num])
         {
             grid[numTry]->Hide();
         }
         else {
             grid[numTry]->Show();
             break;
         }
         numTry++;
     }*/

     // std::string selectedList = (std::string)listSelectBtn->SelectedItem;
}

private: System::Void ListasRepro_Load(System::Object^ sender, System::EventArgs^ e) {
  
    /*
    a->Add(nombreLista->Text);
    listSelectBtn->Items->Add(nombreLista->Text)*/;
    //colNoSong->Name = "No.";
    //colNoSong->CellTemplate = cellNoSong;
    //colArtist->Name = "Artist";
    //colArtist->CellTemplate = cellArtist;
    //colSongs->Name = "Songs";
    //colSongs->CellTemplate = cellSongs;

    //grids->Columns->Add(colNoSong);
    //grids->Columns->Add(colArtist);
    //grids->Columns->Add(colSongs);


}


private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
  
 

}
       
private: System::Void aceptarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
   
    aceptarBtn->Visible = false;
    cancelBtn->Visible = false;
    ingrese->Visible = false;
    nombreLista->Visible = false;


    std::string newS = msclr::interop::marshal_as<std::string>(nombreLista->Text);

    ofstream archivoLista(newS + ".bin", ios::out | ios::binary| ios::app);
    ofstream archivoSelectBtn("ListaBotones.txt", ios::out | ios::app);

    a->Add(nombreLista->Text);
    archivoSelectBtn << newS;
    archivoSelectBtn.close();
    archivoLista.close();


    listSelectBtn->Items->Add(nombreLista->Text);
    listSelectBtn->SelectedIndexChanged += gcnew System::EventHandler(this, &ListasRepro::listSelectBtn_SelectedIndexChanged);

    nombreLista->Text = "";
    grids->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    grids->Location = System::Drawing::Point(16, 77);
    grids->Name = L"kryptonDataGridView1";
    grids->Size = System::Drawing::Size(486, 514);
    grids->TabIndex = 7;

    

}

private: System::Void kryptonTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

/*    ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtNoSongFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtArtistFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtSongFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());

            txtNoSongFlow->Size = System::Drawing::Size(78, 23);
            txtArtistFlow->Size = System::Drawing::Size(204, 23);
            txtSongFlow->Size = System::Drawing::Size(199, 23);
*/