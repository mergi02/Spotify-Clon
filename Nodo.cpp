#include "Nodo.h"
#include <iostream>

Nodo::Nodo(void){
	ID = new char[1];
	ID[0] = '/0';

	artist = new char[1];
	artist[0] = '/0';

	songName = new char[1];
	songName[0] = '/0';

	siguiente = nullptr;
}
Nodo::Nodo(const char* _ID, const char*  _art, const char* _song, Nodo* _sig){
	ID = new char[strlen(_ID) + 1];
	strcpy_s(ID, strlen(_ID) + 1, _ID);

	artist = new char[strlen(_art) + 1];
	strcpy_s(artist, strlen(_art)+1, _art);

	songName = new char[strlen(_song) + 1];
	strcpy_s(songName, strlen(_song)+1, _song);

	siguiente = _sig;
}

void Nodo::setID( char* id)
{
	ID = id;
}

const char* Nodo::getID()
{
	return ID;
}

void Nodo::setArtist( char* art)
{
	artist = art;
}

const char*  Nodo::getArtist()
{
	return artist;
}

void Nodo::setSongName( char* song)
{
	songName = song;
}

const char* Nodo::getSongName()
{
	return songName;
}

void Nodo::setSiguiente(Nodo* sig)
{
	siguiente = sig;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}





