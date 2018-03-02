#include <string>
#include <iostream>

using namespace std;

#ifndef COLA_H
#define COLA_H


//Inicio clase
class Cola{

    //Atributos
    private:
        int largo;
        bool isPeluda;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Cola();
        Cola(int,bool);

        //metodos accersores / mutadores
        int getLargo();
        void setLargo(int);
        bool getIsPeluda();
        void setIsPeluda(bool);

    //Destructor
    ~Cola();


};//Fin de la clase


#endif