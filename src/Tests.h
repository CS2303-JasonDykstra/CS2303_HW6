/*
 * Tests.h
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#ifndef TESTS_H_
#define TESTS_H_

#include "Board.h"

namespace std {

class Tests {
public:
	Tests();
	virtual ~Tests();
	bool tests();
	bool testWelcomeScreen();
	bool testInitializeGameBoard();
	bool testPrintGameBoard();
	bool testPutShipOnGameBoard();
	bool testManuallyPlaceShipsOnGameBoard();
	bool testRandomlyPlaceShipsOnGameBoard();
	bool testUpdateGameBoard();
	bool testCheckBoundsOfCardinal();
	bool testSystemMessage();
	bool testCheckSunkShip();
	bool testIsValidLocation();
	bool testConvertStringToPosition();
	bool testIsWinner();
	bool testGeneratePosition();
	bool testGetTarget();
	bool testCheckShot();
	bool testGetRandomNumber();
	bool testClearScreen();

};

} /* namespace std */

#endif /* TESTS_H_ */
