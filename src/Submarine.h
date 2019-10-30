/*
 * Submarine.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef SUBMARINE_H_
#define SUBMARINE_H_

namespace std {

class Submarine {
public:
	Submarine();
	virtual ~Submarine();
	char   symbol;
	short  length;
	char   *name;
	char getSymbol();
	short getLength();
	char* getName();
};

} /* namespace std */

#endif /* SUBMARINE_H_ */
