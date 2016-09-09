Investigacion: Main.o persona.o Administrativo.o Casos.o Forense.o Homicidio.o Evidencias.o Investigador.o Secuestros.o
	g++ Main.o persona.o Administrativo.o Casos.o Forense.o Homicidio.o Evidencias.o Investigador.o Secuestros.o -o Investigacion

Main.o:		Main.cpp persona.h Administrativo.h Casos.h Forense.h Homicidio.h Evidencias.h Investigador.h Secuestros.h
	g++ -c Main.cpp

persona.o:	persona.cpp persona.h
	g++ -c persona.cpp

Administrativo.o:	Administrativo.cpp persona.h Administrativo.h
	g++ -c Administrativo.cpp

Forense.o:	Forense.cpp persona.h Forense.h
	g++ -c Forense.cpp

Investigador.o:		Investigador.cpp persona.h Investigador.h
	g++ -c Investigador.cpp

Casos.o:	Casos.cpp Casos.h
	g++ -c Casos.cpp

Secuestros.o:		Secuestros.cpp persona.h Secuestros.h
	g++ -c Secuestros.cpp

Homicidio.o:		Homicidio.cpp persona.h Homicidio.h
	g++ -c Homicidio.cpp

Evidencias.o:		Evidencias.cpp Evidencias.h
	g++ -c Evidencias.cpp

