#include <string>
using std::string;
#include <sstream>
using std::string;
using std::stringstream;
#include "persona.h"
#include "Investigador.h"
Investigador::Investigador(string nombre,string nickname,string contrasena,string cedula,int edad,string fechaNacimiento,
	int casosAtendidos,int casosCerrados,int casosSinResolver):persona(nombre,nickname,contrasena,cedula,edad,fechaNacimiento),
	casosAtendidos(casosAtendidos),casosCerrados(casosCerrados),casosSinResolver(casosSinResolver){
	
}
void Investigador::setCasosAtendidos(int _casosAtendidos){
	casosAtendidos=_casosAtendidos;
}
void Investigador::setCasosCerrados(int _casosCerrados){
	casosCerrados=_casosCerrados;
}
void Investigador::setCasosSinResolver(int _casosSinResolver){
	casosSinResolver=_casosSinResolver;
}
int Investigador::getCasosSinResolver(){
	return casosSinResolver;
}
int Investigador::getCasosCerrados(){
	return casosCerrados;
}
int Investigador::getCasosAtendidos(){
	return casosAtendidos;
}
string Investigador::toString()const{
	stringstream ss;
	ss<<persona::toString()<<" Casos Atendidos: "<<casosAtendidos<<" Casos Cerrados: "<<casosCerrados<<" Casos sin resolver: "<<casosSinResolver;
	return ss.str();
}
Investigador::~Investigador(){

}