#include <string>
#include <iostream>

using namespace std;

#ifndef PELAJE_H
#define PELAJE_H


//Inicio clase
class Pelaje{

    //Atributos
    private:
        string color;
        int grosor;
        int largo;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Pelaje();
        Pelaje(string,int,int);

        //metodos accersores / mutadores
        string getColor();
        void setColor(string);
        int getGrosor();
        void setGrosor(int);
        int getLargo();
        void setLargo(int);

    //Destructor
    ~Pelaje();


};//Fin de la clase


#endif