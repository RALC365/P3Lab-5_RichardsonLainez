#include <string>
#include <iostream>

using namespace std;

#ifndef OREJAS_H
#define OREJAS_H


//Inicio clase
class Orejas{

    //Atributos
    private:
        int tamano;
        int capacidadAudicion;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Orejas();
        Orejas(int,int);

        //metodos accersores / mutadores
        int getTamano();
        void setTamano(int);
        int getCapacidadAudicion();
        void setCapacidadAudicion(int);

    //Destructor
    ~Orejas();


};//Fin de la clase


#endif