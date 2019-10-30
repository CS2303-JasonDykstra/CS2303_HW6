/*
 * Destroyer.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef DESTROYER_H_
#define DESTROYER_H_

namespace std {

class Destroyer {
public:
	Destroyer();
	virtual ~Destroyer();
	char   symbol;
	short  length;
	char   *name;
	char getSymbol();
	short getLength();
	char* getName();
};

} /* namespace std */

#endif /* DESTROYER_H_ */
