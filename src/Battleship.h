/*
 * Battleship.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef BATTLESHIP_H_
#define BATTLESHIP_H_

namespace std {

class Battleship {
public:
	Battleship();
	virtual ~Battleship();
	char   symbol;
	short  length;
	char   *name;
	char getSymbol();
	short getLength();
	char* getName();
};

} /* namespace std */

#endif /* BATTLESHIP_H_ */
