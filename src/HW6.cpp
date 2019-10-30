//============================================================================
// Name        : HW6.cpp
// Author      : Jason Dykstra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Production.h"
#include "Tests.h"
using namespace std;

int main(int argc, char* argv[]) {
	Tests test;
	Production prod;

	if(test.tests()){
		cout << "All tests passed!" << endl;
		prod.production(argc, argv);
	} else {
		cout << "tests did not pass." << endl;
	}


	return 0;
}
