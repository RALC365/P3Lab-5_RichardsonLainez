#include <iostream>
#include <string>
#include "Zoologico.h"
#include "Animales.h"

using namespace std;
int menu();
void crearZoologico();
void crearAnimales();
void eliminarTodosLosAnimales();
void eliminarUnSoloElemento();
void listarAnimales();
void meterAnimales();
vector<Animales> listaEspera;
Zoologico zoo;

int main(){
	crearZoologico();
	char resp = 's';

	do{
		int opc = 0;
		opc = menu();
		switch(opc){
			case 1:
					crearAnimales();
				break;
					
			case 2:
					meterAnimales();
				break;

			case 3:
					listaEspera.resize(0);
					cout << "Se han eliminado los elementos de la lista" << endl;
				break;

			case 4:
					eliminarUnSoloElemento();
				break;

			case 5:
					//cout << "Este método listará los elementos del zoologico" << endl;
					listarAnimales();
				break;			

		};

		if(opc == 6){
			cout << "¡Que tenga un excelente día" << endl;
			resp = 'd';
		}else{
			cout << "¿Desea continuar? S/N"<< endl; 
			cin >> resp;
		}

	}while(resp == 's' || resp == 'S');

	return 0;
}

int menu(){
	int opc = 0;
	do{
		cout << "--Menú--" << endl;
		cout << "1.- Agregar Animales" << endl;
		cout << "2.- Agregar Animales a listas del zoologico" << endl;
		cout << "3.- Eliminar todos los Animales de las lista de Espera" << endl;
		cout << "4.- Eliminar un animal en especifico" << endl;
		cout << "5.- Listar animales de zoologicos" << endl;
		cout << "6.- Salir" << endl;
		cout << "Ingrese una opcion: " << endl;
		cin >> opc;

	}while(opc <1 || opc >6);

	return opc;
}
void crearZoologico(){
	string nombre;	
	int tamano;
	int cPersonas;
	cout << "Ahorita crearemos el zoologico" << endl;
	cout << "Ingrese el nombre: "	<< endl;
	cin  >> nombre;

	cout << "Ingrese el tamano"	<< endl;
	cin >> tamano;

	cout << "Ingrese la cantidad de personas"	<< endl;
	cin >> cPersonas;

	
	zoo = Zoologico(nombre, tamano, cPersonas);
	cout << "El zoologico fue creado con exito"	<< endl;
}


void crearAnimales(){
	string nombreEspecie;
	string nombreAnimal;
	int tamano;
	int tipo;

	cout << "Ahora crearemos un nuevo animal" << endl;

	cout << "Ingrese el nombre de la especie" << endl;
	cin >> nombreEspecie;

	cout << "Ingrese el nombre del animal" << endl;
	cin >> nombreAnimal;

	cout << "Ingrese el tamano" << endl;
 	cin >> tamano;

 	//char temp = 'p';
 	cout << "Seleccione el tipo de animal (Debe ingresar un numero)" << endl;
 	do{
 		cout << "1.-Zona Artica" << endl;
 		cout << "2.-Zona Desertica" << endl;
 		cout << "3.-Zona Jungla Tropical" << endl;
 		cout << "4.-Zona Sabana" << endl;
 		cin >> tipo;
 	}while(tipo < 1 || tipo > 4);

 	//Animales animal = Animales(nombreEspecie, nombreAnimal, tamano, tipo);
 	listaEspera.push_back(Animales(nombreEspecie, nombreAnimal, tamano, tipo));
 	cout << "El animal se ha creado con exito y se añadio a la lista de espera" << endl; 	
}


void eliminarTodosLosAnimales(){
			listaEspera.resize(0);
}

void eliminarUnSoloElemento(){
	if(listaEspera.empty()){
		cout << "La lista de espera está vacía" << endl;
	}else{
		int pos = 0;
		cout << "Puede eliminar de la posicion 0 - " << listaEspera.size()-1 << endl;
		do{
			cout << "Ingrese el numero: " << endl;
			cin >> pos;
		}while(pos < 0 || pos >= listaEspera.size());

		listaEspera.erase(listaEspera.begin()+ pos, listaEspera.begin() + pos + 1);
		cout << "¡El animal ha sido asesido con mucho dolor!" << endl;
	}	
}

void listarAnimales(){
	cout << "Zona Artica" << endl;
		for (int i = 0; i < zoo.getZonaArtica().size(); i++){
			Animales temp = zoo.getZonaArticaDirecto(i);
			cout << "Especie: " << temp.getNombreEspecie() << endl;
			
			cout << "Nombre: " << temp.getNombreAnimal()<< endl;

			cout << "Tipo: "<< temp.getTipoString() << endl;
			
			cout << "Tamano: " << temp.getTamano() << endl;
		}

	cout << endl << "Zona Desertica" << endl;

		for (int i = 0; i < zoo.getZonaSabana().size(); i++){
			Animales temp = zoo.getZonaSabanaDirecto(i);
			cout << "Especie: " << temp.getNombreEspecie() << endl;
			
			cout << "Nombre: " << temp.getNombreAnimal()<< endl;

			cout << "Tipo: "<< temp.getTipoString() << endl;
			
			cout << "Tamano: " << temp.getTamano() << endl;
		}

	cout  << endl <<"Zona Jungla Tropical" << endl;

		for (int i = 0; i < zoo.getZonaDesertica().size(); i++){
			Animales temp = zoo.getZonaDeserticaDirecto(i);
			cout << "Especie: " << temp.getNombreEspecie() << endl;
			
			cout << "Nombre: " << temp.getNombreAnimal()<< endl;

			cout << "Tipo: "<< temp.getTipoString() << endl;
			
			cout << "Tamano: " << temp.getTamano() << endl;
		}

	cout << endl <<"Zona Sabana" << endl;

		for (int i = 0; i < zoo.getZonaJunglaTropical().size(); i++){
			Animales temp = zoo.getZonaJunglaTropicalDirecto(i);
			cout << "Especie: " << temp.getNombreEspecie() << endl;
			
			cout << "Nombre: " << temp.getNombreAnimal()<< endl;

			cout << "Tipo: "<< temp.getTipoString() << endl;
			
			cout << "Tamano: " << temp.getTamano() << endl;
		}
}

void meterAnimales(){
	for (int i = 0; i < listaEspera.size(); i++){
		switch(listaEspera[i].getTipo()){
			case 1:
					zoo.setZonaArtica(listaEspera[i]);
				break;

			case 2:
					//tipoString = "Zona Desertica";
					zoo.setZonaDesertica(listaEspera[i]);
				break;

			case 3:
					//tipoString = "Zona Jungla Tropical";
					zoo.setZonaJunglaTropical(listaEspera[i]);
				break;

			case 4:
					//tipoString = "Zona Sabana";
					zoo.setZonaSabana(listaEspera[i]);
				break;
		}
	}

	cout<< "Se han agregado los animales al zoologico" << endl;
	eliminarTodosLosAnimales();

	cout << "Por lo tanto, la lista de espera ahora está vacía" << endl;


}