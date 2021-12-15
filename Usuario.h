#pragma once
#ifndef USUARIO_H
#define USUARIO_H
class Usuario
{
public:
	Usuario();
	char* getusername();
	char* getname();
	int getpassword();
	char* getemail();

	void setUsername(char[]);
	void setName(char[]);
	void setPassword(int);
	void setEmail(char []);

private:
	char username[10];
	char name[10];
	int password;
	char email[10];
};
#endif // !USUARIO_H



