#include <string>
#include "Animales.h"
#include <vector>

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

using namespace std;

class Zoologico{
	//atributos o metodos privados
	private:
		string nombre;
		int tamano;
		int cPersonas;
		vector<Animales> zonaArtica;
		vector<Animales> zonaDesertica;
		vector<Animales> zonaJunglaTropical;
		vector<Animales> zonaSabana;
	//metodos publicos
	public:
		Zoologico();
		Zoologico(string, int, int);
		string getNombre();
		void setNombre(string);
		Animales getZonaArticaDirecto(int);
		void setZonaArtica(Animales);//añade uno mas a la lista
		Animales getZonaDeserticaDirecto(int);
		void setZonaDesertica(Animales);//
		Animales getZonaJunglaTropicalDirecto(int);
		void setZonaJunglaTropical(Animales);
		Animales getZonaSabanaDirecto(int);
		void setZonaSabana(Animales);
		vector<Animales> getZonaSabana();
		vector<Animales> getZonaDesertica();
		vector<Animales> getZonaJunglaTropical();
		vector<Animales> getZonaArtica();
		
	//destructor
	//~Zoologico();
};

#endif