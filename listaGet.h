#pragma once
#ifndef LISTAGET_H
#define LISTAGET_H
#include <string>
using std::string;
 class ListaGet
{
public:
	ListaGet();
	void setID(char[]);
	void setArtist(char[]);
	void setSong(char[]);

	 char* getID();
	 char* getArtist();
	 char* getSong();
private:
	char ID[22];
	char Artist[50];
	char Song[50];
	 
};
#endif //!LISTAGET_J

