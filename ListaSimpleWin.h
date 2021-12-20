#pragma once
//#include <iostream>
//#include <stdlib.h>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <sstream>
//#include "structLista.h"
//#include "NodoWin.h"
//#include "setListaNombre.h"
//#include  <msclr/marshal_cppstd.h>
//using std::vector;  using std::string;
//using namespace msclr::interop;
//using namespace System;
//using namespace System::Collections::Generic;
//using namespace System::IO;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;
//using std::ofstream;
//using std::ifstream;
//using std::ios;
//using std::cin;
//
//namespace SpotifyApp {
//
//
//	/// <summary>
//	/// Summary for ListaSimpleWin
//	/// </summary>
//	public ref class ListaSimpleWin : public System::Windows::Forms::Form
//	{
//	public:
//		ListaSimpleWin(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//
//		inline bool ListaSimpleWin::estaVacia()
//		{
//			return primero == nullptr;
//		}
//
//		inline void ListaSimpleWin::agregar(const char* id, const char* art, const char* s)
//		{
//			NodoWin^ nuevo = gcnew NodoWin(id, art, s, nullptr);
//			
//
//			NodoWin^ actual = primero;
//			if (estaVacia())
//			{
//				primero = nuevo;
//			}
//			else {
//				while (actual->getSiguiente() != nullptr) {
//					actual = actual->getSiguiente();
//					
//				}
//				actual->setSiguiente(nuevo);
//			}
//		}
//
//		inline void ListaSimpleWin::escribir()
//		{
//			NodoWin^ actual = primero;
//			structCancion song;
//
//			setListaNombre l;
//			std::string name = l.getNombre();
//
//			ofstream listaArchivo(name + ".bin", ios::binary | ios::out| ios::app);
//
//			listaArchivo.write(reinterpret_cast<const char*>(&song), sizeof(structCancion));
//
//			while (actual != nullptr)
//			{
//
//				strcpy_s(song.id, strlen(actual->getID()) + 1, actual->getID());
//				strcpy_s(song.artist, strlen(actual->getArtist()) + 1, actual->getArtist());
//				strcpy_s(song.cancion, strlen(actual->getSongName()) + 1, actual->getSongName());
//
//				listaArchivo.write(reinterpret_cast<const char*>(&song), sizeof(structCancion));
//				actual = actual->getSiguiente();
//			}
//			listaArchivo.close();
//		}
//
//
//
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~ListaSimpleWin()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container ^components;
//		NodoWin^ primero;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			this->components = gcnew System::ComponentModel::Container();
//			this->Size = System::Drawing::Size(300,300);
//			this->Text = L"ListaSimpleWin";
//			this->Padding = System::Windows::Forms::Padding(0);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//		}
//#pragma endregion
//	};
//}
