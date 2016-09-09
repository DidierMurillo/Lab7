#include <string>
#include <sstream>
#include "Secuestros.h"
using std::string;
using std::stringstream;
using namespace std;

Secuestros::Secuestros(string Lugar,string Fecha,string Hora,bool Cerrado,string Victima,string LugarSecuestro,string Motivo):Casos(Lugar,Fecha,
Hora,Cerrado),Victima(Victima),LugarSecuestro(LugarSecuestro),Motivo(Motivo){

}

Secuestros::~Secuestros(){

}

void  Secuestros::setVictima(string Victima){
	this->Victima=Victima;
}

void Secuestros::setLugarSecuestro(string LugarSecuestro){
	this->LugarSecuestro=LugarSecuestro;
}

void Secuestros::setMotivo(string Motivoo){
	this->Motivo=Motivo;
}

void Secuestros::setPrecioRescate(string PrecioRescate){
	this->PrecioRescate=PrecioRescate;
}

void Secuestros::setEstadoVictima(string EstadoVictima){
	this->EstadoVictima=EstadoVictima;
}

void Secuestros::setRescate(bool Rescate ){
	this->Rescate=Rescate;
}


string Secuestros::toString(){
	stringstream ss;
	ss<<Casos::toString()<<" Victima: "<<Victima<<" Lugar Secuestro: "<<LugarSecuestro<<" Motivo del Secuestro: "<<Motivo ;
	return ss.str();
}