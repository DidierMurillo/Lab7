#include <vector>
#include <string>
#include <sstream>
#include "Evidencias.h"
using std::string;
using std::stringstream;
#pragma once
using namespace std;
class Casos
{
private:	
	vector<Evidencias*> ListaEvidencias;
	//vector<Investigador*>ListaInvestigadores;
	string Lugar;
	string Fecha;
	string Hora;
	bool Cerrado;
public:
	Casos(string,string,string,bool);
	virtual ~Casos();
	void setLugar(string);
	void setFecha(string);
	void setHora(string);
	void setCerrado(bool);
	void setListaEvidencias(string,string,string,bool,bool);
	virtual string toString();
};