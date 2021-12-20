#pragma once

#include "SeccionButtonLista.h"
#include "structLista.h"
#include "ListaSimpleWin.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <vector>
#include <sstream>
#include "ListasRepro.h"
#include "listaGet.h"
#include  <msclr/marshal_cppstd.h>
using namespace msclr::interop;
using std::vector; using std::cin;
using namespace System;
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
//using namespace System::ComponentModel::ComponentResourceManager^ resources;

//vector<KryptonDropButton^>  button;

namespace SpotifyApp {

	/// <summary>
	/// Summary for Catalogo
	/// </summary>
	public ref class Catalogo : public System::Windows::Forms::UserControl
	{
	
	public:
		
		Catalogo(void)
		{
			InitializeComponent();
			
		}

		//Catalogo(String^ name, int num)
		//{
		//	InitializeComponent();
		//	fileNameVar = name;
		//}
		//String^ idBtn(String^ result);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Catalogo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ addBtn;
		
	protected:

	protected:

	protected:




	public:
		String^ fileNameVar;

	

	private: System::Windows::Forms::FlowLayoutPanel^ flow;
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Catalogo::typeid));
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ lblNum;


	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;


	private: ComponentFactory::Krypton::Toolkit::KryptonDropButton^ ran;
	private: System::Windows::Forms::ContextMenuStrip^ strip;
	private: System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ numBtn2;

	private: ComponentFactory::Krypton::Toolkit::KryptonContextMenu^ kryptonContextMenu1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel2;

	private: System::Windows::Forms::FlowLayoutPanel^ flowListas;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ flowListasLbl;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonContextMenu^ kryptonContextMenu5;




		   //private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Catalogo::typeid));
			this->addBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->flow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ran = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());
			this->strip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblNum = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
			this->numBtn2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->kryptonContextMenu1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonContextMenu());
			this->kryptonLabel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->flowListas = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowListasLbl = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->kryptonContextMenu5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonContextMenu());
			this->SuspendLayout();
			// 
			// addBtn
			// 
			this->addBtn->ButtonStyle = ComponentFactory::Krypton::Toolkit::ButtonStyle::Alternate;
			this->addBtn->Location = System::Drawing::Point(533, 119);
			this->addBtn->Margin = System::Windows::Forms::Padding(1);
			this->addBtn->Name = L"addBtn";
			this->addBtn->OverrideDefault->Border->Color1 = System::Drawing::Color::White;
			this->addBtn->OverrideDefault->Border->Color2 = System::Drawing::Color::White;
			this->addBtn->OverrideDefault->Border->ColorAngle = 45;
			this->addBtn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->addBtn->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->addBtn->OverrideDefault->Border->Rounding = 20;
			this->addBtn->OverrideDefault->Border->Width = 1;
			this->addBtn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->addBtn->Size = System::Drawing::Size(90, 30);
			this->addBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->addBtn->StateCommon->Back->Color2 = System::Drawing::Color::Blue;
			this->addBtn->StateCommon->Back->ColorAngle = 45;
			this->addBtn->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->addBtn->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->addBtn->StateCommon->Border->ColorAngle = 45;
			this->addBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->addBtn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->addBtn->StateCommon->Border->Rounding = 20;
			this->addBtn->StateCommon->Border->Width = 1;
			this->addBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->addBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->addBtn->StateCommon->Content->ShortText->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Form;
			this->addBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 6, System::Drawing::FontStyle::Bold));
			this->addBtn->StatePressed->Border->Color1 = System::Drawing::Color::White;
			this->addBtn->StatePressed->Border->Color2 = System::Drawing::Color::White;
			this->addBtn->StatePressed->Border->ColorAngle = 135;
			this->addBtn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->addBtn->StatePressed->Border->Rounding = 20;
			this->addBtn->StatePressed->Border->Width = 1;
			this->addBtn->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->addBtn->StateTracking->Border->Color2 = System::Drawing::Color::White;
			this->addBtn->StateTracking->Border->ColorAngle = 45;
			this->addBtn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->addBtn->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->addBtn->StateTracking->Border->Rounding = 20;
			this->addBtn->StateTracking->Border->Width = 1;
			this->addBtn->TabIndex = 6;
			this->addBtn->Values->Text = L"Show";
			this->addBtn->Click += gcnew System::EventHandler(this, &Catalogo::addBtn_Click);
			// 
			// flow
			// 
			this->flow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->flow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flow.BackgroundImage")));
			this->flow->Location = System::Drawing::Point(13, 168);
			this->flow->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->flow->Name = L"flow";
			this->flow->Size = System::Drawing::Size(704, 287);
			this->flow->TabIndex = 5;
			this->flow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Catalogo::flowLayoutPanel2_Paint);
			// 
			// ran
			// 
			this->ran->ContextMenuStrip = this->strip;
			this->ran->DropDownPosition = ComponentFactory::Krypton::Toolkit::VisualOrientation::Left;
			this->ran->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
			this->ran->Location = System::Drawing::Point(91, 4);
			this->ran->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->ran->Name = L"ran";
			this->ran->Size = System::Drawing::Size(671, 71);
			this->ran->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
			this->ran->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ran->StateCommon->Back->ColorAngle = 45;
			this->ran->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
			this->ran->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->ran->StateCommon->Border->Rounding = 20;
			this->ran->StateCommon->Border->Width = 1;
			this->ran->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ran->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->ran->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->ran->StateCommon->Content->ShortText->ColorAngle = 45;
			this->ran->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
			this->ran->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ran->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->ran->TabIndex = 10;
			this->ran->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
			this->ran->Values->Text = L"testButton";
			this->ran->Visible = false;
			this->ran->Click += gcnew System::EventHandler(this, &Catalogo::ran_Click_1);
			// 
			// strip
			// 
			this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->strip->Name = L"strip";
			this->strip->Size = System::Drawing::Size(61, 4);
			this->strip->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Catalogo::strip_Opening);
			// 
			// reproducirToolStripMenuItem
			// 
			this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
			this->reproducirToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// listasReproToolStripMenuItem
			// 
			this->listasReproToolStripMenuItem->Name = L"listasReproToolStripMenuItem";
			this->listasReproToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// lblNum
			// 
			this->lblNum->Location = System::Drawing::Point(431, 91);
			this->lblNum->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Palette = this->kryptonPalette1;
			this->lblNum->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->lblNum->Size = System::Drawing::Size(204, 24);
			this->lblNum->StateNormal->ShortText->Color1 = System::Drawing::Color::White;
			this->lblNum->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->lblNum->TabIndex = 7;
			this->lblNum->Values->Text = L"Numero de canciones ::";
			// 
			// numBtn2
			// 
			this->numBtn2->Location = System::Drawing::Point(431, 121);
			this->numBtn2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->numBtn2->Name = L"numBtn2";
			this->numBtn2->Size = System::Drawing::Size(99, 26);
			this->numBtn2->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->numBtn2->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->numBtn2->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom;
			this->numBtn2->StateCommon->Border->ImageAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Form;
			this->numBtn2->StateCommon->Border->Rounding = 2;
			this->numBtn2->StateCommon->Border->Width = 2;
			this->numBtn2->StateCommon->Content->Color1 = System::Drawing::Color::White;
			this->numBtn2->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numBtn2->TabIndex = 10;
			// 
			// kryptonLabel2
			// 
			this->kryptonLabel2->Location = System::Drawing::Point(42, 91);
			this->kryptonLabel2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->kryptonLabel2->Name = L"kryptonLabel2";
			this->kryptonLabel2->Palette = this->kryptonPalette1;
			this->kryptonLabel2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->kryptonLabel2->Size = System::Drawing::Size(252, 57);
			this->kryptonLabel2->StateNormal->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonLabel2->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30, System::Drawing::FontStyle::Bold));
			this->kryptonLabel2->TabIndex = 11;
			this->kryptonLabel2->Values->Text = L"CATALOGO\r\n";
			// 
			// flowListas
			// 
			this->flowListas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->flowListas->Location = System::Drawing::Point(13, 493);
			this->flowListas->Name = L"flowListas";
			this->flowListas->Size = System::Drawing::Size(704, 109);
			this->flowListas->TabIndex = 13;
			this->flowListas->Visible = false;
			// 
			// flowListasLbl
			// 
			this->flowListasLbl->Location = System::Drawing::Point(13, 463);
			this->flowListasLbl->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->flowListasLbl->Name = L"flowListasLbl";
			this->flowListasLbl->Palette = this->kryptonPalette1;
			this->flowListasLbl->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->flowListasLbl->Size = System::Drawing::Size(317, 24);
			this->flowListasLbl->StateNormal->ShortText->Color1 = System::Drawing::Color::White;
			this->flowListasLbl->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold));
			this->flowListasLbl->TabIndex = 14;
			this->flowListasLbl->Values->Text = L"Seleccione la lista a agregar cancion: ";
			this->flowListasLbl->Visible = false;
			// 
			// kryptonTextBox1
			// 
			this->kryptonTextBox1->Location = System::Drawing::Point(32, 4);
			this->kryptonTextBox1->Multiline = true;
			this->kryptonTextBox1->Name = L"kryptonTextBox1";
			this->kryptonTextBox1->Size = System::Drawing::Size(100, 0);
			this->kryptonTextBox1->TabIndex = 15;
			this->kryptonTextBox1->Text = L"kryptonTextBox1";
			// 
			// Catalogo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->kryptonTextBox1);
			this->Controls->Add(this->flowListasLbl);
			this->Controls->Add(this->flowListas);
			this->Controls->Add(this->ran);
			this->Controls->Add(this->kryptonLabel2);
			this->Controls->Add(this->addBtn);
			this->Controls->Add(this->numBtn2);
			this->Controls->Add(this->lblNum);
			this->Controls->Add(this->flow);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"Catalogo";
			this->Size = System::Drawing::Size(762, 614);
			this->Load += gcnew System::EventHandler(this, &Catalogo::Catalogo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Catalogo_Load(System::Object^ sender, System::EventArgs^ e) {

		
	}

	private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		

	}
			  public:
			   String^ idUrl; 
			   String^ Artist;
			   String^ SongName;
				const char* ID; 
			private:
				void setID(const char* id) {
					ID = id;
				}
				const char* getID() {
					return ID;
				}
				void setIDUrl(String^ id) {
					idUrl = id;
				}
				String^ getIDUrl() {
					return idUrl;
				}
				void setArtist(String^ name) {
					Artist = name;
				}
				String^ getArtist() {
					return Artist;
				}
				void setSong(String^ song) {
					SongName = song;
				}
				String^ getSong() {
					return SongName;
				}
				int repro = 0;

	   private: System::Void drop_Click(System::Object^ sender, System::EventArgs^ e) {
		   ComponentFactory::Krypton::Toolkit::KryptonDropButton^ testing = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonDropButton^>(sender);

			//testing->Click -= drop_Click;
		

			String^ tID = testing->AccessibleName;
			String^ tArtist = testing->Name;
			String^ tSongName = testing->Values->ExtraText;


			setIDUrl(tID);
			setArtist(tArtist);
			setSong(tSongName);

			testing->Click -= gcnew System::EventHandler(this, &Catalogo::drop_Click);
			repro = 0;
	   }

			
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		addBtn->Visible = false; numBtn2->Visible = false; lblNum->Visible = false;
		flow->Visible = true;

		
			SeccionButtonLista btnLista;

			System::String^ text = numBtn2->Text;
			std::string newS = msclr::interop::marshal_as<std::string>(text);
			int num = stoi(newS);


			StreamReader^ DataIn = File::OpenText("C:/Users/Administrator/source/repos/Spotify/SpotifyApp/Resources/data.txt");
			String^ DataStr;
			int count = 0;
			array<String^>^ result;
			
			for (int i = 0; i < num; i++)
			{

				while ((DataStr = DataIn->ReadLine()) != nullptr && count != num+1)
				{
					count++;
					if (count == 1)
						break;
					else
						result = DataStr->Split(',');

					ComponentFactory::Krypton::Toolkit::KryptonDropButton^ drop = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

					System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					drop->ContextMenuStrip = this->strip;

					// strip
					this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
					this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
					this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listasReproToolStripMenuItem }); 
					this->strip->Name = L"strip";
					this->strip->Size = System::Drawing::Size(181, 48);
					// reproducirToolStripMenuItem
					this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
					this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->reproducirToolStripMenuItem->Text = L"Reproducir";
					this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Catalogo::reproducirToolStripMenuItem_Click);
					// 
					// listasReproToolStripMenuItem
					this->listasReproToolStripMenuItem->Name = L"listasReproToolStripMenuItem";
					this->listasReproToolStripMenuItem->Size = System::Drawing::Size(180, 22);
					this->listasReproToolStripMenuItem->Text = L"Agregar a Listas de Reproduccion";
					this->listasReproToolStripMenuItem->Click += gcnew System::EventHandler(this, &Catalogo::listasReproToolStripMenuItem_Click);
					// 
					drop->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
					drop->Location = System::Drawing::Point(2, 3);
					drop->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
					drop->Name = L"drop";
					drop->Size = System::Drawing::Size(671, 71);
					drop->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
					drop->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
					drop->StateCommon->Back->ColorAngle = 45;
					drop->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
					drop->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
						| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
						| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
					drop->StateCommon->Border->Rounding = 20;
					drop->StateCommon->Border->Width = 1;
					drop->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
					drop->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
					drop->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
					drop->StateCommon->Content->ShortText->ColorAngle = 45;
					drop->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
					drop->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
						System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					drop->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
					drop->TabIndex = 3;
					drop->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
					drop->Values->Text = L"testButton";

					//MessageBox::Show(test, "Error", MessageBoxButtons::OK);
				
					//bug: se abre la info de un elemento anterior y se abre n cantidad de veces las ventanas
					
					drop->AccessibleName = result[7];
					drop->Name = result[2];
					drop->Values->ExtraText = result[13];

					drop->Text = result[2]+"\n";
					drop->Text += result[13];

					drop->Click += gcnew System::EventHandler(this, &Catalogo::drop_Click);

					String^ tID = result[7];
					std::string ID = msclr::interop::marshal_as<std::string>(tID);
					String^ tArtist = result[2];
					std::string Artist = msclr::interop::marshal_as<std::string>(tArtist);
					String^ tSongName = result[13];
					std::string SongName = msclr::interop::marshal_as<std::string>(tSongName);

					const char* cID = ID.c_str();
					const char* cArtist = Artist.c_str();
					const char* cSongName = SongName.c_str();


					btnLista.add(drop,cID,cArtist,cSongName);
					flow->Controls->Add(drop);

					
				}
				flow->AutoScroll = true;
			}
	}



private: System::Void kryptonDropButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ran_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

	 
private: System::Void reproducirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

//ComponentFactory::Krypton::Toolkit::KryptonDropButton^ testing = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonDropButton^>(sender);

	if (repro==0)
	{

		String^ idN = "https://open.spotify.com/track/" + getIDUrl();
		System::Diagnostics::Process::Start("MicrosoftEdge.exe", idN);
		repro++;
	}
		
			//reproducirToolStripMenuItem->Click -= gcnew System::EventHandler(this, &Catalogo::reproducirToolStripMenuItem_Click);

		

}
	   public:
		   static const char* lista;
	private: System::Void list_Click(System::Object^ sender, System::EventArgs^ e) {
		flowListas->Controls->Clear();
		repro++;
		ComponentFactory::Krypton::Toolkit::KryptonButton^ testing = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonButton^>(sender);
		std::string nombreLista = msclr::interop::marshal_as<std::string>(testing->Text);
		lista = nombreLista.c_str();


		    std::string ID = msclr::interop::marshal_as<std::string>(getIDUrl());
			std::string Artist = msclr::interop::marshal_as<std::string>(getArtist());
			std::string SongName = msclr::interop::marshal_as<std::string>(getSong());
		    const char* cID = ID.c_str();
			const char* cArtist = Artist.c_str();
			const char* cSongName = SongName.c_str();
			const char* cNombreLista = nombreLista.c_str();
			String^ url = gcnew String(cID);
			ListasRepro^ ls = gcnew ListasRepro;

			MessageBox::Show("URL", url, MessageBoxButtons::OK);
			ls->agregar(cNombreLista,cID, cArtist, cSongName);
	        

			structCancion song;
			infoLista info;

			string id = cID;
			string art = cArtist;
			string can = cSongName;
			

			String^ idd = gcnew String(id.c_str());
			String^ artt = gcnew String(art.c_str());
			String^ cann = gcnew String(can.c_str());

			////agg info de lista
			////nombre lista
			//strcpy_s(info.nombreLista, strlen(cNombreLista) + 1, cNombreLista);

			////hora y fecha
			//const auto now = std::chrono::system_clock::now();
			//time_t tm = time(NULL);
			//struct tm* curtime = localtime(&tm);
			//strcpy_s(info.fechaHoraCreacion, strlen(asctime(curtime)) + 1, asctime(curtime));
			//string hora = info.fechaHoraCreacion;
			//String^ horaa = gcnew String(hora.c_str());
			repro++;

		if(repro>0){
			flowListasLbl->Visible = false;
			flowListas->Visible = false;
			flowListas->Controls->Clear();
			repro = 0;
		}
		
		testing->Click -= gcnew System::EventHandler(this, &Catalogo::list_Click);

	}



	private: System::Void listasReproToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	/*	
		StreamReader^ DataIn = File::OpenText("ListaBotones.txt");
		String^ DataStr;
		int count = 0;
		array<String^>^ result;*/
	

		
		

		if (repro==0)
		{
			flowListas->Visible = true;
			flowListasLbl->Visible = true;
			ifstream botones("ListButtons.bin", ios::in | ios::binary);
			botones.seekg(0, ios::beg);
			btns reading;
			botones.read(reinterpret_cast<char*>(&reading), sizeof(btns));
			ListasRepro^ le = gcnew ListasRepro;
			le->a->Count;

			System::String^ text = numBtn2->Text;
			String^ btn;
			std::string newS = msclr::interop::marshal_as<std::string>(text);
			int num = stoi(newS);
			int numd;
			while (!botones.eof())
			{
				ComponentFactory::Krypton::Toolkit::KryptonButton^ list = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());;

				btn = gcnew String(reading.nombreLista);
				list->Text = btn;


				flowListas->Controls->Add(list);
				list->Click += gcnew System::EventHandler(this, &Catalogo::list_Click);
			
				botones.read(reinterpret_cast<char*>(&reading), sizeof(btns));
				
			}
			this->Controls->Add(flowListas);
			botones.close();
			repro++;
		}
			
		
		
				
			
		
		//if (repro==0)
		//{
		//	flowListas->Visible = true;
		//	flowListasLbl->Visible = true;
		//	
		//	while ((DataStr = DataIn->ReadLine()) != nullptr)
		//	{
		//		ComponentFactory::Krypton::Toolkit::KryptonButton^ list = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
		//		result = DataStr->Split(',');
		//		list->Text = result[0];
		//		flowListas->Controls->Add(list);

		//		list->Click += gcnew System::EventHandler(this, &Catalogo::list_Click);

		//		this->Controls->Add(flow);
		//		//listSelectBtn->Items->Add(result[0]);

		//	}
		//	repro++;
		//}
		
			
		flowListas->AutoScroll = true;
		//btnLista.add(drop, cID, cArtist, cSongName);
		//flow->Controls->Add(drop);



}
private: System::Void strip_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
}
	;
 }


