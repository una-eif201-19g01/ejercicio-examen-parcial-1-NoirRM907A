//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"
#include <iostream>

Cama::Cama() {
	setCodigo();
	setEstado();
}

Cama::Cama(const std::string &codigo, bool estado) : codigo(codigo), estado(estado) {};

Cama::~Cama(){}

//Metodos SET
void Cama::setCodigo(const std::string &codigo) {
	Cama::codigo = codigo;
}
void Cama::setEstado(bool estado) {
	Cama::estado = estado;
}

//Metodos GET
const std::string &Cama::getCodigo() {
	return codigo;
}
