#pragma once
#include <iostream>
namespace SpotifyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NodoWin
	/// </summary>
	public ref class NodoWin : public System::Windows::Forms::Form
	{
	public:
		NodoWin(void)
		{
			InitializeComponent();
			ID = new char[1];
			ID[0] = '/0';

			artist = new char[1];
			artist[0] = '/0';

			songName = new char[1];
			songName[0] = '/0';

			lista = new char[1];
			lista[0] = '/0';

			siguiente = nullptr;
		}


		inline NodoWin::NodoWin(const char* li,const char* _ID, const char* _art, const char* _song, NodoWin^ _sig)
		{
			lista = new char[strlen(li) + 1];
			strcpy_s(lista, strlen(li) + 1, li);

			ID = new char[strlen(_ID) + 1];
			strcpy_s(ID, strlen(_ID) + 1, _ID);

			artist = new char[strlen(_art) + 1];
			strcpy_s(artist, strlen(_art) + 1, _art);

			songName = new char[strlen(_song) + 1];
			strcpy_s(songName, strlen(_song) + 1, _song);

			siguiente = _sig;
		}
		inline void NodoWin::setNombre(char* l)
		{
			strcpy_s(lista, strlen(l) + 1, l);

		}

		inline const char* NodoWin::getNombre()
		{
			return lista;
		}
		inline void NodoWin::setID(char* id)
		{
			strcpy_s(ID, strlen(id)+1, id);

		}

		inline const char* NodoWin::getID()
		{
			return ID;
		}

		inline void NodoWin::setArtist(char* art)
		{
			strcpy_s(artist, strlen(art)+1, art);
		}

		inline const char* NodoWin::getArtist()
		{
			return artist;
		}

		inline void NodoWin::setSongName(char* s)
		{
			strcpy_s(songName, strlen(s)+1, songName);
		}

		inline const char* NodoWin::getSongName()
		{
			return songName;
		}

		inline void NodoWin::setSiguiente(NodoWin^ sig)
		{
			siguiente = sig;
		}

		inline NodoWin^ NodoWin::getSiguiente()
		{
			return siguiente;
		}

	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NodoWin()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		char* ID;
		char* artist;
		char* songName;
		char* lista;
		NodoWin^ siguiente;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"NodoWin";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}
