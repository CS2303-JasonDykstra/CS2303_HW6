/*
 * Battleship.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Battleship.h"

namespace std {

Battleship::Battleship() {
	// TODO Auto-generated constructor stub
	symbol = 'b';
	length = 4;
	name = "Battleship";
}

Battleship::~Battleship() {
	// TODO Auto-generated destructor stub
}

char Battleship::getSymbol(){
	return symbol;
}

short Battleship::getLength(){
	return length;
}

char* Battleship::getName(){
	return name;
}

} /* namespace std */
