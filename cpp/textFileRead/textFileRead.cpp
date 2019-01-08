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

	const char * outputFileName = "text.txt";
	ifstream inFile;

	inFile.open(outputFileName);

	if(inFile.is_open()){
		string line;
		while(!inFile.eof()){
		    getline(inFile, line);
		    cout << line << endl;
		}
		inFile.close();

	}
	else {
		cout << "Could not open file: " << outputFileName << endl;
	}


	return 0;
}
