//============================================================================
// Name        : palindrome_string.cpp
// Author      : Josua Purba
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// Function to reverse a string
void reverseStr(string& str){

	int n = str.length();
	// swap char start from two corners
	//for(int i=0; i<n/2; i++)
		//swap(str[i],str[n-i-1]);

}
// Function to check whether the string is palindrome
bool isPalindrome(string S){

	bool result;

	string rev = string(S.rbegin(),S.rend());

	if (S == rev){
		cout<<"string is Palindrome\n";
		result = true;
	}
	else{
		cout<<"string is not Palindrome \n";
		result = false;
	}

	cout << "Input string: " << S <<" ; reverse string: " << rev << endl;

	return result;
}

void palindromeChar(char arr[], int n){
	int flag = 0;


	for(int i =0; i< n; i++){
		if(arr[i] != arr[n-i-1]){
			flag = 1;
			break;
		}
	}

	if (flag)
		cout << "NOT Palindrome\n";
	else
		cout <<"Palindrome\n";
}

int main() {
	string string1;
	int i, length;
	int flag=0;

	bool result;

	cout <<"Enter a string: ";
	cin >> string1;

	result = isPalindrome(string1);

	if (result == true){
		cout<<"string is Palindrome\n";
	}
	else{
		cout<<"string is not Palindrome \n";
	}

	char arr[20];

	cout <<"Enter a string: ";
	cin >> arr;

	//int n = sizeof(arr) / sizeof(arr[0]);

	int n = strlen(arr);

	cout << "n = " << n << endl;

	palindromeChar(arr,n);
	return 0;
}
