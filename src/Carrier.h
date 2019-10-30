/*
 * Carrier.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef CARRIER_H_
#define CARRIER_H_

namespace std {

class Carrier {
public:
	Carrier();
	virtual ~Carrier();
	char   symbol;
	short  length;
	char   *name;
	char getSymbol();
	short getLength();
	char* getName();
};

} /* namespace std */

#endif /* CARRIER_H_ */
