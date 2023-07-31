//============================================================================
// Name        : palindrome_number.cpp
//             : palindrome number is the number from left to right and right to left
//             : are the same
// Author      : Josua Purba
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


bool IsPalindrome(int x) {
	// Special cases:
	// As discussed above, when x < 0, x is not a palindrome.
	// Also if the last digit of the number is 0, in order to be a palindrome,
	// the first digit of the number also needs to be 0.
	// Only 0 satisfy this property.
	if(x < 0 || (x % 10 == 0 && x != 0)) {
		return false;
	}

	int revertedNumber = 0;
	while(x > revertedNumber) {
		revertedNumber = revertedNumber * 10 + x % 10;
		x /= 10;
	}

	// When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
	// For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
	// since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
	return x == revertedNumber || x == revertedNumber/10;
}

void palindrome (void){
	int n, num, digit;
	unsigned int rev = 0;

	bool result;

	cout << "Enter a positive number: ";
	cin >> num;

	if(num < 0){
		//return false;
		cout << "Input negative number, it is not palindrome \n";
		return;
	}
	else if(num==0){
		cout << "Input zero number, it is palindrome \n";
        //return true;
		return;
	}
	n = num;
	while(num != 0){
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num/10;
		cout << "digit= "<< digit <<" ; rev= "<<rev<<" ; num = "<< num << endl;
	}

	cout << "The reverse number is: "<< rev << endl;
	if(n==rev){
		//result = true;
		cout <<"The number is a palindrome. " <<endl;
	}
	else{
		//result = false;
		cout <<"THe number is not a palindrome. " <<endl;
	}


	//return result;
}

int main() {

	bool result;

	int number;

	palindrome();

	cout << "\nEnter an integer number: ";
	cin >> number;

	//number = -121;
	result= IsPalindrome(number);
	if (result == true)
	    cout <<"number: "<< number << " is a palindrome " << endl;
	else if (result == false)
		    cout <<"number: "<< number << " is NOT a palindrome " << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	return 0;
}
