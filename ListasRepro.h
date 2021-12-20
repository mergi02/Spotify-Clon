#pragma once

#include "btn.h"
#include <string>
#include <iomanip>
#include <ctime>
#include <chrono>
#include "popUpBox.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include "NodoWin.h"
#include "setListaNombre.h"
#include "ListaSimpleWin.h"
#include "structLista.h"
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
using std::fstream;
namespace SpotifyApp {

	/// <summary>
	/// Summary for ListasRepro
	/// </summary>
	public ref class ListasRepro : public System::Windows::Forms::UserControl
	{

	public:
		ListasRepro(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

        ListasRepro(String^ txt)
        {
            InitializeComponent();
            user->Text= txt;
            //TODO: Add the constructor code here
            //
        }

        inline static bool ListasRepro::estaVacia()
        {
            return primero == nullptr;
        }

        inline static void ListasRepro::agregar(const char* li, const char* id, const char* art, const char* s)
        {
            NodoWin^ nuevo = gcnew NodoWin(li,id, art, s, nullptr);
            
            if (estaVacia())
            {
                primero = nuevo;
            }
            else {
                NodoWin^ actual = primero;
                while (actual->getSiguiente() != nullptr) {
                    actual = actual->getSiguiente();

                }
                actual->setSiguiente(nuevo);
            }


            String^ lista = gcnew String(li);
            String^ artt = gcnew String(art);
            String^ ss = gcnew String(s);
           
            MessageBox::Show("Se ha agregaado : [" + ss + "] a lista [" + lista + "]\n", "Exito!" , MessageBoxButtons::OK);
        }
    private: System::Windows::Forms::Label^ user;
    public:


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


    public:
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ selecLbl;
    private: static NodoWin^ primero;
    public: int repro;




    private: System::Windows::Forms::ContextMenuStrip^ strip;
    public: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ nombreLista;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ ingrese;

    private:








    private: ComponentFactory::Krypton::Toolkit::KryptonContextMenu^ kryptonContextMenu1;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ aceptarBtn;
    private:  System::Windows::Forms::DataGridView^ grid1;
    private: System::Windows::Forms::TableLayoutPanel^ tablePanel;



    private: System::Windows::Forms::FlowLayoutPanel^ flow;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ verLista;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artist;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Song;


    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ cancelBtn;



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
            this->strip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->kryptonContextMenu1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonContextMenu());
            this->grid1 = (gcnew System::Windows::Forms::DataGridView());
            this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Artist = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Song = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->flow = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->verLista = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->user = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->BeginInit();
            this->tablePanel->SuspendLayout();
            this->flow->SuspendLayout();
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
            this->exportarBtn->Click += gcnew System::EventHandler(this, &ListasRepro::exportarBtn_Click);
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
            this->eliminarBtn->Click += gcnew System::EventHandler(this, &ListasRepro::eliminarBtn_Click);
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
            this->selecLbl->Location = System::Drawing::Point(19, 32);
            this->selecLbl->Name = L"selecLbl";
            this->selecLbl->Size = System::Drawing::Size(364, 39);
            this->selecLbl->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->selecLbl->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->selecLbl->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold));
            this->selecLbl->TabIndex = 6;
            this->selecLbl->Values->Text = L"LISTAS DE REPRODUCCION";
            // 
            // strip
            // 
            this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->strip->Name = L"strip";
            this->strip->Size = System::Drawing::Size(61, 4);
            // 
            // grid1
            // 
            this->grid1->AllowUserToDeleteRows = false;
            this->grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->grid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->No, this->Artist,
                    this->Song
            });
            this->grid1->Location = System::Drawing::Point(3, 3);
            this->grid1->Name = L"grid1";
            this->grid1->ReadOnly = true;
            this->grid1->Size = System::Drawing::Size(487, 384);
            this->grid1->TabIndex = 8;
            // 
            // No
            // 
            this->No->HeaderText = L"No";
            this->No->Name = L"No";
            this->No->ReadOnly = true;
            this->No->Width = 50;
            // 
            // Artist
            // 
            this->Artist->HeaderText = L"Artist";
            this->Artist->Name = L"Artist";
            this->Artist->ReadOnly = true;
            this->Artist->Width = 250;
            // 
            // Song
            // 
            this->Song->HeaderText = L"SongName";
            this->Song->Name = L"Song";
            this->Song->ReadOnly = true;
            this->Song->Width = 150;
            // 
            // tablePanel
            // 
            this->tablePanel->ColumnCount = 1;
            this->tablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Controls->Add(this->grid1, 0, 0);
            this->tablePanel->Location = System::Drawing::Point(16, 171);
            this->tablePanel->Name = L"tablePanel";
            this->tablePanel->RowCount = 1;
            this->tablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Size = System::Drawing::Size(493, 390);
            this->tablePanel->TabIndex = 7;
            // 
            // flow
            // 
            this->flow->Controls->Add(this->verLista);
            this->flow->Location = System::Drawing::Point(19, 77);
            this->flow->Name = L"flow";
            this->flow->Size = System::Drawing::Size(490, 88);
            this->flow->TabIndex = 8;
            // 
            // verLista
            // 
            this->verLista->Location = System::Drawing::Point(3, 3);
            this->verLista->Name = L"verLista";
            this->verLista->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->OverrideDefault->Back->ColorAngle = 45;
            this->verLista->Palette = this->kryptonPalette1;
            this->verLista->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
            this->verLista->Size = System::Drawing::Size(484, 78);
            this->verLista->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->StateCommon->Back->ColorAngle = 45;
            this->verLista->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->verLista->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->verLista->StateCommon->Border->Rounding = 0;
            this->verLista->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->verLista->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->verLista->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->verLista->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->verLista->StatePressed->Back->ColorAngle = 45;
            this->verLista->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
            this->verLista->StateTracking->Back->ColorAngle = 45;
            this->verLista->TabIndex = 9;
            this->verLista->Values->Text = L"Visualizar Nueva Lista";
            this->verLista->Click += gcnew System::EventHandler(this, &ListasRepro::verLista_Click);
            // 
            // user
            // 
            this->user->AutoSize = true;
            this->user->Location = System::Drawing::Point(444, 32);
            this->user->Name = L"user";
            this->user->Size = System::Drawing::Size(35, 13);
            this->user->TabIndex = 9;
            this->user->Text = L"label1";
            this->user->Visible = false;
            // 
            // ListasRepro
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->Controls->Add(this->user);
            this->Controls->Add(this->flow);
            this->Controls->Add(this->tablePanel);
            this->Controls->Add(this->selecLbl);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->Name = L"ListasRepro";
            this->Size = System::Drawing::Size(762, 614);
            this->Load += gcnew System::EventHandler(this, &ListasRepro::ListasRepro_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->EndInit();
            this->tablePanel->ResumeLayout(false);
            this->flow->ResumeLayout(false);
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

public:
     const char* lista;
    bool salvar = false, eliminar=false;
    static List<String^>^ a = gcnew List<String^>();
    int click = 0; int cellNum = 0;
    void setNombre(const char* l) {
        lista = l;
    }
    const char* getLista() {
        return lista;
    }

 private: System::Void ListasRepro_Load(System::Object^ sender, System::EventArgs^ e) {

     verLista->Visible = false;
     tablePanel->Visible = false;
     flow->Visible = false;
     repro++;
     tablePanel->Visible = false;
     flow->Visible = true;
     verLista->Visible = false;


     if (repro > 0)
     {
         ifstream botones("ListButtons.bin", ios::in | ios::binary);
         botones.seekg(0, ios::beg);
         btns read;
         botones.read(reinterpret_cast<char*>(&read), sizeof(btns));

         while (!botones.eof())
         {
             ComponentFactory::Krypton::Toolkit::KryptonButton^ but = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
             String^ btn = gcnew String(read.nombreLista);
             but->Text = btn;
             if (btn != "/0")
             {
                 flow->Controls->Add(but);
                 but->Click += gcnew System::EventHandler(this, &ListasRepro::but_Click);
                 this->Controls->Add(flow);
             }

             botones.read(reinterpret_cast<char*>(&read), sizeof(btns));
         }
         botones.close();
     }


     repro++;

     //StreamReader^ DataIn = File::OpenText("C:/Users/Administrator/source/repos/Spotify/SpotifyApp/ListaBotones.txt");
     //String^ DataStr;
     //int count = 0;
     //array<String^>^ result;


     //while ((DataStr = DataIn->ReadLine()) != nullptr)
     //{
     //        ComponentFactory::Krypton::Toolkit::KryptonButton^ but = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
     //        result = DataStr->Split(',');
     //        but->Text = result[0];
     //        flow->Controls->Add(but);

     //        but->Click += gcnew System::EventHandler(this, &ListasRepro::but_Click);

     //        this->Controls->Add(flow);
     //        //listSelectBtn->Items->Add(result[0]);
     //        
     //}


 }
        bool deleting = false;

        void ListasRepro::eliminarLista()
        {
            //MessageBox::Show("Exito!", "A ELMINARRR", MessageBoxButtons::OK);

            ifstream botones("ListButtons.bin", ios::binary | ios::in);
            btns btn;
            long posicionArchivo = 0;
            botones.read(reinterpret_cast<char*>(&btn), sizeof(btns));

            while (!botones.eof())
            {

                if (btn.nombreLista == getLista())
                {
                    deleting = true;
                }

                botones.read(reinterpret_cast<char*>(&btn), sizeof(btns));

            }
            botones.close();


            if (deleting)
            {

                ofstream botones("ListButtons.bin", ios::out | ios::binary);
                int num = 1;
                const char* empty = "/0";
                for (int i = 0; i < num; i++)
                {
                    MessageBox::Show("Exito!", "Se ha eliminado su lista!", MessageBoxButtons::OK);

                    strcpy_s(btn.nombreLista, strlen(empty) + 1, empty);
                    botones.write(reinterpret_cast<char*>(&btn), sizeof(btns));

                }
                num = 0;
                botones.close();
            }
            //  MessageBox::Show("Exito!", "Se ha eliminado su lista!", MessageBoxButtons::OK);



        }
 private: System::Void but_Click(System::Object^ sender, System::EventArgs^ e) {
       
        
        tablePanel->Visible = true;
        click++;
        verLista->Visible = true;
        //flow->Visible = false;
        ComponentFactory::Krypton::Toolkit::KryptonButton^ test = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonButton^>(sender);
         //DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];
        int rep = 0;
        aceptarBtn->Visible = false;
        cancelBtn->Visible = false;
        ingrese->Visible = false;
        nombreLista->Visible = false;


        std::string listaNombre = msclr::interop::marshal_as<std::string>(test->Text);
        ifstream archivoLista(listaNombre + ".bin", ios::in | ios::binary);
       
        if (eliminar==true)
        {
           
            verLista->Visible = false;
            grid1->Visible = false;

            ifstream botones("ListButtons.bin", ios::binary | ios::in);
            btns btn;
            String^ lista;

            long posicionArchivo = 0;
            botones.read(reinterpret_cast<char*>(&btn), sizeof(btns));

            while (!botones.eof())
            {
              lista = gcnew String(btn.nombreLista);
                if (lista == test->Text)
                {
                    deleting = true;
                }

                botones.read(reinterpret_cast<char*>(&btn), sizeof(btns));

            }
            botones.close();


            if (deleting)
            {

                ofstream botones("ListButtons.bin", ios::out | ios::binary);
                int num = 1;
                const char* empty = "/0";
                for (int i = 0; i < num; i++)
                {
                    if (btn.nombreLista == listaNombre.c_str() )
                    {
                        strcpy_s(btn.nombreLista, strlen(empty) + 1, empty);
                        botones.write(reinterpret_cast<char*>(&btn), sizeof(btns));
                    }
                
                }
                num = 0;
                botones.close();
            }
            //  MessageBox::Show("Exito!", "Se ha eliminado su lista!", MessageBoxButtons::OK);
            MessageBox::Show("Exito!", "Se ha eliminado su lista!", MessageBoxButtons::OK);
            return;
         
        }

        String^ pos;
        structCancion song;
        infoLista info;
        archivoLista.seekg(86);

        archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));
       // archivoLista.read(reinterpret_cast<char*>(&info), sizeof(infoLista));
        int poss;
        
            //grid1->Rows[grid1->Rows->Add()];
        int i = 0;
        int indexRow = i;
      
        while (!archivoLista.eof()) {
          
          
            string id = song.id;
            string art = song.artist;
            string can = song.cancion;
            id.resize(22, '/');

            String^ idd = gcnew String(id.c_str());
            String^ artt = gcnew String(art.c_str());
            String^ cann = gcnew String(can.c_str());

            grid1->Rows->Add(idd, artt, cann);
            poss = archivoLista.tellg();
            pos = gcnew String(poss.ToString());
            tablePanel->Controls->Add(grid1);

            archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));
           // archivoLista.read(reinterpret_cast<char*>(&info), sizeof(infoLista));
           
        }
        i = 0;

      
        Controls->Add(tablePanel);
      //  tablePanel->Controls->Add(grid1);
       
        archivoLista.close();
    }

       
       

        void ListasRepro::escribir()
        {
            NodoWin^ actual = primero;
            structCancion song;

            string name = actual->getNombre();
            String^ listaa = gcnew String(name.c_str());

            ofstream listaArchivo(name + ".bin", ios::binary | ios::out | ios::app);
            while (actual != nullptr)
            {
                string name = actual->getNombre();
                String^ listaa = gcnew String(name.c_str());

                ofstream listaArchivo(name+ ".bin", ios::binary | ios::out | ios::app);
                strcpy_s(song.id, strlen(actual->getID()) + 1, actual->getID());
                strcpy_s(song.artist, strlen(actual->getArtist()) + 1, actual->getArtist());
                strcpy_s(song.cancion, strlen(actual->getSongName()) + 1, actual->getSongName());
              
                string id = song.id;
                string art = song.artist;
                string c = song.cancion;

                listaArchivo.write(reinterpret_cast<const char*>(&song), sizeof(structCancion));
                actual = actual->getSiguiente();
            
            }
            listaArchivo.close();
            MessageBox::Show("Exito!", "Se ha guardado su lista!", MessageBoxButtons::OK);


            
        }

      

 private: System::Void salvarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
            if (salvar == false)
            {
                MessageBox::Show("Seleccione la lista a la que\nquiere agregar sus canciones", "Un paso mas...", MessageBoxButtons::OK);
                salvar = true;

                verLista->Visible = false;
                tablePanel->Visible = false;
                flow->Visible = true;
            }
            else {
                escribir();
            }

        }


   


private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
  
    aceptarBtn->Visible = false;
    cancelBtn->Visible = false;
    ingrese->Visible = false;
    nombreLista->Visible = false;

}
       
private: System::Void aceptarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
   
    aceptarBtn->Visible = false;
    cancelBtn->Visible = false;
    ingrese->Visible = false;
    nombreLista->Visible = false;

    infoLista info;
    repro = 0;

    std::string newS = msclr::interop::marshal_as<std::string>(nombreLista->Text);
    ofstream archivoLista(newS + ".bin", ios::out | ios::binary| ios::app);

    std::string usuario = msclr::interop::marshal_as<std::string>(user->Text);
    while (repro != 1)
    {

        strcpy_s(info.nombreLista, strlen(newS.c_str()) + 1, newS.c_str());
        strcpy_s(info.usuarioCreador, strlen(usuario.c_str()) + 1, usuario.c_str());
        const auto now = std::chrono::system_clock::now();
        time_t tm = time(NULL);
        struct tm* curtime = localtime(&tm);
        strcpy_s(info.fechaHoraCreacion, strlen(asctime(curtime)) + 1, asctime(curtime));
        archivoLista.write(reinterpret_cast<const char*> (&info), sizeof(infoLista));
        repro++;
    }

    archivoLista.close();



    ofstream botones("ListButtons.bin", ios::out | ios::app| ios::binary);
   // a->Add(nombreLista->Text);

    btns escribir;
    repro = 0;
    while (repro!=1)
    {

    
        strcpy_s(escribir.nombreLista, strlen(newS.c_str())+1, newS.c_str());
        botones.write(reinterpret_cast<const char*> (&escribir) , sizeof(btns));
        repro++;
    }
    
    repro = 0;
    botones.close();
    //archivoLista.close();


   // listSelectBtn->Items->Add(nombreLista->Text);
   // listSelectBtn->SelectedIndexChanged += gcnew System::EventHandler(this, &ListasRepro::listSelectBtn_SelectedIndexChanged);

    nombreLista->Text = "";

    grids->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    grids->Location = System::Drawing::Point(16, 77);
    grids->Name = L"kryptonDataGridView1";
    grids->Size = System::Drawing::Size(486, 514);
    grids->TabIndex = 7;


}

private: System::Void verLista_Click(System::Object^ sender, System::EventArgs^ e) {
    DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];
   // if (salvar==true)
   // {
        tablePanel->Visible = false;
        verLista->Visible = false;
   // }
 
        grid1->Rows->Clear();
        
 
    
    
}

private: System::Void exportarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void eliminarBtn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (eliminar == false)
    {
        MessageBox::Show("Seleccione la lista a la que\nquiere eliminar", "Un paso mas...", MessageBoxButtons::OK);
        eliminar = true;

        verLista->Visible = false;
        tablePanel->Visible = false;
        flow->Visible = true;
    }/*
    else {
        eliminarLista();
    }*/

}
};
}
//
///*    ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtNoSongFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
//            ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtArtistFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
//            ComponentFactory::Krypton::Toolkit::KryptonTextBox^ txtSongFlow = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
//
//            txtNoSongFlow->Size = System::Drawing::Size(78, 23);
//            txtArtistFlow->Size = System::Drawing::Size(204, 23);
//            txtSongFlow->Size = System::Drawing::Size(199, 23);
//*/