#include <string>
#include <iostream>

using namespace std;

#ifndef PATAS_H
#define PATAS_H


//Inicio clase
class Patas{

    //Atributos
    private:
        int canPatas;
        int larPatas;
        string tipoPatas;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Patas();
        Patas(int,int,string);

        //metodos accersores / mutadores
        int getCanPatas();
        void setCanPatas(int);
        int getLarPatas();
        void setLarPatas(int);
        string getTipoPatas();
        void setTipoPatas(string);

    //Destructor
    //~Patas();


};//Fin de la clase


#endif