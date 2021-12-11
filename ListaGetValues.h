#pragma once

namespace SpotifyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListaGetValues
	/// </summary>
	public ref class ListaGetValues : public System::Windows::Forms::Form
	{
	public:
		ListaGetValues(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		inline void ListaGetValues::setID(String^ d)
		{
			ID = d;
		}

		inline void ListaGetValues::setArtist(String^ a)
		{
			Artist = a;
		}

		inline void ListaGetValues::setSong(String^ s)
		{
			Song = s;
		}

		inline String^ ListaGetValues::getID()
		{
			return ID;
		}

		inline String^ ListaGetValues::getArtist()
		{
			return Artist;
		}

		inline String^ ListaGetValues::getSong()
		{
			return Song;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ListaGetValues()
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

		String^ ID;
		String^ Artist;
		String^ Song;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"ListaGetValues";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}
