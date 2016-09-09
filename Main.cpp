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
	vector<Evidencias*>listaevidencias;
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
					}
					
				}
				
			}case 2:{				
				string Contrasena,Nickname;
				cout<<"Ingrese su Nickname";
				cin>>Nickname;
				cout<<"Ingrese su Contraseña";
				cin>>Contrasena;
				for (int i = 0; i < lista.size(); ++i)
				{
					if (dynamic_cast<Investigador*>(lista.at(i)))
					{
						if (lista.at(i)->getContrasena()==Contrasena&&lista.at(i)->getNickname()==Nickname)
						{
							int OpcionEvidencia=0;
							do{
								cout<<"1.-Agregar Evidencia"<<endl<<"2.-Eliminar Evidencias"<<endl<<"3.-Modificar Evidencias"<<endl<<"...";
								switch(OpcionEvidencia){
									case 1:{
										//string Nombre,string Lugar,string TipoArma,bool Huellas,bool Procesada
										string Nombre,Lugar,TipoArma,Temporal;
										bool Huellas=false,Procesada=false;
										cout<<"Nombre del Caso:";
										cin>>Nombre;
										cout<<"Lugar del Caso:";
										cin>>Lugar;
										int OpcionArma;
										do{
											cout<<"1.-Arma Blanca"<<endl<<"2.-Arma de Fuego"<<endl<<"3.-Evidencias Circunstanciales"<<endl<<"...";
											cin>>OpcionArma;
											if (OpcionArma==1)
											{
												TipoArma="Arma Blanca";
											}else if(OpcionArma==2){
												TipoArma="Arma de Fuego";
											}else if(OpcionArma==3){
												TipoArma="Evidencias Circunstanciales";
											}
										}	
										while(OpcionArma==1||OpcionArma==2||OpcionArma==3);
										cout<<"Hay Huellas Digitales? [S/N]";
										cin>>Temporal;
										if (Temporal=="S"||Temporal=="s")
										{
											Huellas=true;
											cout<<"Estan siendo procesadas? [S/N]";
											cin>>Temporal;
											if (Temporal=="S"||Temporal=="s")
											{
												Procesada=true;
											}
										}
										listaevidencias.push_back(new Evidencias(Nombre,Lugar,TipoArma,Huellas,Procesada));
									}
								}
							}while(OpcionEvidencia!=4);
						}
					}
				}
			}
		}//CIEREE SWITCH PRINCIPAL

	}//CIERE DEL WHILE

}



