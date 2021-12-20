#include "setListaNombre.h"
#include <iostream>
#include <stdlib.h>

setListaNombre::setListaNombre(): nombre("")
{
	
}

 void setListaNombre::setNombre(string name)
{
	 nombre = name;
}
string setListaNombre::getNombre()
{
	return nombre;
}
