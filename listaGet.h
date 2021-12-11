#pragma once
#ifndef LISTAGET_H
#define LISTAGET_H
#include <string>
using std::string;
 class ListaGet
{
public:
	ListaGet();
	void setID(string);
	void setArtist(string);
	void setSong(string);

	 string getID();
	 string getArtist();
	 string getSong();
private:
	string ID;
	string Artist;
	string Song;
	 
};
#endif //!LISTAGET_J

