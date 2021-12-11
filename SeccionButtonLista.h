#pragma once
#include "ButtonList.h"

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
	/// Summary for SeccionButtonLista
	/// </summary>
	public ref class SeccionButtonLista : public KryptonForm
	{
	public:
		SeccionButtonLista(void)
		{
			InitializeComponent();
			primero = nullptr;
			ultimo = nullptr; 
		}
	public:
		inline bool SeccionButtonLista::estaVacia()
		{
			return primero == nullptr;
		}
		inline void SeccionButtonLista::add(KryptonDropButton^ btn, const char* id, const char* art, const char* song)
		{

			ButtonList^ nuevo = gcnew ButtonList(btn,id,art,song,nullptr,nullptr);
			if (estaVacia())
			{
				primero = nuevo;
				ultimo = nuevo;
			}
			else {
				primero->setSiguiente(nuevo);
				nuevo->setAnterior(ultimo);
				ultimo = nuevo;
			}

			primero->setAnterior(ultimo);
			ultimo->setSiguiente(primero);
			//throw gcnew System::NotImplementedException();
		}
	
		/*SeccionButtonLista();
		bool estaVacia();
		void add(KryptonDropButton^);*/
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SeccionButtonLista()
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
		ButtonList^ primero, ^ultimo;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"SeccionButtonLista";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}
