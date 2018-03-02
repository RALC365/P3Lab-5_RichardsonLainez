#include "Orejas.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Orejas::Orejas(int tamano,int capacidadAudicion){
    this->tamano=tamano;
    this->capacidadAudicion=capacidadAudicion;
}//Fin constructor

//Constructor2
Orejas::Orejas(){

}//Fin constructor sencillo

int Orejas::getTamano(){
    return tamano;
}

void Orejas:: setTamano(int tamano){

    this->tamano=tamano;

}

int Orejas::getCapacidadAudicion(){
    return capacidadAudicion;
}

void Orejas:: setCapacidadAudicion(int capacidadAudicion){

    this->capacidadAudicion=capacidadAudicion;

}

Orejas::~Orejas(){

    cout<<"La instancia de Orejas fue eliminada";

}