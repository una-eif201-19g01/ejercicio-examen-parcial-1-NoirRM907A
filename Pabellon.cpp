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

Pabellon::Pabellon(char id, char genero, int tamano): id(id), genero(genero), tamano(tamano){
    cantidad = 0;
	cama = new Cama*[tamano];
}

Pabellon::Pabellon(int tamano) {
	
}

Pabellon::~Pabellon(){
	
	delete[] cama;
}

//Metodos SET
void Pabellon::setId(char id){
	Pabellon::id = id;
}
void Pabellon::setGenero(char genero) {
	Pabellon::genero = genero;
}
void Pabellon::setTamano(int tamano){
	Pabellon::tamano = tamano;
}
void Pabellon::setCantidad(int cantidad){
	Pabellon::cantidad = cantidad;;
}

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

//Metodos Coleccion
Cama* Pabellon::obtenerCama(int posicion) const {
	return cama[posicion];
}

void Pabellon::agregarCama(Cama* camaNueva){
	if (cantidad < tamano)
		cama[cantidad++] = camaNueva;
}

void Pabellon::eliminarCama(Cama* camaEliminada) {
	if (cantidad < tamano) {
    delete camaEliminada;
	}
	cantidad--;
}

void Pabellon::eliminarTodasLasCamas(){
	for (int i = 0;i<cantidad; i++){
		delete cama[i];
	}
	cantidad = 0;
}