/*
 * Cruiser.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Cruiser.h"

namespace std {

Cruiser::Cruiser() {
	// TODO Auto-generated constructor stub
	symbol = 'r';
	length = 3;
	name = "Cruiser";
}

Cruiser::~Cruiser() {
	// TODO Auto-generated destructor stub
}

char Cruiser::getSymbol(){
	return symbol;
}

short Cruiser::getLength(){
	return length;
}

char* Cruiser::getName(){
	return name;
}

} /* namespace std */
