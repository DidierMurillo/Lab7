#include <string>
using std::string;
#include <sstream>
using std::string;
using std::stringstream;
#include "persona.h"
#include "Administrativo.h"
Administrativo::Administrativo(string nombre,string nickname,string contrasena,string cedula,int edad,string fechaNacimiento,string clave,string puesto):persona(nombre,nickname,contrasena,cedula,edad,fechaNacimiento),clave(clave),puesto(puesto){

}
void Administrativo::setPuesto(string _puesto){
	puesto=_puesto;
}
void Administrativo::setClave(string _clave){
	clave=_clave;
}
string Administrativo::getPuesto(){
	return puesto;
}
string Administrativo::getClave(){
	return clave;
}
Administrativo::~Administrativo(){

}
string Administrativo::toString()const{
	stringstream ss;
	ss<<persona::toString()<<" Puesto: "<<puesto<<" Clave: "<<clave;
	return ss.str();
}