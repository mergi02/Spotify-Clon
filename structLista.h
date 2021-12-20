#pragma once
#ifndef STRUCT_LISTA_H
#define STRUCT_LISTA_H
#include <iostream>

struct structCancion {
	char id[22];
	char artist[100];
	char cancion[100];


};

struct infoLista {

	char nombreLista[40];
	char usuarioCreador[20];
	char fechaHoraCreacion[26];

};


struct spotUs
{
	char usuario[40];
	char nombre[40];
	char contra[40];
	char correo[60];
};

#endif //!STRUCT_LISTA_H