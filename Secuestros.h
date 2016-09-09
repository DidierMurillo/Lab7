#include <string>
#include <vector>
#include "Casos.h"
using std::string;
using std::stringstream;
#pragma once
using namespace std;

class Secuestros:public Casos
{
private:
	string Victima;
	string LugarSecuestro;
	string Motivo;
	bool Rescate;
	string PrecioRescate;
	string EstadoVictima;
public:
	Secuestros(string,string,string,bool,string,string,string);
	~Secuestros();
	void setVictima(string);
	void setMotivo(string);
	void setRescate(bool);
	void setPrecioRescate(string);
	void setEstadoVictima(string);
	void setLugarSecuestro(string);
	string toString();
	
};