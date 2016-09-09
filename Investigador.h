#pragma once
#include <string>
using std::string;
#include "persona.h"
class Investigador:public persona
{
private:
	int casosAtendidos;
	int casosCerrados;
	int casosSinResolver;
public:
	void setCasosAtendidos(int);
	void setCasosCerrados(int);
	void setCasosSinResolver(int);
	int getCasosAtendidos();
	int getCasosCerrados();
	int getCasosSinResolver();
	Investigador(string,string,string,string,int,string,int,int,int);
	virtual~Investigador();
	virtual string toString()const;
	
};