/*
 * Carrier.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Carrier.h"

namespace std {

Carrier::Carrier() {
	// TODO Auto-generated constructor stub
	symbol = 'c';
	length = 5;
	name = "Carrier";
}

Carrier::~Carrier() {
	// TODO Auto-generated destructor stub
}

char Carrier::getSymbol(){
	return symbol;
}

short Carrier::getLength(){
	return length;
}

char* Carrier::getName(){
	return name;
}

} /* namespace std */
