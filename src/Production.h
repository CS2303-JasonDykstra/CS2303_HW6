/*
 * Production.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef PRODUCTION_H_
#define PRODUCTION_H_
#include "Board.h"

namespace std {

class Production {
public:
	Production();
	virtual ~Production();
	bool production(int argc, char* argv[]);
};

} /* namespace std */

#endif /* PRODUCTION_H_ */
