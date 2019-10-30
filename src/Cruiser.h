/*
 * Cruiser.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef CRUISER_H_
#define CRUISER_H_

namespace std {

class Cruiser {
public:
	Cruiser();
	virtual ~Cruiser();
	char   symbol;
	short  length;
	char   *name;
	char getSymbol();
	short getLength();
	char* getName();
};

} /* namespace std */

#endif /* CRUISER_H_ */
