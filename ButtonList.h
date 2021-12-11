#pragma once
#include <iostream>
namespace SpotifyApp {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ComponentFactory::Krypton::Toolkit;
	/// <summary>
	/// Summary for ButtonList
	/// </summary>
	public ref class ButtonList : public KryptonForm
	{
	public:
		inline ButtonList::ButtonList() 
		{
			InitializeComponent();
			dropButton = gcnew KryptonDropButton();
			siguiente = nullptr;
			anterior = nullptr;

			ID = new char[1];
			ID[0] = '/0';

			artist = new char[1];
			artist[0] = '/0';

			songName = new char[1];
			songName[0] = '/0';
		}
		inline ButtonList::ButtonList(KryptonDropButton^ drop, const  char* id, const char* art, const char* song, ButtonList^ sig, ButtonList^ ant)
		{
			
			dropButton = drop;
			siguiente = sig;
			anterior = ant;

			ID = new char[strlen(id) + 1];
			strcpy_s(ID, strlen(id) + 1, id);

			artist = new char[strlen(art) + 1];
			strcpy_s(artist, strlen(art) + 1, art);

			songName = new char[strlen(song) + 1];
			strcpy_s(songName, strlen(song) + 1, song);
		}

		inline void ButtonList::setSiguiente(ButtonList^ sig)
		{
			siguiente = sig;
		}

		inline ButtonList^ ButtonList::getSiguiente()
		{
			return siguiente;
		}

		inline void ButtonList::setAnterior(ButtonList^ ant)
		{
			anterior = ant;
		}

		inline ButtonList^ ButtonList::getAnterior()
		{
			return anterior;
		}

		inline void ButtonList::setID(char* id)
		{
			ID = id;
		}

		inline const char* ButtonList::getID()
		{
			return ID;
		}

		inline void ButtonList::setArtist(char* art)
		{
			artist = art;
		}

		inline const char* ButtonList::getArtist()
		{
			return artist;
		}

		inline void ButtonList::setSongName(char* song)
		{
			songName = song;
		}

		inline const char* ButtonList::getSongName()
		{
			return songName;
		}

	/*	ButtonList();
		ButtonList(KryptonDropButton^,ButtonList^,ButtonList^);
		void setSiguiente(ButtonList^);
		ButtonList^ getSiguiente();

		void setAnterior(ButtonList^);
		ButtonList^ getAnterior();*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ButtonList()
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
		ButtonList^ siguiente, ^ anterior;
		KryptonDropButton^ dropButton;
		char* ID;
		char* artist;
		char* songName;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"ButtonList";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	
	
	};
}
