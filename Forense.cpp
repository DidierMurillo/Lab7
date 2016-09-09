#include <string>
using std::string;
#include <sstream>
using std::string;
using std::stringstream;
#include "persona.h"
#include "Forense.h"
Forense::Forense(string nombre,string nickname,string contrasena,string cedula,int edad,string fechaNacimiento,
	string fechaIngreso,string horario):persona(nombre,nickname,contrasena,cedula,edad,fechaNacimiento),fechaIngreso(fechaIngreso),horario(horario){
	
}
void Forense::setFechaIngreso(string _fechaIngreso){
	fechaIngreso=_fechaIngreso;
}
void Forense::setHorario(string _horario){
	horario=_horario;
}
string Forense::getFechaIngreso(){
	return fechaIngreso;
}
string Forense::getHorario(){
	return horario;
}
string Forense::toString()const{
	stringstream ss;
	ss<<persona::toString()<<" Fecha de Ingreso: "<<fechaIngreso<<" Horario: "<<horario;
	return ss.str();
}
Forense::~Forense(){

}
