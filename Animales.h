#include <string>
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

#ifndef ANIMALES_H
#define ANIMALES_H

using namespace std;

class Animales{
	//atributos o metodos privados
	private:
		string nombreEspecie;
		string nombreAnimal;
		int tamano;
		int tipo;
		string tipoString;
	
		Patas patas;

	//metodos publicos
	public:
		Animales();
		Animales(string, string, int, int);
		string getNombreEspecie();
		void setNombreEspecie(string);

		string getNombreAnimal();
		void setNombreAnimal(string);

		int getTipo();
		int getTamano();
		string getTipoString();
		//string toString();

		
		
	//destructor
	//~Animales();
};

#endif