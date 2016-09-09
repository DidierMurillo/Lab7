#include "persona.h"
#include "Administrativo.h"
#include "Investigador.h"
#include "Forense.h"
#include "Homicidio.h"
#include "Secuestros.h"
#include "Casos.h"
#include "Evidencias.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stringstream;
using namespace std;
int main(int argc, char* argv[]){

	vector<persona*> lista;
	int op=0;
	while(op!=5){
		cout<<"****************************************"<<endl;
		cout<<"1.-Gestión de personal"<<endl<<"2.-Gestión de evidencias"<<endl<<"3.-Gestión de casos"<<endl<<"...";
		cin>>op;
		switch(op){
			case 1:{
				cout<<"---------------------------------------------"<<endl;
				int op2;
				cout<<"1.-Ingreso"<<endl<<"2.-Modificar"<<endl<<"3.-Eliminar"<<endl<<"...";
				cin>>op2;
				switch(op2){
					case 1:{
						cout<<"--------INGRESO--------"<<endl;
						int opIngreso;
						cout<<"1.-Personal Administrativo."<<endl<<"2.-Investigador."<<endl<<"3.-Forense"<<endl<<"...";
						cin>>opIngreso;
						string nombre,nickname,contrasena,cedula,fechaNacimiento;
						cout<<"Nombre: ";
						cin>>nombre;
						cout<<"Nick name: ";
						cin>>nickname;
						cout<<"Contraseña: ";
						cin>>contrasena;
						cout<<"Cedula: ";
						cin>>cedula;
						cout<<"Fecha de nacimiento: ";
						cin>>fechaNacimiento;
						switch(opIngreso){
							case 1:{
								string clave,puesto;
								cout<<"Clave de ingreso: ";
								cin>>clave;
								cout<<"Puesto del organigrama: ";
								cin>>puesto;
								break;
							}
						}
					}//fin de ingreso
				}
				break;
			}
			
		}
	}

}	