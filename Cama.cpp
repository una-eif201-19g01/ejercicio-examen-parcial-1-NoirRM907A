//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"
#include <iostream>

Cama() {
	setCodigo();
	setEstado();
}

Cama(std::string codigo, bool estado) : codigo(codigo), estado(estado) {};
