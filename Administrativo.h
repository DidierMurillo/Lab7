//#pragma once
#include <string>
using std::string;
#include "persona.h"
class Administrativo:public persona
{
	string clave,puesto;
public:
	void setClave(string);
	void setPuesto(string);
	string getClave();
	string getPuesto();
	virtual string toString()const;
	Administrativo(string,string,string,string,int,string,string,string);
	virtual~Administrativo();
	
};