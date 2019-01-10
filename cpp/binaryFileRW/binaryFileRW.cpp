/*
 * binaryFileRW.cpp
 *
 *  Created on: Jan 9, 2019
 *      Author: jpurba
 */


#include <iostream>
#include <fstream>

using namespace std;
#pragma pack(push, 1) // allign to single bit to avoid padding

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop) // end pragma

int main () {

	Person someone = {"Freed", 22, 5.8};
	Person Jobi    = {"Jobi", 35, 5.5};

	//Write Binary File //
	ofstream outputFile;

	const char * fileName = "text.bin";

	outputFile.open(fileName, ios::binary);

    if(outputFile.is_open()){    	
       outputFile.write((char *)&someone, sizeof(Person));
       outputFile.write((char *)&Jobi, sizeof(Jobi));
       outputFile.close();
    }
    else {
    	cout << "Could not create file: " << outputFile << endl;
    }




    // Read Binary File //
    Person someoneElse = {};
    Person JobiElse = {};
    ifstream inputFile;


    inputFile.open(fileName, ios::binary);

    if(inputFile.is_open()){
    	inputFile.read((char *)&someoneElse, sizeof(Person));
    	inputFile.read((char *)&JobiElse, sizeof(Person));
    	inputFile.close();

    }
    else {
          cout << "Could not read file: " << inputFile << endl;
    }

    cout<<someoneElse.name<< ", "<<someoneElse.age<<", "<<someoneElse.height<<endl;
    cout<<JobiElse.name<< ", "<<JobiElse.age<<", "<<JobiElse.height<<endl;

	return 0;
}




