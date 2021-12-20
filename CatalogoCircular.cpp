//#include "CatalogoCircular.h"
//#include <iostream>
//
//
//CatalogoCircular::CatalogoCircular():primero(nullptr),ultimo(nullptr)
//{
//}
//
//bool CatalogoCircular::estaVacia()
//{
//	return primero == nullptr;
//}
//
//void CatalogoCircular::addSong(const char* _id, const char* _art, const char*  _song)
//{
//	Nodo* nuevo = new Nodo(_id, _art, _song,nullptr,nullptr);
//
//	if (estaVacia())
//	{
//		primero = nuevo;
//		ultimo = nuevo;
//	}
//	else {
//		primero->setSiguiente(nuevo);
//		ultimo->setSiguiente(nuevo);
//	}
//
//	primero->setAnterior(ultimo);
//	ultimo->setSiguiente(primero);
//}
