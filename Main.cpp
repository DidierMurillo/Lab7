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

	vector<persona*> listaPersona;
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
						int edad;
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
						cout<<"Edad: ";
						cin>>edad;
						switch(opIngreso){
							case 1:{
								string clave,puesto;
								cout<<"Clave de ingreso: ";
								cin>>clave;
								cout<<"Puesto del organigrama: ";
								cin>>puesto;
								listaPersona.push_back(new Administrativo(nombre,nickname,contrasena,cedula,edad,fechaNacimiento,clave,puesto));
								break;
							}
							case 2:{
								int casosAtendidos,casosCerrados,CasosSinAtender;
								cout<<"Numero de casos atendidos: ";
								cin>>casosAtendidos;
								cout<<"Numero de casos cerrados: ";
								cin>>casosCerrados;
								cout<<"Numero de casos sin atender: ";
								cin>>CasosSinAtender;
								listaPersona.push_back(new Investigador(nombre,nickname,contrasena,cedula,edad,fechaNacimiento,casosAtendidos,casosCerrados,CasosSinAtender));
								break;
							}
							case 3:{
								string fechaIngreso,horario;
								cout<<"Fecha de ingreso: ";
								cin>>fechaIngreso;
								cout<<"Horario de trabajo: ";
								cin>>horario;
								listaPersona.push_back(new Forense(nombre,nickname,contrasena,cedula,edad,fechaNacimiento,fechaIngreso,horario));
								break;
							}
						}//fin de ingreso
						break;
					}
					case 2:{
						cout<<"--------MODIFICAR--------"<<endl;
						int opM;
						for (int i = 0; i < listaPersona.size(); i++)
                        {
	                        if (dynamic_cast<Administrativo*>(listaPersona[i])!=NULL){
                                Administrativo* tem=dynamic_cast<Administrativo*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                            if (dynamic_cast<Investigador*>(listaPersona[i])!=NULL){
                                Investigador* tem=dynamic_cast<Investigador*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                            if (dynamic_cast<Forense*>(listaPersona[i])!=NULL){
                                Forense* tem=dynamic_cast<Forense*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                        }
                        cin>>opM;
                        opM--;
                        string nombre,nickname,contrasena,cedula,fechaNacimiento;
						int edad;
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
						cout<<"Edad: ";
						cin>>edad;
                        if (dynamic_cast<Administrativo*>(listaPersona[opM])!=NULL){
                            Administrativo* tem=dynamic_cast<Administrativo*>(listaPersona[opM]);
                            string clave,puesto;
							cout<<"Clave de ingreso: ";
							cin>>clave;
							cout<<"Puesto del organigrama: ";
							cin>>puesto;
							tem->setNombre(nombre);
							tem->setNickname(nickname);
							tem->setContrasena(contrasena);
							tem->setCedula(cedula);
							tem->setFechaNacimiento(fechaNacimiento);
							tem->setEdad(edad);
							tem->setClave(clave);
							tem->setPuesto(puesto);
                            listaPersona[opM]=tem;
                        }
                        if (dynamic_cast<Investigador*>(listaPersona[opM])!=NULL){
                            Investigador* tem=dynamic_cast<Investigador*>(listaPersona[opM]);
                         	int casosAtendidos,casosCerrados,casosSinAtender;
							cout<<"Numero de casos atendidos: ";
							cin>>casosAtendidos;
							cout<<"Numero de casos cerrados: ";
							cin>>casosCerrados;
							cout<<"Numero de casos sin atender: ";
							cin>>casosSinAtender;
							tem->setNombre(nombre);
							tem->setNickname(nickname);
							tem->setContrasena(contrasena);
							tem->setCedula(cedula);
							tem->setFechaNacimiento(fechaNacimiento);
							tem->setEdad(edad);
							tem->setCasosAtendidos(casosAtendidos);
							tem->setCasosSinResolver(casosSinAtender);
							tem->setCasosCerrados(casosCerrados);
							listaPersona[opM]=tem;
                        }
                        if (dynamic_cast<Forense*>(listaPersona[opM])!=NULL){
                            Forense* tem=dynamic_cast<Forense*>(listaPersona[opM]);
                            string fechaIngreso,horario;
							cout<<"Fecha de ingreso: ";
							cin>>fechaIngreso;
							cout<<"Horario de trabajo: ";
							cin>>horario;
							tem->setNombre(nombre);
							tem->setNickname(nickname);
							tem->setContrasena(contrasena);
							tem->setCedula(cedula);
							tem->setFechaNacimiento(fechaNacimiento);
							tem->setEdad(edad);
							tem->setFechaIngreso(fechaIngreso);
							tem->setHorario(horario);
							listaPersona[opM]=tem;
                        }
						break;
					}
					case 3:{
						cout<<"--------ELIMINAR--------"<<endl;
						int opM;
						for (int i = 0; i < listaPersona.size(); i++)
                        {
	                        if (dynamic_cast<Administrativo*>(listaPersona[i])!=NULL){
                                Administrativo* tem=dynamic_cast<Administrativo*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                            if (dynamic_cast<Investigador*>(listaPersona[i])!=NULL){
                                Investigador* tem=dynamic_cast<Investigador*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                            if (dynamic_cast<Forense*>(listaPersona[i])!=NULL){
                                Forense* tem=dynamic_cast<Forense*>(listaPersona[i]);
                                cout<<i+1<<".-"<<tem->toString()<<endl;
                            }
                        }
                        cin>>opM;
                        opM--;
                        
						break;
					}
				}
				break;
			}
			
		}
	}

}	