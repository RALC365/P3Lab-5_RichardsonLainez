#include "Zoologico.h"

#include <iostream>
#include <string>
#include "Animales.h"



//así sabe donde va a ir a acceder para encontrar esa ingformacion
Zoologico::Zoologico(string pNombre, int pTamano, int pCPersonas){
	nombre = pNombre;
	tamano = pTamano;
	cPersonas = pCPersonas;
}

Zoologico::Zoologico(){
}
/*Metodos*/
string Zoologico::getNombre(){
	return nombre;
}
void Zoologico::setNombre(string pNombre){
	nombre = pNombre;
}
//
Animales Zoologico::getZonaArticaDirecto(int pos){
	return zonaArtica[pos];
}
void Zoologico::setZonaArtica(Animales pAnimal){
	zonaArtica.push_back(pAnimal);
}
//
Animales Zoologico::getZonaDeserticaDirecto(int pos){
	return zonaDesertica[pos];
}
void Zoologico::setZonaDesertica(Animales pAnimal){
	zonaDesertica.push_back(pAnimal);
}
//
Animales Zoologico::getZonaJunglaTropicalDirecto(int pos){
	return zonaJunglaTropical[pos];
}
void Zoologico::setZonaJunglaTropical(Animales pAnimal){
	zonaJunglaTropical.push_back(pAnimal);
}
//
Animales Zoologico::getZonaSabanaDirecto(int pos){
	return zonaSabana[pos];
}
void Zoologico::setZonaSabana(Animales pAnimal){
	zonaSabana.push_back(pAnimal);
}

vector<Animales> Zoologico::getZonaSabana(){
			return zonaSabana;
}
vector<Animales> Zoologico::getZonaDesertica(){
			return zonaDesertica;
}
vector<Animales> Zoologico::getZonaJunglaTropical(){
			return zonaJunglaTropical;
}

vector<Animales> Zoologico::getZonaArtica(){
			return zonaArtica;
}



//destructor
/*Zoologico::~Zoologico(){
	cout<< "La instancia fue eliminada"<<endl;

}*/
