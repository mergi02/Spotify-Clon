
#pragma once
#ifndef CATALOGO_CIRCULAR_H
#define CATALOGO_CIRCULAR_H

#include "Nodo.h"


class CatalogoCircular
{
public:
	CatalogoCircular();
	bool estaVacia();
	void addSong(const char* ID, const char* arts, const char* song);
	void print();

private:
	Nodo* primero, *ultimo;
};


#endif // !CATALOGO_CIRCULAR_H

