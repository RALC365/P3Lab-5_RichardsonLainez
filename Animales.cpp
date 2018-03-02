#include "Animales.h"

#include <iostream>
#include <string>

#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

using namespace std;

//así sabe donde va a ir a acceder para encontrar esa ingformacion
Animales::Animales(string nEspecie, string nAnimal, int pTamano, int ptipo){
	nombreEspecie = nEspecie;
	nombreAnimal = nAnimal;
	tamano = pTamano;
	tipo = ptipo;

	switch(ptipo){
		case 1:
				tipoString = "Zona Artica";
			break;

		case 2:
				tipoString = "Zona Desertica";
			break;

		case 3:
				tipoString = "Zona Jungla Tropical";
			break;

		case 4:
				tipoString = "Zona Sabana";
			break;

	}
}

Animales::Animales(){
}
/*Metodos*/

string Animales::getNombreEspecie(){
	return nombreEspecie;
}

string Animales::getNombreAnimal(){
	return nombreAnimal;
}

int Animales:: getTipo(){
	return tipo;
}
int Animales:: getTamano(){
	return tamano;
}

string Animales:: getTipoString(){
	return tipoString;
}

//Animales::~Animales(){
//}
