#include <vector>
#include <string>
#include <sstream>
#include "Evidencias.h"
#include "Casos.h"
using std::string;
using std::stringstream;
using namespace std;

Casos::Casos(string Lugar,string Fecha,string Hora,bool Cerrado):Lugar(Lugar),Fecha(Fecha),Hora(Hora),Cerrado(Cerrado) {

}

Casos::~Casos(){

}

void Casos::setLugar(string Lugar){
	this->Lugar=Lugar;	
}

void Casos::setFecha(string Fecha){
	this->Fecha=Fecha;
}

void Casos::setHora(string Hora){
	this->Hora=Hora;
}

void Casos::setCerrado(bool Cerrado){
	this->Cerrado=Cerrado;
}

/*void Casos::setListaInvestigadores(string Investigador){
	ListaInvestigadores.push_back(Investigador);
}*/

void Casos::setListaEvidencias(string Nombre,string Lugar,string TipoArma,bool Huellas,bool Procesada){
	this->ListaEvidencias.push_back(new Evidencias(Nombre,Lugar,TipoArma,Huellas,Procesada));
}

string Casos::toString(){
	stringstream ss;
	ss<<" Lugar del Caso: " <<Lugar<<" Fecha:"<<Fecha<<" Hora:"<<Hora<<" Caso Cerrado o No:"<<Cerrado ;
	return ss.str();
}


