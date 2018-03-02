#include "Patas.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Patas::Patas(int canPatas,int larPatas,string tipoPatas){
    this->canPatas=canPatas;
    this->larPatas=larPatas;
    this->tipoPatas=tipoPatas;
}//Fin constructor

//Constructor2
Patas::Patas(){

}//Fin constructor sencillo

int Patas::getCanPatas(){
    return canPatas;
}

void Patas:: setCanPatas(int canPatas){

    this->canPatas=canPatas;

}

int Patas::getLarPatas(){
    return larPatas;
}

void Patas:: setLarPatas(int larPatas){

    this->larPatas=larPatas;

}

string Patas::getTipoPatas(){
    return tipoPatas;
}

void Patas:: setTipoPatas(string tipoPatas){

    this->tipoPatas=tipoPatas;

}

/*Patas::~Patas(){

    cout<<"La instancia de Patas fue eliminada";

}*/