#include "Cola.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Cola::Cola(int largo,bool isPeluda){
    this->largo=largo;
    this->isPeluda=isPeluda;
}//Fin constructor

//Constructor2
Cola::Cola(){

}//Fin constructor sencillo

int Cola::getLargo(){
    return largo;
}

void Cola:: setLargo(int largo){

    this->largo=largo;

}

bool Cola::getIsPeluda(){
    return isPeluda;
}

void Cola:: setIsPeluda(bool isPeluda){

    this->isPeluda=isPeluda;

}

Cola::~Cola(){

    cout<<"La instancia de Cola fue eliminada";

}