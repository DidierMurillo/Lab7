#include <string>
#include <sstream>
#include <vector>
#include "Casos.h"
using std::string;
using std::stringstream;
#pragma once
using namespace std;

class Homicidio:public Casos
{
private:
	vector<string> ListaSospechosos;
	string SospechosoPrincipal;
	string Victima;
	string Culpable;

public:
	Homicidio(string,string,string,bool,string,string);
	~Homicidio();
	void setSospechosoPrincipal(string);
	void setVictima(string);
	void setCulpable(string);
	void setListaSospechosos(string);
	string toString();

};