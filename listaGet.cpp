#include "listaGet.h"

ListaGet::ListaGet(): ID(""),Artist(""),Song("")
{
}

void ListaGet::setID(string d)
{
	ID = d;
}

void ListaGet::setArtist(string a)
{
	Artist = a;
}

void ListaGet::setSong(string s)
{
	Song = s;
}

string ListaGet::getID()
{
	return ID;
}

string ListaGet::getArtist()
{
	return Artist;
}

string ListaGet::getSong()
{
	return Song;
}
