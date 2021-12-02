#pragma once

namespace SpotifyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomeScreen
	/// </summary>
	public ref class WelcomeScreen : public System::Windows::Forms::Form
	{
	public:
		WelcomeScreen(void)
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
		~WelcomeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ CatalogoLabel;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Catalogo_Button;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ListaReproButton;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ReproducirButton;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ AnimoButton;

	protected:

	protected:
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
			this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
			this->CatalogoLabel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->Catalogo_Button = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->ListaReproButton = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->ReproducirButton = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->AnimoButton = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->SuspendLayout();
			// 
			// CatalogoLabel
			// 
			this->CatalogoLabel->Location = System::Drawing::Point(386, 131);
			this->CatalogoLabel->Name = L"CatalogoLabel";
			this->CatalogoLabel->Palette = this->kryptonPalette1;
			this->CatalogoLabel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->CatalogoLabel->Size = System::Drawing::Size(151, 20);
			this->CatalogoLabel->TabIndex = 0;
			this->CatalogoLabel->Values->Text = L"Welcome Back, Username";
			// 
			// Catalogo_Button
			// 
			this->Catalogo_Button->Location = System::Drawing::Point(72, 82);
			this->Catalogo_Button->Name = L"Catalogo_Button";
			this->Catalogo_Button->Size = System::Drawing::Size(170, 25);
			this->Catalogo_Button->TabIndex = 1;
			this->Catalogo_Button->Values->Text = L"Catalago de Canciones";
			// 
			// ListaReproButton
			// 
			this->ListaReproButton->Location = System::Drawing::Point(72, 153);
			this->ListaReproButton->Name = L"ListaReproButton";
			this->ListaReproButton->Size = System::Drawing::Size(170, 25);
			this->ListaReproButton->TabIndex = 2;
			this->ListaReproButton->Values->Text = L"Mis listas de Reproduccion";
			// 
			// ReproducirButton
			// 
			this->ReproducirButton->Location = System::Drawing::Point(72, 225);
			this->ReproducirButton->Name = L"ReproducirButton";
			this->ReproducirButton->Size = System::Drawing::Size(90, 25);
			this->ReproducirButton->TabIndex = 3;
			this->ReproducirButton->Values->Text = L"Reproducir";
			// 
			// AnimoButton
			// 
			this->AnimoButton->Location = System::Drawing::Point(72, 287);
			this->AnimoButton->Name = L"AnimoButton";
			this->AnimoButton->Size = System::Drawing::Size(216, 25);
			this->AnimoButton->TabIndex = 4;
			this->AnimoButton->Values->Text = L"Descubrir segun el estado de animo";
			// 
			// WelcomeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(682, 353);
			this->Controls->Add(this->AnimoButton);
			this->Controls->Add(this->ReproducirButton);
			this->Controls->Add(this->ListaReproButton);
			this->Controls->Add(this->Catalogo_Button);
			this->Controls->Add(this->CatalogoLabel);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"WelcomeScreen";
			this->Text = L"WelcomeScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void kryptonPalette1_PalettePaint(System::Object^ sender, ComponentFactory::Krypton::Toolkit::PaletteLayoutEventArgs^ e) {
	}
	};
}
