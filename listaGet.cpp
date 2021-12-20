#include "listaGet.h"

ListaGet::ListaGet(): ID("ND"),Artist("ND"),Song("ND")
{
}

void ListaGet::setID(char _d[])
{
	strcpy_s(ID, strlen(_d)+1, _d);
}

void ListaGet::setArtist(char a[])
{
	strcpy_s(Artist, strlen(a) + 1, a);
}

void ListaGet::setSong(char s[])
{
	strcpy_s(Artist, strlen(s) + 1, s);
}

char* ListaGet::getID()
{
	return ID;
}

char* ListaGet::getArtist()
{
	return Artist;
}

char* ListaGet::getSong()
{
	return Song;
}
