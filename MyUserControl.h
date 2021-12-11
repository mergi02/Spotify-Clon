#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//using namespace System::String;

namespace SpotifyApp {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();

			/*DataGridViewButtonColumn^ colArtist = gcnew DataGridViewButtonColumn;
			colArtist->Name = "Artists";
			DataGridViewCell^ cellArtist = gcnew DataGridViewTextBoxCell;
			colArtist->CellTemplate = cellArtist;

			
			DataGridViewColumn^ colSongs = gcnew DataGridViewColumn;
			colSongs->Name = "Songs";
			DataGridViewCell^ cellSongs = gcnew DataGridViewTextBoxCell;
			colSongs->CellTemplate = cellSongs;

			grid->Columns->Add(colArtist);
			grid->Columns->Add(colSongs);

			DataGridViewRow^ rows = grid->Rows[grid->Rows->Add()];
			rows->Cells[0]->Value = "Chase";
			rows->Cells[1]->Value = "OHMAMI";

			Controls->Add(grid);*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ grid;
	protected:




	private: System::Windows::Forms::TextBox^ textBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			this->SuspendLayout();
			// 
		
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(481, 20);
			this->textBox1->TabIndex = 2;
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Location = System::Drawing::Point(616, 54);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Size = System::Drawing::Size(90, 25);
			this->kryptonButton1->TabIndex = 3;
			this->kryptonButton1->Values->Text = L"kryptonButton1";
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->Controls->Add(this->kryptonButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->grid);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(762, 540);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
