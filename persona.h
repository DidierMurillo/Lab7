#include <string>
using std::string;
#pragma once
class persona
{	
private:
	string nombre;
	string nickname;
	string contrasena;
	string cedula;
	string fechaNacimiento;
	int edad;
public:
	string getNombre();
	string getNickname();
	string getContrasena();
	string getCedula();
	string getFechaNacimiento();
	int getEdad();
	void setNombre(string);
	void setNickname(string);
	void setContrasena(string);
	void setCedula(string);
	void setEdad(int);
	void setFechaNacimiento(string);
	persona(string,string,string,string,int,string);
	virtual string toString()const;
	virtual ~persona();
	
};