#pragma once
#include "popUpBox.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "btn.h"
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
namespace SpotifyApp {

    /// <summary>
    /// Summary for reproducir
    /// </summary>
    public ref class reproducir : public System::Windows::Forms::UserControl
    {
    public:


    public:
        reproducir(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
        inline static bool reproducir::estaVacia()
        {
            return primero == nullptr;
        }

        inline static void reproducir::agregar(const char* li, const char* id, const char* art, const char* s)
        {
            NodoWin^ nuevo = gcnew NodoWin(li, id, art, s, nullptr);

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

            MessageBox::Show("Exito!", "Se ha agreagado : [" + ss + "] a lista [" + lista + "]\n", MessageBoxButtons::OK);
        }


    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~reproducir()
        {
            if (components)
            {
                delete components;
            }
        }


    public:

    private: static NodoWin^ primero;
    public: int repro;




    private: System::Windows::Forms::ContextMenuStrip^ strip;



    private:








    private: ComponentFactory::Krypton::Toolkit::KryptonContextMenu^ kryptonContextMenu1;


    private:  System::Windows::Forms::DataGridView^ grid1;
    private: System::Windows::Forms::TableLayoutPanel^ tablePanel;



    private: System::Windows::Forms::FlowLayoutPanel^ flow;










    private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;



    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ verLista;
    private: System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ No;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Artist;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Song;
private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel1;

















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
            this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
            this->strip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->kryptonContextMenu1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonContextMenu());
            this->grid1 = (gcnew System::Windows::Forms::DataGridView());
            this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Artist = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Song = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tablePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->flow = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->verLista = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->kryptonLabel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->strip->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid1))->BeginInit();
            this->tablePanel->SuspendLayout();
            this->flow->SuspendLayout();
            this->SuspendLayout();
            // 
            // strip
            // 
            this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
            this->strip->Name = L"strip";
            this->strip->Size = System::Drawing::Size(133, 26);
            // 
            // reproducirToolStripMenuItem
            // 
            this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
            this->reproducirToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->reproducirToolStripMenuItem->Text = L"Reproducir";
            // 
            // grid1
            // 
            this->grid1->AllowUserToAddRows = false;
            this->grid1->AllowUserToDeleteRows = false;
            this->grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->grid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->No, this->Artist,
                    this->Song
            });
            this->grid1->Location = System::Drawing::Point(3, 3);
            this->grid1->Name = L"grid1";
            this->grid1->ReadOnly = true;
            this->grid1->Size = System::Drawing::Size(686, 384);
            this->grid1->TabIndex = 8;
            this->grid1->Click += gcnew System::EventHandler(this, &reproducir::grid1_Click);
            // 
            // No
            // 
            this->No->ContextMenuStrip = this->strip;
            this->No->HeaderText = L"ID";
            this->No->Name = L"No";
            this->No->ReadOnly = true;
            this->No->Resizable = System::Windows::Forms::DataGridViewTriState::True;
            this->No->Width = 200;
            // 
            // Artist
            // 
            this->Artist->ContextMenuStrip = this->strip;
            this->Artist->HeaderText = L"Artist";
            this->Artist->Name = L"Artist";
            this->Artist->ReadOnly = true;
            this->Artist->Width = 250;
            // 
            // Song
            // 
            this->Song->ContextMenuStrip = this->strip;
            this->Song->HeaderText = L"SongName";
            this->Song->Name = L"Song";
            this->Song->ReadOnly = true;
            this->Song->Width = 205;
            // 
            // tablePanel
            // 
            this->tablePanel->ColumnCount = 1;
            this->tablePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Controls->Add(this->grid1, 0, 0);
            this->tablePanel->Location = System::Drawing::Point(22, 150);
            this->tablePanel->Name = L"tablePanel";
            this->tablePanel->RowCount = 1;
            this->tablePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tablePanel->Size = System::Drawing::Size(692, 390);
            this->tablePanel->TabIndex = 7;
            // 
            // flow
            // 
            this->flow->Controls->Add(this->verLista);
            this->flow->Location = System::Drawing::Point(19, 76);
            this->flow->Name = L"flow";
            this->flow->Size = System::Drawing::Size(695, 68);
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
            this->verLista->Size = System::Drawing::Size(699, 62);
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
            this->verLista->Click += gcnew System::EventHandler(this, &reproducir::verLista_Click);
            // 
            // kryptonLabel1
            // 
            this->kryptonLabel1->Location = System::Drawing::Point(19, 40);
            this->kryptonLabel1->Name = L"kryptonLabel1";
            this->kryptonLabel1->Size = System::Drawing::Size(274, 30);
            this->kryptonLabel1->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->kryptonLabel1->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->kryptonLabel1->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold));
            this->kryptonLabel1->TabIndex = 9;
            this->kryptonLabel1->Values->Text = L"REPRODUCTOR DE MUSICA\r\n";
            // 
            // reproducir
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(96)));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->Controls->Add(this->kryptonLabel1);
            this->Controls->Add(this->flow);
            this->Controls->Add(this->tablePanel);
            this->DoubleBuffered = true;
            this->Name = L"reproducir";
            this->Size = System::Drawing::Size(762, 614);
            this->Load += gcnew System::EventHandler(this, &reproducir::reproducir_Load);
            this->strip->ResumeLayout(false);
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



    public:
        const char* lista;
        bool salvar = false;
        String^ URL;
        static List<String^>^ a = gcnew List<String^>();
        int click = 0; int cellNum = 0;
        void setNombre(const char* l) {
            lista = l;
        }
        const char* getLista() {
            return lista;
        }
        void setUrl(String^ url) {
            URL = url;
        }
        String^ getUrl() {
            return URL;
        }

    private: System::Void but_Click(System::Object^ sender, System::EventArgs^ e) {

        tablePanel->Visible = true;
        click++;
        verLista->Visible = true;
        ComponentFactory::Krypton::Toolkit::KryptonButton^ test = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonButton^>(sender);

        DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];
        int rep = 0;


        std::string listaNombre = msclr::interop::marshal_as<std::string>(test->Text);
        ifstream archivoLista(listaNombre + ".bin", ios::in | ios::binary);


        structCancion song;
        archivoLista.seekg(86);

        archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));
        int i = 0;
        while (!archivoLista.eof()) {
         //   i = 0;
            string id = song.id;
            string art = song.artist;
            string can = song.cancion;
            id.resize(22, '/');

            String^ idd = gcnew String(id.c_str());
            String^ artt = gcnew String(art.c_str());
            String^ cann = gcnew String(can.c_str());

            grid1->Rows->Add(idd, artt, cann);
            tablePanel->Controls->Add(grid1);
            Controls->Add(tablePanel);
            

            setUrl(idd);

            archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));
            tablePanel->Controls->Add(grid1);
            Controls->Add(tablePanel);
        }

        tablePanel->Controls->Add(grid1);
        Controls->Add(tablePanel);
        archivoLista.close();
    }



           //void reproducir::escribir()
           //{
           //    NodoWin^ actual = primero;
           //    structCancion song;

           //    string name = actual->getNombre();
           //    String^ listaa = gcnew String(name.c_str());

           //    ofstream listaArchivo(name + ".bin", ios::binary | ios::out | ios::app);


           //    while (actual != nullptr)
           //    {
           //        string name = actual->getNombre();
           //        String^ listaa = gcnew String(name.c_str());

           //        ofstream listaArchivo(name + ".bin", ios::binary | ios::out | ios::app);
           //        strcpy_s(song.id, strlen(actual->getID()) + 1, actual->getID());
           //        strcpy_s(song.artist, strlen(actual->getArtist()) + 1, actual->getArtist());
           //        strcpy_s(song.cancion, strlen(actual->getSongName()) + 1, actual->getSongName());

           //        string id = song.id;
           //        string art = song.artist;
           //        string c = song.cancion;

           //        String^ idd = gcnew String(id.c_str());
           //        String^ a = gcnew String(art.c_str());
           //        String^ s = gcnew String(c.c_str());
           //        MessageBox::Show(a, s, MessageBoxButtons::OK);

           //        listaArchivo.write(reinterpret_cast<const char*>(&song), sizeof(structCancion));
           //        actual = actual->getSiguiente();

           //    }
           //    listaArchivo.close();
           //    MessageBox::Show("Exito!", "Se ha guardado su lista!", MessageBoxButtons::OK);



           //}



    //private: System::Void listSelectBtn_Click(System::Object^ sender, System::EventArgs^ e) {

    //    int rep = 0;


    //    ComponentFactory::Krypton::Toolkit::KryptonComboBox^ test = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonComboBox^>(sender);
    //    DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];

    //    for (int i = 0; i < a->Count; i++)
    //    {

    //        if (test->SelectedIndex == i)
    //        {
    //            test->Name = a[i];
    //            test->Text = a[i];
    //        }
    //    }



    //    std::string listaNombre = msclr::interop::marshal_as<std::string>(test->Name);
    //    ifstream archivoLista(listaNombre + ".bin", ios::in | ios::binary);

    //    structCancion song;
    //    string id = song.id;
    //    string art = song.artist;
    //    string can = song.cancion;

    //    archivoLista.seekg(0, ios::beg);

    //    archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));

    //    while (!archivoLista.eof()) {

    //        archivoLista.read(reinterpret_cast<char*>(&song), sizeof(structCancion));
    //        tablePanel->Controls->Add(grid1);
    //        Controls->Add(tablePanel);
    //    }

    //    archivoLista.close();

    //}

    private: System::Void reproducir_Load(System::Object^ sender, System::EventArgs^ e) {
        if (repro == 0)
        {
            verLista->Visible = false;
            tablePanel->Visible = false;
            flow->Visible = false;
            repro++;
        }

      
        tablePanel->Visible = false;
        flow->Visible = true;
        verLista->Visible = false;

        ifstream botones("ListButtons.bin", ios::in | ios::binary);
        botones.seekg(0, ios::beg);
        btns reading;
        botones.read(reinterpret_cast<char*>(&reading), sizeof(btns));

       
        while (!botones.eof())
        {
            ComponentFactory::Krypton::Toolkit::KryptonButton^ but = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            String^ btn = gcnew String(reading.nombreLista);
            but->Text = btn;
            flow->Controls->Add(but);
            but->Click += gcnew System::EventHandler(this, &reproducir::but_Click);
            this->Controls->Add(flow);
            botones.read(reinterpret_cast<char*>(&reading), sizeof(btns));
        }
        botones.close();

        //StreamReader^ DataIn = File::OpenText("C:/Users/Administrator/source/repos/Spotify/SpotifyApp/ListaBotones.txt");
        //String^ DataStr;
        //int count = 0;
        //array<String^>^ result;


        //while ((DataStr = DataIn->ReadLine()) != nullptr)
        //{
        //    ComponentFactory::Krypton::Toolkit::KryptonButton^ but = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
        //    result = DataStr->Split(',');
        //    but->Text = result[0];
        //    flow->Controls->Add(but);

        //    but->Click += gcnew System::EventHandler(this, &reproducir::but_Click);

        //    this->Controls->Add(flow);
        //    //listSelectBtn->Items->Add(result[0]);

        //}


    }




    private: System::Void verLista_Click(System::Object^ sender, System::EventArgs^ e) {
        DataGridViewRow^ rows = grid1->Rows[grid1->Rows->Add()];
       
        tablePanel->Visible = false;
        verLista->Visible = false;
      
        grid1->Rows->Clear();



    }

    public: int reprod;
    private: System::Void grid1_Click(System::Object^ sender, System::EventArgs^ e) {

        ComponentFactory::Krypton::Toolkit::KryptonDataGridViewButtonCell^ test = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonDataGridViewButtonCell^>(sender);
        String^ link = grid1->CurrentRow->Cells[0]->Value->ToString();
       
        if (reprod ==0)
        {
            String^ idN = "https://open.spotify.com/track/" + link;
            System::Diagnostics::Process::Start("MicrosoftEdge.exe", idN);
            reprod++;
        }
            
        reprod = 0;


    }
    };
}