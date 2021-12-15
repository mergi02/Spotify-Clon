#include "SpotifyUsuario.h"

#include <fstream>
#include <iostream>
#include "Usuario.h".

using namespace std;
void SpotifyUsuario::crearUsuario()
{
	ofstream archivo_SpotifyUsuario("usuarios.bin", ios::out | ios::app | ios::binary);
	if (!archivo_SpotifyUsuario)
	{
		cout << "Error al intentar abrir el archivo";
		return;
	}
	char username[10];
	char name[10];
	int password;
	char email[10];


		Usuario nuevo;
		nuevo.setUsername(username);
		nuevo.setName(name);
		nuevo.setPassword(password);
		nuevo.setEmail(email);

	archivo_SpotifyUsuario.write(reinterpret_cast<const char*>(&nuevo),sizeof(Usuario));
}

void SpotifyUsuario::iniciarSesion()
{
	ifstream archivo_SpotifyUsuario("usuarios.bin", ios::in | ios::binary);

	if (!archivo_SpotifyUsuario)
	{
		cout << "Error: Imposible abrir archivo usuarios.bin\n";
		return;
	}
	Usuario lec;

	archivo_SpotifyUsuario.seekg(0, ios::beg);
	while (!archivo_SpotifyUsuario.eof())
	{
		
		lec.getusername();
		lec.getname();
		lec.getpassword();
		lec.getemail();

		archivo_SpotifyUsuario.read(reinterpret_cast<char*>(&lec), sizeof(Usuario));
	}
	archivo_SpotifyUsuario.close();
}
