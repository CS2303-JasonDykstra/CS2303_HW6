/*
 * Destroyer.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Destroyer.h"

namespace std {

Destroyer::Destroyer() {
	// TODO Auto-generated constructor stub
	symbol = 'd';
	length = 2;
	name = "Destroyer";
}

Destroyer::~Destroyer() {
	// TODO Auto-generated destructor stub
}

char Destroyer::getSymbol(){
	return symbol;
}

short Destroyer::getLength(){
	return length;
}

char* Destroyer::getName(){
	return name;
}

} /* namespace std */
