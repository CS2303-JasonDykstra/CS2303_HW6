/*
 * Submarine.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Submarine.h"

namespace std {

Submarine::Submarine() {
	// TODO Auto-generated constructor stub
	symbol = 's';
	length = 3;
	name = "Submarine";
}

Submarine::~Submarine() {
	// TODO Auto-generated destructor stub
}

char Submarine::getSymbol(){
	return symbol;
}

short Submarine::getLength(){
	return length;
}

char* Submarine::getName(){
	return name;
}



} /* namespace std */
