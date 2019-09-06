//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"
#include <iostream>

Pabellon::Pabellon() {
	setId(' ');
	setGenero(' ');
	setTamano(0);
}

Pabellon::Pabellon(char id, char genero, int tamano): id(id), genero(genero), tamano(tamano){}

Pabellon::Pabellon(int tamano) {
	for (int pabellon = 0; pabellon < tamano; pabellon++) {
	}
}

Pabellon::~Pabellon(){}

//Metodos SET
void Pabellon::setId(char id){
	id = id;
}
void Pabellon::setGenero(char genero) {
	genero = genero;
}
void Pabellon::setTamano(int tamano){
	tamano = tamano;
}
void Pabellon::setCantidad(int cantidad){}

//Metodos GET
char Pabellon::getId() const{
	return id;
}
char Pabellon::getGenero() const{
	return genero;
}
int Pabellon::getTamano() const {
	return tamano;
}
int Pabellon::getCantidad() const {
	return cantidad;
}