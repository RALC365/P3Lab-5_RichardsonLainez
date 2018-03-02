#include "Pelaje.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Pelaje::Pelaje(string color,int grosor,int largo){
    this->color=color;
    this->grosor=grosor;
    this->largo=largo;
}//Fin constructor

//Constructor2
Pelaje::Pelaje(){

}//Fin constructor sencillo

string Pelaje::getColor(){
    return color;
}

void Pelaje:: setColor(string color){

    this->color=color;

}

int Pelaje::getGrosor(){
    return grosor;
}

void Pelaje:: setGrosor(int grosor){

    this->grosor=grosor;

}

int Pelaje::getLargo(){
    return largo;
}

void Pelaje:: setLargo(int largo){

    this->largo=largo;

}

Pelaje::~Pelaje(){

    cout<<"La instancia de Pelaje fue eliminada";

}