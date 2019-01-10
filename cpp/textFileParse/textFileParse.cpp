/*
 * textFileParse.cpp
 *
 *  Created on: Jan 9, 2019
 *      Author: jpurba
 */
#include <iostream>
#include <fstream>

using namespace std;


int main () {

	const char * fileName = "text.txt";
	ifstream input;

	input.open(fileName);

	if(!input.is_open()){
		cout << "Could not open file: " << fileName << endl;
		return 1;
	}

	while(input){
            string line;
	    getline(input, line, ':');

            int population;
            input >> population;

            //input.get();

            input >> ws; // use c++ 11 for white space
            if(!input){
                break;
            }

            
            cout<<"'"<<line<<"'"<<"--"<<population<<"'"<<endl;

	}

	input.close();



	return 0;
}




