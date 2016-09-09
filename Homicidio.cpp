#include <string>
#include <sstream>
#include <vector>
#include "Homicidio.h"
using std::string;
using std::stringstream;
using namespace std;


Homicidio::Homicidio(string Lugar,string Fecha,string Hora,bool Cerrado,string SospechosoPrincipal,string Victima):Casos(Lugar,Fecha,
Hora,Cerrado),SospechosoPrincipal(SospechosoPrincipal),Victima(Victima){

}

Homicidio::~Homicidio(){

}

void  Homicidio::setVictima(string Victima){
	this->Victima=Victima;
}

void Homicidio::setCulpable(string Culpable){
	this->Culpable=Culpable;
}

void Homicidio::setSospechosoPrincipal(string SospechosoPrincipal){
	this->SospechosoPrincipal=SospechosoPrincipal;
}

void Homicidio::setListaSospechosos(string Sospechoso){
	this->ListaSospechosos.push_back(Sospechoso);
}

string Homicidio::toString(){
	stringstream ss;
	ss<<Casos::toString()<<"Sospechoso Principal:"<<SospechosoPrincipal<<" Victima: "<<Victima<<" Culpable: "<<Culpable ;
	return ss.str();
}



