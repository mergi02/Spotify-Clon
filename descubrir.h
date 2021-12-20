#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
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
	/// Summary for descubrir
	/// </summary>
	public ref class descubrir : public System::Windows::Forms::UserControl
	{
	public:
		descubrir(void)
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
		~descubrir()
		{
			if (components)
			{
				delete components;
			}
		}
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(descubrir::typeid));
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ lbl1;
	protected:

	protected:
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ chillBtn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ energeticBtn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ cheerfulBtn;


	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ romanticBtn;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ lbl2;


	private: System::Windows::Forms::ContextMenuStrip^ strip;
	private: System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem;
	private: System::Windows::Forms::FlowLayoutPanel^ flow;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ typeMoodLbl;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ volverBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(descubrir::typeid));
			this->lbl1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->chillBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->energeticBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->cheerfulBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->romanticBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->lbl2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->strip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flow = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->typeMoodLbl = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->volverBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->strip->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			resources->ApplyResources(this->lbl1, L"lbl1");
			this->lbl1->Name = L"lbl1";
			this->lbl1->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
			this->lbl1->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
			this->lbl1->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl1->Values->Text = resources->GetString(L"lbl1.Values.Text");
			// 
			// chillBtn
			// 
			resources->ApplyResources(this->chillBtn, L"chillBtn");
			this->chillBtn->Name = L"chillBtn";
			this->chillBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->chillBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->chillBtn->StateCommon->Back->ColorAngle = 45;
			this->chillBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->chillBtn->StateCommon->Border->Rounding = 30;
			this->chillBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->chillBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->chillBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chillBtn->Values->Text = resources->GetString(L"chillBtn.Values.Text");
			this->chillBtn->Click += gcnew System::EventHandler(this, &descubrir::chillBtn_Click);
			// 
			// energeticBtn
			// 
			resources->ApplyResources(this->energeticBtn, L"energeticBtn");
			this->energeticBtn->Name = L"energeticBtn";
			this->energeticBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->energeticBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->energeticBtn->StateCommon->Back->ColorAngle = 45;
			this->energeticBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->energeticBtn->StateCommon->Border->Rounding = 30;
			this->energeticBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->energeticBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->energeticBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->energeticBtn->Values->Text = resources->GetString(L"energeticBtn.Values.Text");
			this->energeticBtn->Click += gcnew System::EventHandler(this, &descubrir::energeticBtn_Click_1);
			// 
			// cheerfulBtn
			// 
			resources->ApplyResources(this->cheerfulBtn, L"cheerfulBtn");
			this->cheerfulBtn->Name = L"cheerfulBtn";
			this->cheerfulBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cheerfulBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->cheerfulBtn->StateCommon->Back->ColorAngle = 45;
			this->cheerfulBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->cheerfulBtn->StateCommon->Border->Rounding = 30;
			this->cheerfulBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->cheerfulBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->cheerfulBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cheerfulBtn->Values->Text = resources->GetString(L"cheerfulBtn.Values.Text");
			this->cheerfulBtn->Click += gcnew System::EventHandler(this, &descubrir::cheerfulBtn_Click);
			// 
			// romanticBtn
			// 
			resources->ApplyResources(this->romanticBtn, L"romanticBtn");
			this->romanticBtn->Name = L"romanticBtn";
			this->romanticBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->romanticBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->romanticBtn->StateCommon->Back->ColorAngle = 45;
			this->romanticBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->romanticBtn->StateCommon->Border->Rounding = 30;
			this->romanticBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->romanticBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->romanticBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->romanticBtn->Values->Text = resources->GetString(L"romanticBtn.Values.Text");
			this->romanticBtn->Click += gcnew System::EventHandler(this, &descubrir::romanticBtn_Click);
			// 
			// lbl2
			// 
			resources->ApplyResources(this->lbl2, L"lbl2");
			this->lbl2->Name = L"lbl2";
			this->lbl2->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
			this->lbl2->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
			this->lbl2->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl2->Values->Text = resources->GetString(L"lbl2.Values.Text");
			// 
			// strip
			// 
			resources->ApplyResources(this->strip, L"strip");
			this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
			this->strip->Name = L"strip";
			// 
			// reproducirToolStripMenuItem
			// 
			this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
			resources->ApplyResources(this->reproducirToolStripMenuItem, L"reproducirToolStripMenuItem");
			// 
			// flow
			// 
			resources->ApplyResources(this->flow, L"flow");
			this->flow->Name = L"flow";
			// 
			// typeMoodLbl
			// 
			resources->ApplyResources(this->typeMoodLbl, L"typeMoodLbl");
			this->typeMoodLbl->Name = L"typeMoodLbl";
			this->typeMoodLbl->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
			this->typeMoodLbl->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
			this->typeMoodLbl->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->typeMoodLbl->Values->Text = resources->GetString(L"typeMoodLbl.Values.Text");
			// 
			// volverBtn
			// 
			resources->ApplyResources(this->volverBtn, L"volverBtn");
			this->volverBtn->Name = L"volverBtn";
			this->volverBtn->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->volverBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->volverBtn->StateCommon->Back->ColorAngle = 45;
			this->volverBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->volverBtn->StateCommon->Border->Rounding = 20;
			this->volverBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->volverBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->volverBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->volverBtn->Values->Text = resources->GetString(L"volverBtn.Values.Text");
			this->volverBtn->Click += gcnew System::EventHandler(this, &descubrir::volverBtn_Click);
			// 
			// descubrir
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->volverBtn);
			this->Controls->Add(this->typeMoodLbl);
			this->Controls->Add(this->flow);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->romanticBtn);
			this->Controls->Add(this->cheerfulBtn);
			this->Controls->Add(this->energeticBtn);
			this->Controls->Add(this->chillBtn);
			this->Controls->Add(this->lbl1);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Name = L"descubrir";
			this->Load += gcnew System::EventHandler(this, &descubrir::descubrir_Load);
			this->strip->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 public:
			 String^ idUrl;
			 String^ Artist;
			 String^ SongName;
			 const char* ID;
			private:
				void setIDUrl(String^ id) {
					idUrl = id;
				}
				String^ getIDUrl() {
					return idUrl;
				}
				int repro = 0;

	private: System::Void songBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ComponentFactory::Krypton::Toolkit::KryptonDropButton^ testing = dynamic_cast<ComponentFactory::Krypton::Toolkit::KryptonDropButton^>(sender);

		String^ tID = testing->AccessibleName;
		//String^ tArtist = testing->Name;
		//String^ tSongName = testing->Values->ExtraText;
		
		setIDUrl(tID);
		testing->Click -= gcnew System::EventHandler(this, &descubrir::songBtn_Click);
		
	}
	private: System::Void reproducirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (repro == 0)
		{

			String^ idN = "https://open.spotify.com/track/" + getIDUrl();
			System::Diagnostics::Process::Start("MicrosoftEdge.exe", idN);
			repro++;
		}
	}

	private: System::Void energeticBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		volverBtn->Visible = true;
		chillBtn->Visible = false;
		energeticBtn->Visible = false;
		romanticBtn->Visible = false;
		cheerfulBtn->Visible = false;
		flow->Visible = true;
		typeMoodLbl->Visible = true;
		typeMoodLbl->Text = "ENERGETIC MOOD SONGS ... ";
		ifstream archivoData("data.csv", ios::in);
		std::string DataStr;
		int count = 0;

		//List<String^>^ result = gcnew  List<String^>();
		array<String^>^ res;
		String^ aux;
		int num = 50;

		for (int i = 0; i < num; i++)
		{
			while (getline(archivoData, DataStr) && count != i + 1) {
				count++;
				if (count == 1)
					break;
				else
					aux = gcnew String(DataStr.c_str());
				res = aux->Split(',');


				ComponentFactory::Krypton::Toolkit::KryptonDropButton^ songBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

				System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				songBtn->ContextMenuStrip = this->strip;

				// strip
				this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
				this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
				this->strip->Name = L"strip";
				this->strip->Size = System::Drawing::Size(181, 48);
				// reproducirToolStripMenuItem
				this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
				this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->reproducirToolStripMenuItem->Text = L"Reproducir";
				this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &descubrir::reproducirToolStripMenuItem_Click);
				// 
				songBtn->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
				songBtn->Location = System::Drawing::Point(2, 3);
				songBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				songBtn->Name = L"songBtn";
				songBtn->Size = System::Drawing::Size(671, 71);
				songBtn->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
				songBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				songBtn->StateCommon->Back->ColorAngle = 45;
				songBtn->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
				songBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				songBtn->StateCommon->Border->Rounding = 20;
				songBtn->StateCommon->Border->Width = 1;
				songBtn->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
				songBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->ColorAngle = 45;
				songBtn->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
				songBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				songBtn->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
				songBtn->TabIndex = 3;
				songBtn->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
				songBtn->Values->Text = L"testButton";

				songBtn->AccessibleName = res[7];
				songBtn->Name = res[2];
				songBtn->Values->ExtraText = res[13];

				songBtn->Text = res[2] + "\n";
				songBtn->Text += res[13];


				String^ loudness = res[3];
				std::string newA = msclr::interop::marshal_as<std::string>(loudness);
				double numA = atof(newA.c_str());

				String^ acoustic = res[1];
				std::string newS = msclr::interop::marshal_as<std::string>(acoustic);
				double numS = atof(newS.c_str());

				
				if ( numA >0.6  && numS < 0.3)
				{
					flow->Controls->Add(songBtn);
				}
					

				
				songBtn->Click += gcnew System::EventHandler(this, &descubrir::songBtn_Click);

			}
	}
		flow->AutoScroll = true;
	};
	private: System::Void chillBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		volverBtn->Visible = true;
		chillBtn->Visible = false;
		energeticBtn->Visible = false;
		romanticBtn->Visible = false;
		cheerfulBtn->Visible = false;
		flow->Visible = true;
		typeMoodLbl->Visible = true;
		typeMoodLbl->Text = "CHILL MOOD SONGS ... ";
		ifstream archivoData("data.csv", ios::in);
		std::string DataStr;
		int count = 0;
		string artist;
		string song;
		//List<String^>^ result = gcnew  List<String^>();
		array<String^>^ res;
		array<String^>^ arts;
		array<String^>^ sng;
		String^ aux;
		String^ speechiness ;
		String^ acoustic;
		int num = 100;
		String^ artists;
		std::string newS;
		double numS;
		for (int i = 0; i < num; i++)
		{
			while (getline(archivoData, DataStr) && count != i + 1) {
			//getline(archivoData, DataStr);
			//std::stringstream input(DataStr);
				count++;
				if (count == 1)
					break;
				else
					aux = gcnew String(DataStr.c_str());
				res = aux->Split(',');
				arts = aux->Split('[',']');
				sng = aux->Split(',');

			//	arts = aux->Split(']');

			

				ComponentFactory::Krypton::Toolkit::KryptonDropButton^ songBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

				System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				songBtn->ContextMenuStrip = this->strip;

				// strip
				this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
				this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
				this->strip->Name = L"strip";
				this->strip->Size = System::Drawing::Size(181, 48);
				// reproducirToolStripMenuItem
				this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
				this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->reproducirToolStripMenuItem->Text = L"Reproducir";
				this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &descubrir::reproducirToolStripMenuItem_Click);
				// 
				songBtn->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
				songBtn->Location = System::Drawing::Point(2, 3);
				songBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				songBtn->Name = L"songBtn";
				songBtn->Size = System::Drawing::Size(671, 71);
				songBtn->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
				songBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				songBtn->StateCommon->Back->ColorAngle = 45;
				songBtn->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
				songBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				songBtn->StateCommon->Border->Rounding = 20;
				songBtn->StateCommon->Border->Width = 1;
				songBtn->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
				songBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->ColorAngle = 45;
				songBtn->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
				songBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				songBtn->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
				songBtn->TabIndex = 3;
				songBtn->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
				songBtn->Values->Text = L"testButton";

				
				artists = gcnew String(artist.c_str());

				songBtn->Name = res[2];
				

				songBtn->Text =arts[1] + "\n";

				if (res->Length == 20)
				{
					songBtn->Text += sng[13];
					songBtn->Values->ExtraText = sng[13];
					songBtn->AccessibleName = sng[7];
					speechiness = gcnew String(res[16]->ToString());
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());
				}
				else if (res->Length == 21) {
					songBtn->Text += sng[14];
					songBtn->Values->ExtraText = sng[14];
					songBtn->AccessibleName = sng[8];
					speechiness == res[17];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());
				}
				else if (res->Length == 22) {
					songBtn->Text += sng[15];
					songBtn->Values->ExtraText = sng[15];
					songBtn->AccessibleName = sng[9];
					speechiness == res[18];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());

				}
				else if (res->Length == 23) {
					songBtn->Text += sng[16];
					songBtn->Values->ExtraText = sng[16];
					songBtn->AccessibleName = sng[10];
					speechiness == res[19];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());

				}
				else if (res->Length == 24) {
					songBtn->Text += sng[17];
					songBtn->Values->ExtraText = sng[17];
					songBtn->AccessibleName = sng[11];
					speechiness == res[20];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());

				}
				else if (res->Length == 25) {
					songBtn->Text += sng[18];
					songBtn->Values->ExtraText = sng[18];
					songBtn->AccessibleName = sng[12];
					speechiness == res[21];

					newS = msclr::interop::marshal_as<std::string>(speechiness);
					numS = atof(newS.c_str());
				}

			    acoustic = res[1];
				std::string newA = msclr::interop::marshal_as<std::string>(acoustic);
				double numA = atof(newA.c_str());


				


				if (numA > 0.6 && numS >= 0.06)
				{
					flow->Controls->Add(songBtn);
				}


				songBtn->Click += gcnew System::EventHandler(this, &descubrir::songBtn_Click);

			}
		}
		flow->AutoScroll = true;
	};

	private: System::Void energeticBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		volverBtn->Visible = true; chillBtn->Visible = false;
		energeticBtn->Visible = false;
		romanticBtn->Visible = false;
		cheerfulBtn->Visible = false;
		flow->Visible = true;
		typeMoodLbl->Visible = true;
		typeMoodLbl->Text = "ENERGETIC MOOD SONGS ... ";

		ifstream archivoData("data.csv", ios::in);
		std::string DataStr;
		int count = 0;

		array<String^>^ res;
		array<String^>^ arts;
		array<String^>^ sng;
		String^ aux;
		String^ danceability;
		String^ speechiness;
		String^ acoustic;
		String^ loudness;
		int num = 100;
		String^ artists;

		string newS,newD,newL;
		double numS, numD, numL;

		//List<String^>^ result = gcnew  List<String^>();
		

		for (int i = 0; i < num; i++)
		{
			while (getline(archivoData, DataStr) && count != i + 1) {
				//getline(archivoData, DataStr);
				//std::stringstream input(DataStr);
				count++;
				if (count == 1)
					break;
				else
					aux = gcnew String(DataStr.c_str());
				res = aux->Split(',');
				arts = aux->Split('[', ']');
				sng = aux->Split(',');

				//	arts = aux->Split(']');



				ComponentFactory::Krypton::Toolkit::KryptonDropButton^ songBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

				System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				songBtn->ContextMenuStrip = this->strip;

				// strip
				this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
				this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
				this->strip->Name = L"strip";
				this->strip->Size = System::Drawing::Size(181, 48);
				// reproducirToolStripMenuItem
				this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
				this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->reproducirToolStripMenuItem->Text = L"Reproducir";
				this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &descubrir::reproducirToolStripMenuItem_Click);
				// 
				songBtn->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
				songBtn->Location = System::Drawing::Point(2, 3);
				songBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				songBtn->Name = L"songBtn";
				songBtn->Size = System::Drawing::Size(671, 71);
				songBtn->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
				songBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				songBtn->StateCommon->Back->ColorAngle = 45;
				songBtn->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
				songBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				songBtn->StateCommon->Border->Rounding = 20;
				songBtn->StateCommon->Border->Width = 1;
				songBtn->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
				songBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->ColorAngle = 45;
				songBtn->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
				songBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				songBtn->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
				songBtn->TabIndex = 3;
				songBtn->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
				songBtn->Values->Text = L"testButton";



				songBtn->Name = res[2];
				songBtn->Text = arts[1] + "\n";

				if (res->Length == 20)
				{
					songBtn->Text += sng[13];
					songBtn->Values->ExtraText = sng[13];
					songBtn->AccessibleName = sng[7];

					speechiness = gcnew String(res[16]->ToString());
					 newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability = res[3];
					newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness= gcnew String(res[12]->ToString());
					newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}
				else if (res->Length == 21) {
					songBtn->Text += sng[14];
					songBtn->Values->ExtraText = sng[14];
					songBtn->AccessibleName = sng[8];
					speechiness = res[17];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability = res[4];
					newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness = res[11];
					 newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}
				else if (res->Length == 22) {
					songBtn->Text += sng[15];
					songBtn->Values->ExtraText = sng[15];
					songBtn->AccessibleName = sng[9];
					speechiness = res[18];
					 newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability == res[5];
					 newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness == res[13];
					newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}
				else if (res->Length == 23) {
					songBtn->Text += sng[16];
					songBtn->Values->ExtraText = sng[16];
					songBtn->AccessibleName = sng[10];
					speechiness = res[19];
				newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability = res[6];
					std::string newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness = res[14];
					std::string newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}
				else if (res->Length == 24) {
					songBtn->Text += sng[17];
					songBtn->Values->ExtraText = sng[17];
					songBtn->AccessibleName = sng[11];
					speechiness = res[20];
					newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability = res[7];
					newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness = res[15];
					 newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}
				else if (res->Length == 25) {
					songBtn->Text += sng[18];
					songBtn->Values->ExtraText = sng[18];
					songBtn->AccessibleName = sng[12];
					speechiness = res[21];
					 newS = msclr::interop::marshal_as<std::string>(speechiness);
					 numS = atof(newS.c_str());

					danceability == res[8];
					 newD = msclr::interop::marshal_as<std::string>(danceability);
					 numD = atof(newD.c_str());

					loudness = res[16];

					 newL = msclr::interop::marshal_as<std::string>(loudness);
					 numL = atof(newL.c_str());
				}

			


				if (numD <=0.7 && numS < 0.3 && numL <=0.8 )
				{
					flow->Controls->Add(songBtn);
				}



				songBtn->Click += gcnew System::EventHandler(this, &descubrir::songBtn_Click);

			}
		}
		flow->AutoScroll = true;
	}
	private: System::Void romanticBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		volverBtn->Visible = true; chillBtn->Visible = false;
		energeticBtn->Visible = false;
		romanticBtn->Visible = false;
		cheerfulBtn->Visible = false;
		flow->Visible = true;
		typeMoodLbl->Visible = true;
		typeMoodLbl->Text = "ROMANTIC MOOD SONGS ... ";


		ifstream archivoData("data.csv", ios::in);
		std::string DataStr;
		int count = 0;

		//List<String^>^ result = gcnew  List<String^>();

		array<String^>^ res;
		array<String^>^ arts;
		array<String^>^ sng;
		String^ aux;
		String^ danceability;
		String^ speechiness;
		String^ acoustic;
		String^ loudness;
		int num = 100;
		String^ artists;
		for (int i = 0; i < num; i++)
		{
			while (getline(archivoData, DataStr) && count != i + 1) {
				//getline(archivoData, DataStr);
				//std::stringstream input(DataStr);
				count++;
				if (count == 1)
					break;
				else
					aux = gcnew String(DataStr.c_str());
				res = aux->Split(',');
				arts = aux->Split('[', ']');
				sng = aux->Split(',');

				//	arts = aux->Split(']');



				ComponentFactory::Krypton::Toolkit::KryptonDropButton^ songBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

				System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				songBtn->ContextMenuStrip = this->strip;

				// strip
				this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
				this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
				this->strip->Name = L"strip";
				this->strip->Size = System::Drawing::Size(181, 48);
				// reproducirToolStripMenuItem
				this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
				this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->reproducirToolStripMenuItem->Text = L"Reproducir";
				this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &descubrir::reproducirToolStripMenuItem_Click);
				// 
				songBtn->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
				songBtn->Location = System::Drawing::Point(2, 3);
				songBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				songBtn->Name = L"songBtn";
				songBtn->Size = System::Drawing::Size(671, 71);
				songBtn->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
				songBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
				songBtn->StateCommon->Back->ColorAngle = 45;
				songBtn->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
				songBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				songBtn->StateCommon->Border->Rounding = 20;
				songBtn->StateCommon->Border->Width = 1;
				songBtn->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
				songBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
				songBtn->StateCommon->Content->ShortText->ColorAngle = 45;
				songBtn->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
				songBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				songBtn->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
				songBtn->TabIndex = 3;
				songBtn->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
				songBtn->Values->Text = L"testButton";



				songBtn->Name = res[2];


				songBtn->Text = arts[1] + "\n";

				if (res->Length == 20)
				{
					songBtn->Text += sng[13];
					songBtn->Values->ExtraText = sng[13];
					songBtn->AccessibleName = sng[7];
					danceability = res[3];
				}
				else if (res->Length == 21) {
					songBtn->Text += sng[14];
					songBtn->Values->ExtraText = sng[14];
					songBtn->AccessibleName = sng[8];
					danceability = res[4];
				}
				else if (res->Length == 22) {
					songBtn->Text += sng[15];
					songBtn->Values->ExtraText = sng[15];
					songBtn->AccessibleName = sng[9];
					danceability = res[5];
				}
				else if (res->Length == 23) {
					songBtn->Text += sng[16];
					songBtn->Values->ExtraText = sng[16];
					songBtn->AccessibleName = sng[10];
					danceability = res[6];
				}
				else if (res->Length == 24) {
					songBtn->Text += sng[17];
					songBtn->Values->ExtraText = sng[17];
					songBtn->AccessibleName = sng[11];
					danceability = res[7];
				}
				else if (res->Length == 25) {
					songBtn->Text += sng[18];
					songBtn->Values->ExtraText = sng[18];
					songBtn->AccessibleName = sng[12];
					danceability = res[8];
				}

				acoustic = res[1];
				std::string newA = msclr::interop::marshal_as<std::string>(acoustic);
				double numA = atof(newA.c_str());


				std::string newD = msclr::interop::marshal_as<std::string>(danceability);
				double numS = atof(newD.c_str());



				//loudness = 0.819
				//danceability 0.73
				//acousticness 0.10
				if (numA <= 0.8 && numS < 0.4)
				{
					flow->Controls->Add(songBtn);
				}
			}

		}
		


		//songBtn->Click += gcnew System::EventHandler(this, &descubrir::songBtn_Click);
	  /*  for (int i = 0; i < result->Count; i++)
		{
			btn->Text = result[i];
			flow->Controls->Add(btn);
		}*/
	//}
			flow->AutoScroll = true;
	};

private: System::Void cheerfulBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	volverBtn->Visible = true;
	chillBtn->Visible = false;
	energeticBtn->Visible = false;
	romanticBtn->Visible = false;
	cheerfulBtn->Visible = false;
	flow->Visible = true;
	typeMoodLbl->Visible = true;
	typeMoodLbl->Text = "CHEERFUL MOOD SONGS ... ";

	ifstream archivoData("data.csv", ios::in);
	std::string DataStr;
	int count = 0;

	//List<String^>^ result = gcnew  List<String^>();

	array<String^>^ res;
	array<String^>^ arts;
	array<String^>^ sng;
	String^ aux;
	String^ danceability;
	String^ loudness;
	String^ liveness;
	int num = 100;
	String^ artists;
	for (int i = 0; i < num; i++)
	{
		while (getline(archivoData, DataStr) && count != i + 1) {
			//getline(archivoData, DataStr);
			//std::stringstream input(DataStr);
			count++;
			if (count == 1)
				break;
			else
				aux = gcnew String(DataStr.c_str());
			res = aux->Split(',');
			arts = aux->Split('[', ']');
			sng = aux->Split(',');

			//	arts = aux->Split(']');



			ComponentFactory::Krypton::Toolkit::KryptonDropButton^ songBtn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonDropButton());

			System::Windows::Forms::ToolStripMenuItem^ reproducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			System::Windows::Forms::ToolStripMenuItem^ listasReproToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			songBtn->ContextMenuStrip = this->strip;

			// strip
			this->strip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reproducirToolStripMenuItem });
			this->strip->Name = L"strip";
			this->strip->Size = System::Drawing::Size(181, 48);
			// reproducirToolStripMenuItem
			this->reproducirToolStripMenuItem->Name = L"reproducirToolStripMenuItem";
			this->reproducirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->reproducirToolStripMenuItem->Text = L"Reproducir";
			this->reproducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &descubrir::reproducirToolStripMenuItem_Click);
			// 
			songBtn->Images->Common = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Images.Common")));
			songBtn->Location = System::Drawing::Point(2, 3);
			songBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			songBtn->Name = L"songBtn";
			songBtn->Size = System::Drawing::Size(671, 71);
			songBtn->StateCommon->Back->Color1 = System::Drawing::Color::Lime;
			songBtn->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			songBtn->StateCommon->Back->ColorAngle = 45;
			songBtn->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::TopLeft;
			songBtn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			songBtn->StateCommon->Border->Rounding = 20;
			songBtn->StateCommon->Border->Width = 1;
			songBtn->StateCommon->Content->LongText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			songBtn->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			songBtn->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			songBtn->StateCommon->Content->ShortText->ColorAngle = 45;
			songBtn->StateCommon->Content->ShortText->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Dashed;
			songBtn->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			songBtn->StateCommon->Content->ShortText->MultiLine = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			songBtn->TabIndex = 3;
			songBtn->Values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ran.Values.Image")));
			songBtn->Values->Text = L"testButton";



			songBtn->Name = res[2];


			songBtn->Text = arts[1] + "\n";

			if (res->Length == 20)
			{
				songBtn->Text += sng[13];
				songBtn->Values->ExtraText = sng[13];
				songBtn->AccessibleName = sng[7];
				danceability = res[3];
				loudness = res[11];
				liveness = res[10];
			}
			else if (res->Length == 21) {
				songBtn->Text += sng[14];
				songBtn->Values->ExtraText = sng[14];
				songBtn->AccessibleName = sng[8];
				danceability = res[4];
				loudness = res[12];
				liveness = res[11];
			}
			else if (res->Length == 22) {
				songBtn->Text += sng[15];
				songBtn->Values->ExtraText = sng[15];
				songBtn->AccessibleName = sng[9];
				danceability = res[5];
				loudness = res[13];
				liveness = res[12];
			}
			else if (res->Length == 23) {
				songBtn->Text += sng[16];
				songBtn->Values->ExtraText = sng[16];
				songBtn->AccessibleName = sng[10];
				danceability = res[6];
				loudness = res[14];
				liveness = res[13];
			}
			else if (res->Length == 24) {
				songBtn->Text += sng[17];
				songBtn->Values->ExtraText = sng[17];
				songBtn->AccessibleName = sng[11];
				danceability = res[7];
				loudness = res[15];
				liveness = res[14];
			}
			else if (res->Length == 25) {
				songBtn->Text += sng[18];
				songBtn->Values->ExtraText = sng[18];
				songBtn->AccessibleName = sng[10];
				danceability = res[8];
				loudness = res[16];
				liveness = res[15];
			}



			std::string newD = msclr::interop::marshal_as<std::string>(danceability);
			double numD = atof(newD.c_str());


			std::string newL = msclr::interop::marshal_as<std::string>(loudness);
			double numL = atof(newL.c_str());


			std::string newS = msclr::interop::marshal_as<std::string>(liveness);
			double numLiv = atof(newS.c_str());

			//loudness = 0.819
			//danceability 0.73
			//acousticness 0.10
			if (numD <= 0.6 && numL <= 0.8 && numLiv <0.4)
			{
				flow->Controls->Add(songBtn);
			}

			songBtn->Click += gcnew System::EventHandler(this, &descubrir::songBtn_Click);

		}
	}
	flow->AutoScroll = true;
}
private: System::Void volverBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	volverBtn->Visible = false;
	flow->Visible = false;
	typeMoodLbl->Visible = false;
	chillBtn->Visible = true;
	energeticBtn->Visible = true;
	romanticBtn->Visible = true;
	cheerfulBtn->Visible = true;
	lbl1->Visible = true;
	lbl2->Visible = true;
}
private: System::Void descubrir_Load(System::Object^ sender, System::EventArgs^ e) {
	volverBtn->Visible = false;
}
};
}