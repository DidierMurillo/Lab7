#include <string>
#include <sstream>
using std::string;
#pragma once
class Evidencias
{
private:
	string Nombre;	
	string TipoArma;
	string Lugar;
	bool Huellas;
	bool Procesada;	
public:
	Evidencias(string,string,string,bool,bool);
	~Evidencias();	
	void setNombre(string);
	void setTipoArma(string);
	void setLugar(string);
	void setHuellas(bool);
	void setProcesada(bool);
	string toString();

};