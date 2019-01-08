/*
 * textFileWrite.cpp
 *
 *  Created on: Jan 8, 2019
 *      Author: jpurba
 */
#include <iostream>
#include <fstream>

using namespace std;


int main (){

	ofstream outFile;

	const char * outputFileName = "text.txt";

	outFile.open(outputFileName);

	if(outFile.is_open()){
		outFile << "Hello there" << endl;
		outFile <<  123 << endl;
		outFile.close();

	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}


	return 0;
}




