/*
 * Tests.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: jasondykstra
 */

#include "Tests.h"

namespace std {

Tests::Tests() {
	// TODO Auto-generated constructor stub

}

Tests::~Tests() {
	// TODO Auto-generated destructor stub
}

bool Tests::tests(){
	bool ok1 = testWelcomeScreen();
	bool ok2 = testInitializeGameBoard();
	bool ok3 = testPrintGameBoard();
	bool ok4 = testPutShipOnGameBoard();
	bool ok5 = testManuallyPlaceShipsOnGameBoard();
	bool ok6 = testRandomlyPlaceShipsOnGameBoard();
	bool ok7 = testUpdateGameBoard();
	bool ok8 = testCheckBoundsOfCardinal();
	bool ok9 = testSystemMessage();
	bool ok10 = testCheckSunkShip();
	bool ok11 = testIsValidLocation();
	bool ok12 = testConvertStringToPosition();
	bool ok13 = testIsWinner();
	bool ok14 = testGeneratePosition();
	bool ok15 = testGetTarget();
	bool ok16 = testCheckShot();
	bool ok17 = testGetRandomNumber();
	bool ok18 = testClearScreen();
	bool answer = ok1 && ok2 && ok3 && ok4 && ok5 && ok6 && ok7 && ok8 && ok9
			&& ok10 && ok11 && ok12 && ok13 && ok14 && ok15 && ok16 && ok17 && ok18;
	return answer;
}

bool Tests::testWelcomeScreen(){
	cout << "Testing welcomeScreen..." << endl;
	bool answer = true;
	Board b;
	char c;
	b.welcomeScreen();
	cout << "\n\nDid the welcome screen print? (y/n): " << endl;
	cin >> c;
	if(c == 'n'){
		answer = false;
	}

	if(answer == false){
		cout << "testWelcomeScreen failed." << endl;
	}
	return answer;
}

bool Tests::testInitializeGameBoard(){
	cout << "Testing initializeGameBoard..." << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	b.initializeGameBoard(testGameBoard);
	char c = testGameBoard[0][0].symbol;
	if(c != '~'){
		answer = false;
	}
	if(answer == false){
		cout << "testInitializeGameBoard failed." << endl;
	}
	return answer;
}

bool Tests::testPrintGameBoard(){
	cout << "Testing printGameBoard..." << endl;
	bool answer = true;
	Board b;
	char c;
	Cell testGameBoard[ROWS][COLS];
	b.initializeGameBoard(testGameBoard);
	b.printGameBoard(testGameBoard, TRUE);
	cout << "\n\nDoes this look like the game board? (y/n): " << endl;
	cin >> c;
	if(c == 'n'){
		answer = false;
	}

	if(answer == false){
		cout << "testPrintGameBoard failed." << endl;
	}
	return answer;
}

bool Tests::testPutShipOnGameBoard(){
	cout << "Testing putShipOnGameBoard..." << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	WaterCraft w = {'d', 2, "Destroyer"};
	Coordinate c = {0, 0};
	int direction = HORIZONTAL;
	b.initializeGameBoard(testGameBoard);
	b.putShipOnGameBoard(testGameBoard, w, c, direction);
	char c1 = testGameBoard[0][0].symbol;
	char c2 = testGameBoard[0][1].symbol;
	char c3 = testGameBoard[0][2].symbol;
	if(!(c1 == 'd' && c2 == 'd' && c3 == '~')){
		answer = false;
	}

	if(answer == false){
		cout << "testPutShipOnGameBoard failed." << endl;
	}
	return answer;
}

bool Tests::testManuallyPlaceShipsOnGameBoard(){
	cout << "Testing manuallyPlaceShipsOnGameBoard" << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	b.initializeGameBoard(testGameBoard);
	if(answer == false){
		cout << "testManuallyPlaceShipsOnGameBoard failed." << endl;
	}
	return answer;
}

bool Tests::testRandomlyPlaceShipsOnGameBoard(){
	cout << "Testing randomlyPlaceShipsOnGameBoard" << endl;
	bool answer = true;
	Board b;
	WaterCraft testShip[NUM_OF_SHIPS] = {{'c', 5, "Carrier"},
			{'b', 4, "Battleship"},
			{'r', 3, "Cruiser"},
			{'s', 3, "Submarine"},
			{'d', 2, "Destroyer"}};
	Cell testGameBoard[ROWS][COLS];
	b.initializeGameBoard(testGameBoard);
	b.randomlyPlaceShipsOnGameBoard(testGameBoard, testShip);
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			if(testGameBoard[i][j].symbol == 'c'){
				answer = true;
			}
		}
	}
	if(answer == false){
		cout << "testRandomlyPlaceShipsOnGameBoard failed." << endl;
	}
	return answer;
}

bool Tests::testUpdateGameBoard(){
	cout << "Testing updateGameBoard" << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	WaterCraft w = {'d', 2, "Destroyer"};
	Coordinate c = {0, 0};
	int direction = HORIZONTAL;
	b.initializeGameBoard(testGameBoard);
	b.putShipOnGameBoard(testGameBoard, w, c, direction);
	b.updateGameBoard(testGameBoard, c);
	if(testGameBoard[0][0].symbol != HIT){
		answer = false;
	}
	if(answer == false){
		cout << "testUpdateGameBoard failed." << endl;
	}
	return answer;
}


bool Tests::testCheckBoundsOfCardinal(){
	cout << "Testing checkBoundsOfCardinal..." << endl;
	bool answer = true;
	Board b;
	Boolean testCardinals[4];
	int bound = 1;
	int direction = NORTH;
	b.checkBoundsOfCardinal(testCardinals, bound, direction);
	if(testCardinals[0] == FALSE){
		answer = false;
	}
	if(answer == false){
		cout << "testCheckBoundsOfCardinal failed." << endl;
	}
	return answer;
}

bool Tests::testSystemMessage(){
	cout << "Testing systemMessage" << endl;
	bool answer = true;
	Board b;
	char* c = "This is a test of System Message, press [ENTER] to continue.\n";
	b.systemMessage(c);
	if(answer == false){
		cout << "testSystemMessage failed." << endl;
	}
	return answer;
}

bool Tests::testCheckSunkShip(){
	cout << "Testing checkSunkShip" << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	Coordinate position = {0, 0};
	short player = 1;
	char testShipSymbol = 'd';
	b.initializeGameBoard(testGameBoard);
	if(answer == false){
		cout << "testCheckSunkShip failed." << endl;
	}
	return answer;
}

bool Tests::testIsValidLocation(){
	cout << "Testing isValidLocation" << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	Coordinate position = {0, 0};
	int direction = HORIZONTAL;
	int length = 3;
	b.initializeGameBoard(testGameBoard);
	if(!b.isValidLocation(testGameBoard, position, direction, length)){
		answer = false;
	}
	if(answer == false){
		cout << "testIsValidLocation failed." << endl;
	}
	return answer;
}

bool Tests::testConvertStringToPosition(){
	cout << "Testing convertStringToPosition..." << endl;
	bool answer = true;
	Board b;
	Coordinate testPositions[2];
	char* testStringPosition = "0102";
	int length = 2;
	if(!b.convertStringtoPosition(testPositions, testStringPosition, length)){
		answer = false;
	}
	if(answer == false){
		cout << "testConvertStringToPosition failed." << endl;
	}
	return answer;
}


bool Tests::testIsWinner(){
	cout << "Testing isWinner..." << endl;
	bool answer = true;
	Board b;
	int player1 = 0;
	int player2 = 1;
	Stats testPlayers[2] = {{0, 0, 0, 0.0}, {17, 0, 0, 0}};
	if(b.isWinner(testPlayers, player1) || !b.isWinner(testPlayers, player2)){
		answer = false;
	}
	if(answer == false){
		cout << "testIsWinner failed." << endl;
	}
	return answer;
}

bool Tests::testGeneratePosition(){
	cout << "Testing generatePosition..." << endl;
	bool answer = true;
	Board b;
	int direction = HORIZONTAL;
	int length = 3;
	Coordinate c = b.generatePosition(direction, length);
	if(c.column < 0 || c.column > COLS-length){
		answer = false;
	}
	if(answer == false){
		cout << "testGeneratePosition failed." << endl;
	}
	return answer;
}


bool Tests::testGetTarget(){
	cout << "Testing getTarget..." << endl;
	bool answer = true;
	Board b;
	if(answer == false){
		cout << "testGetTarget failed." << endl;
	}
	return answer;
}


bool Tests::testCheckShot(){
	cout << "Testing checkShot..." << endl;
	bool answer = true;
	Board b;
	Cell testGameBoard[ROWS][COLS];
	WaterCraft w = {'d', 2, "Destroyer"};
	Coordinate c = {0, 0};
	int direction = HORIZONTAL;
	b.initializeGameBoard(testGameBoard);
	b.putShipOnGameBoard(testGameBoard, w, c, direction);
	Coordinate testShot = {0, 1};
	if(b.checkShot(testGameBoard, testShot) != 1){
		answer = false;
	}
	if(answer == false){
		cout << "testCheckShot failed." << endl;
	}
	return answer;
}


bool Tests::testGetRandomNumber(){
	cout << "Testing getRandomNumber..." << endl;
	bool answer = true;
	Board b;
	int randLower = 5;
	int randUpper = 20;
	int rand = b.getRandomNumber(randLower, randUpper);
	if(rand < 5 || rand > 20){
		answer = false;
	}
	if(answer == false){
		cout << "testGetRandomNumber failed." << endl;
	}
	return answer;
}

bool Tests::testClearScreen(){
	cout << "Testing clearScreen..." << endl;
	bool answer = true;
	Board b;
	char c;
	b.clearScreen();
	cout << "Was the screen cleared? (y/n): " << endl;
	cin >> c;
	if(c == 'n'){
		answer = false;
	}
	if(answer == false){
		cout << "testClearScreen failed." << endl;
	}
	return answer;
}

} /* namespace std */
