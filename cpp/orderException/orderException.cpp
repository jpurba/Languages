/*
 * orderException.cpp
 *
 *  Created on: Jan 7, 2019
 *      Author: jpurba
 */
#include <iostream>
#include <exception>

using namespace std;

void goesWrong(){

    bool error1Detected = true;
    bool error2Detected = true;

    if(error1Detected){
        throw bad_alloc();
    }

    if(error2Detected){
        throw exception();
    }

}


int main () {

    try {
    	goesWrong();
    }
    catch(bad_alloc &e) { // always use subclasses first
    	cout << "Catching bad_alloc: " << e.what() << endl;
    }
    catch(exception &e) {  // bad_alloc is subset of exception.
    	cout << "Catching Exception: " << e.what() << endl;
    }


    return 0;
}



