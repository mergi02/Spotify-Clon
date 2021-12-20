#pragma once
#include <iostream>
#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
	Nodo * siguiente;
	char* ID;
	char* artist; 
	char* songName;

public:
	Nodo(void);
	Nodo(const  char*, const char*, const char*,  Nodo*);

	void setID(char*);
	const char* getID();

	void setArtist(char*);
	const char* getArtist();

	void setSongName(char*);
	const char* getSongName();

	void setSiguiente(Nodo*);
	Nodo* getSiguiente();



};


#endif // NODO_H
