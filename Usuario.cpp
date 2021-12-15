#include "Usuario.h"
#include <iostream>

Usuario::Usuario() : username("N.U"), name("N.U"), password(0), email("N.U")
{}

char* Usuario::getusername()
{
    return username;
}

char* Usuario::getname()
{
    return name;
}

int Usuario::getpassword()
{
    return password;
}

char* Usuario::getemail()
{
    return email;
}

void Usuario::setUsername(char _user[])
{
    strcpy_s(username, strlen(_user) + 1, _user);
}

void Usuario::setName(char _name[])
{
    strcpy_s(name, strlen(_name) + 1, _name);
}

void Usuario::setPassword(int _pass)
{
    password = _pass;
}

void Usuario::setEmail(char _email[] )
{
    strcpy_s(email, strlen(_email) + 1, _email);
}


