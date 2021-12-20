#pragma once
#include "Nodo.h"

 class ListaSimple
{
private:
	Nodo* primero;
public:
	ListaSimple();
	bool estaVacia();
	void agregar(const char*, const char*, const char*);
	void escribir(const char*, const char*, const char*);
};

