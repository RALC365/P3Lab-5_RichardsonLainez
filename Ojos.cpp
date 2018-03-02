#include "Ojos.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Ojos::Ojos(string color,bool visionNocturna){
    this->color=color;
    this->visionNocturna=visionNocturna;
}//Fin constructor

//Constructor2
Ojos::Ojos(){

}//Fin constructor sencillo

string Ojos::getColor(){
    return color;
}

void Ojos:: setColor(string color){

    this->color=color;

}

bool Ojos::getVisionNocturna(){
    return visionNocturna;
}

void Ojos:: setVisionNocturna(bool visionNocturna){

    this->visionNocturna=visionNocturna;

}

Ojos::~Ojos(){

    cout<<"La instancia de Ojos fue eliminada";

}