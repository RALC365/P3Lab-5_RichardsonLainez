#include <string>
#include <iostream>

using namespace std;

#ifndef OJOS_H
#define OJOS_H


//Inicio clase
class Ojos{

    //Atributos
    private:
        string color;
        bool visionNocturna;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Ojos();
        Ojos(string,bool);

        //metodos accersores / mutadores
        string getColor();
        void setColor(string);
        bool getVisionNocturna();
        void setVisionNocturna(bool);

    //Destructor
    ~Ojos();


};//Fin de la clase


#endif