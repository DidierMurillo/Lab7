#include <string>
#include <sstream>
#include "Evidencias.h"
using std::string;
using std::stringstream;

Evidencias::Evidencias(string Nombre,string Lugar,string TipoArma,bool Huellas,bool Procesada):Nombre(Nombre),Lugar(Lugar),TipoArma(TipoArma),
Huellas(Huellas),Procesada(Procesada){

}

Evidencias::~Evidencias(){

}

void Evidencias::setNombre(string Nombre){
	this->Nombre=Nombre;
}

void Evidencias::setLugar(string Lugar){
	this->Lugar=Lugar;
}

void Evidencias::setTipoArma(string TipoArma){
	this->TipoArma=TipoArma;
}

void Evidencias::setHuellas(bool Huellas){
	this->Huellas=Huellas;
}

void Evidencias::setProcesada(bool Procesada){
	this->Procesada=Procesada;
}

string Evidencias::toString(){
	stringstream ss;
	ss << "Nombre del caso:"<<Nombre << ", Lugar: " <<Lugar<< ",TipoArma: " <<TipoArma<<",Huellas: "<<Huellas<<", Ya fue Procesada:"<<Procesada;
	return ss.str();
}

