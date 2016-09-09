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
						if (listaPersona.size()>0)
						{
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
						}else{
							cout<<"No hay personas agregadas"<<endl;
						}
						break;
					}
					case 3:{
						cout<<"--------ELIMINAR--------"<<endl;
						if (listaPersona.size()>0)
						{
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
                        	listaPersona.erase(listaPersona.begin()+opM);
						}else{
							cout<<"No hay personas agregadas"<<endl;
						}
						break;

					}
				}
				break;
			}case 2:{				
				string Contrasena,Nickname;
				cout<<"Ingrese su Nickname";
				cin>>Nickname;
				cout<<"Ingrese su Contraseña";
				cin>>Contrasena;
				for (int i = 0; i < listaPersona.size(); ++i)
					{
						if (dynamic_cast<Investigador*>(listaPersona.at(i)))
						{
							if (listaPersona.at(i)->getContrasena()==Contrasena&&listaPersona.at(i)->getNickname()==Nickname)
							{
								int OpcionEvidencia=0;
								do{
									cout<<"1.-Agregar Evidencia"<<endl<<"2.-Eliminar Evidencias"<<endl<<"3.-Modificar Evidencias"<<endl<<"...";
									cin>>OpcionEvidencia;
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
												cout<<"1.-Arma Blanca"<<endl<<"2.-Arma de Fuego"<<endl<<"3.-Evidencias Circunstanciales"<<endl<<"4.-Salir";
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
											while(OpcionArma!=1&&OpcionArma!=2&&OpcionArma!=3);
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
											break;
										}case 2:{
											for (int i = 0; i < listaevidencias.size(); ++i)
											{
												cout<<"Numero de Evidencia:"<<i<<" "<<listaevidencias.at(i)->toString()<<"\n";
											}
											cout<<"Ingrese que Evidencia desea modificar";
											int OpcionModificadar=0;
											cin>>OpcionModificadar;
											string Nombre,Lugar,TipoArma,Temporal;
											bool Huellas=false,Procesada=false;
											cout<<"Que desea MODIFICAR 1:Nombre \n2:Lugar\n 3:TipoArma";
											cin>>OpcionModificadar;
											if (OpcionModificadar==1)
											{
												cout<<"Nombre del Caso:";
												cin>>Nombre;
												listaevidencias.at(OpcionModificadar)->setNombre(Nombre);
											
											}else if(OpcionModificadar==2){
												cout<<"Lugar del Caso:";
												cin>>Lugar;
												listaevidencias.at(OpcionModificadar)->setLugar(Lugar);
											}else if(OpcionModificadar==3){
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
													listaevidencias.at(OpcionModificadar)->setTipoArma(TipoArma);

												}while(OpcionArma!=1&&OpcionArma!=2&&OpcionArma!=3);
											}

											break;
										}case 3:{
											for (int i = 0; i < listaevidencias.size(); ++i)
											{
												cout<<"Numero de Evidencia:"<<i<<" "<<listaevidencias.at(i)->toString()<<"\n";
											}
											cout<<"Ingrese que Evidencia desea modificar";
											int OpcionModificadar=0;
											cin>>OpcionModificadar;
											listaevidencias.erase(listaevidencias.begin()+OpcionModificadar);
										}
										break;
									}
								}while(OpcionEvidencia!=4);
							}	
						}
					}
				}
				break;
				case 3:{
					string nickname,contrasena;
					cout<<"++++++++++++++++++++++"<<endl;
					cout<< "Usuario: ";
					cin>>nickname;
					cout<<"Contraseña: ";
					cin>>contrasena;
					cout<<"++++++++++++++++++++++"<<endl;
					bool bandera=false;
					int posicion;
					for (int i = 0; i < listaPersona.size(); i++)
					{
						if (listaPersona[i]->getNickname()==nickname && listaPersona[i]->getContrasena()==contrasena)
						{
							posicion=i;
							bandera=true;
							i=listaPersona.size();
						}
					}
					int opCasos;
					if (bandera)
					{
						if (dynamic_cast<Administrativo*>(listaPersona[posicion])!=NULL){
                           	cout<<"------SECUESTROS------"<<endl;
                           	cout<<"1.-Agregar"<<endl<<"2.-Modificar"<<"3.-Eliminar"<<endl<<"...";
                        	cin>>opCasos;
                        	switch(opCasos){
                        		case 1:{
                        			cout<<"------AGREGAR------"<<endl;
                        			string lugar,fecha,hora,victima,lugarSecuestro,motivo;
                        			bool estado=false;
									cout<<"Lugar: ";
									cin>>lugar;
									cout<<"Fecha: ";
									cin>>fecha;
									cout<<"Hora: ";
									cin>>hora;
									char tem;
									do
									{
										
										cout<<"El caso esta abierto (s/n): ";
										cin>>tem;

									} while (tem!='s' && tem!='n');
									if (tem=='s')
									{
										estado=true;
									}
									cout<<"Victima: ";
									cin>>victima;
									cout<<"Lugar del secuestro: ";
									cin>>lugarSecuestro;
									cout<<"Motivo: ";
									cin>>motivo;
									listaevidencias.push_back(new Secuestro(lugar,fecha,hora,estado,victima,lugarSecuestro,motivo));
                        			break;
                        		}
                        		case 2:{

                        		}
                        	}
                        }
                        if (dynamic_cast<Investigador*>(listaPersona[i])!=NULL){
                          	Investigador* tem=dynamic_cast<Investigador*>(listaPersona[i]);
                          	
                        }
                        if (dynamic_cast<Forense*>(listaPersona[i])!=NULL){
                           	Forense* tem=dynamic_cast<Forense*>(listaPersona[i]);
                           	
                        }
					}else{
						cout<<"El usuario no existe"<<endl;
					}
				}
			}
		}//CIEREE SWITCH PRINCIPAL
	}//CIERE DEL WHILE




