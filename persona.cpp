#include <string>
using std::string;
#include <sstream>
using std::string;
using std::stringstream;
#include "persona.h"
persona::persona(string _nombre,string _nickname,string _contrasena,string _cedula,int _edad,string _fechaNacimiento ){
	nombre=_nombre;
	nickname=_nickname;
	contrasena=_contrasena;
	cedula=_cedula;
	edad=_edad;
	fechaNacimiento=_fechaNacimiento;
};
string persona::getNombre(){
	return nombre;
}
string persona::getNickname(){
	return nickname;
}
string persona::getContrasena(){
	return contrasena;
}
string persona::getCedula(){
	return cedula;
}
int persona::getEdad(){
	return edad;
}
string persona::getFechaNacimiento(){
	return fechaNacimiento;
}
void persona::setNombre(string _nombre){
	nombre=_nombre;
}
void persona::setNickname(string _nickname){
	nickname=_nickname;
}
void persona::setContrasena(string _contrasena){
	contrasena=_contrasena;
}
void persona::setCedula(string _cedula){
	cedula=_cedula;
}
void persona::setEdad(int _edad){
	edad=_edad;
}
void persona::setFechaNacimiento(string _fechaNacimiento){
	fechaNacimiento=_fechaNacimiento;
}
persona::~persona(){

}
string persona::toString()const{
        stringstream ss;
        ss <<"Nombre: "<<nombre<<" Nickname: "<<nickname<<" contraseña: "<<contrasena<<" Cedula: "<<cedula<<"Edad: "<<edad<<"Fecha de Nacimiento: "<<fechaNacimiento;
        return ss.str();
}
