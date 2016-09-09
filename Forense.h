#pragma once
#include <string>
using std::string;
#include "persona.h"
class Forense:public persona
{
private:
	string fechaIngreso;
	string horario;
public:
	void setFechaIngreso(string);
	void setHorario(string);
	string getFechaIngreso();
	string getHorario();
	Forense(string,string,string,string,int,string,string,string);
	virtual~Forense();
	virtual string toString()const;
};