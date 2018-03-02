temp: Main.o Zoologico.o Animales.o Cola.o Ojos.o Orejas.o Patas.o Pelaje.o
	g++ Main.o Zoologico.o Animales.o Cola.o Ojos.o Orejas.o Patas.o Pelaje.o -o temp

Main.o: Main.cpp Zoologico.h Animales.h
	g++ -c Main.cpp

Zoologico.o: Zoologico.h Zoologico.cpp Animales.h 
	g++ -c Zoologico.cpp

Animales.o: Animales.h Animales.cpp Cola.h Ojos.h Orejas.h Patas.h Pelaje.h 
	g++ -c Animales.cpp

Cola.o: Cola.h Cola.cpp 
	g++ -c Cola.cpp

Ojos.o: Ojos.h Ojos.cpp
	g++ -c Ojos.cpp

Orejas.o: Orejas.h Orejas.cpp
	g++ -c Orejas.cpp

Patas.o: Patas.h Patas.cpp
	g++ -c Patas.cpp

Pelaje.o: Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp
