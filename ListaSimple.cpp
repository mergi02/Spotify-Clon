#include "ListaSimple.h"
#include "structLista.h"
#include <iostream>
#include <fstream>
#include "ListasRepro.h"

using std::ofstream;

ListaSimple::ListaSimple() : primero(nullptr) {

}

bool ListaSimple::estaVacia()
{
	return primero == nullptr;
}


void ListaSimple::agregar(const char* id, const char* art, const char* s)
{
	Nodo* nuevo = new Nodo(id, art, s, nullptr);
	Nodo* actual = primero;
	if (estaVacia())
	{
		primero = nuevo;
	}
	else {
		while (actual!=nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(nuevo);
	}

}

void ListaSimple::escribir(const char* id, const char* art, const char* s)
{
	Nodo* actual = primero;
	structCancion song;

	

	//ofstream listaArchivo(lista + ".bin", ios::binary | ios::out | ios::app);

	//listaArchivo.seekg(0, ios::beg);
	//listaArchivo.write(reinterpret_cast<const char*>(&song), sizeof(structCancion));

	while (actual!=nullptr)
	{
		
		strcpy_s(song.id, strlen(actual->getID()) + 1, actual->getID());
		strcpy_s(song.artist, strlen(actual->getArtist()) + 1, actual->getArtist());
		strcpy_s(song.cancion, strlen(actual->getSongName()) + 1, actual->getSongName());


		actual = actual->getSiguiente();
	}
}


