// repetition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void doWhile(void) {

	int i;
	i = 11;
	cout << "Inside doWhile: ";
	do {
		cout << i << " ";
		i = i + 5;
	} while (i <= 10);
	cout << i << endl;
}

void doWhile2(void) {

	int num, temp, sum;
	cout << "Enter a positive integer: ";
	cin >> num;
	cout << endl;

	temp = num;
	sum = 0;

	do
	{
		sum = sum + (num % 10);  // extract the last digit
		                         // and add it to sum
		num = num / 10;          // remove the last digit
		cout << "sum = " << sum << "; num = " << num << endl;
	} while (num > 0);
	cout << "The sum of the digits = " << sum << endl;

	if (sum % 9 == 0)
		cout << temp << " is divisible by 3 and 9" << endl;
	else if (sum % 3 == 0)
		cout << temp << " is divisible by 3 but not 9" << endl;
	else
		cout << temp << " is not divisible by 3 or 9" << endl;


}

void forLoop(void) {

	const int N = 20;
	int counter;
	int number;
	int zeros = 0;
	int odds = 0;
	int evens = 0;

	cout << "Please enter " << N << " integers, "
		<< "positive, negative, or zeros. "
		<< endl;
	cout << "The numbers you entered are: " << endl;
	for (counter = 1; counter <= N; counter++)
	{
		cin >> number;
		cout << number << " ";

		switch (number % 2)
		{
		case 0:
			evens++;
			if (number == 0)
				zeros++;
			break;
		case 1:
		case -1:
			odds++;
		} // end switch
	} // end for loop

	cout << endl;
	cout << "There are " << evens << " evens, "
		 << "which includes " << zeros << " zeros. "
		 << endl;
	cout << "The number of odd numbers is: " << odds
		 << endl;
}


void whileDo(void) {

	string firstName;
	string lastName;
	double testScore;
	char grade = ' ';
	double sum = 0;
	int count = 0;

	ifstream inFile;
	ofstream outFile;

	inFile.open("Ch5_stData.txt");

	if (!inFile)
	{
		cout << "Cannot open input file. "
			<< "Program terminates!" << endl;
		exit;
	}

	// open output file
	outFile.open("Ch5_stData.out");

	outFile << fixed << showpoint << setprecision(2);

	inFile >> firstName >> lastName; // read input
	inFile >> testScore;             

	while (inFile) {
		sum = sum + testScore;  // update score
		count++;                // increment count

		// determine the grade
		switch (static_cast<int> (testScore) / 10) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			grade = 'F';
			break;

		case 6:
			grade = 'D';
			break;

		case 7:
			grade = 'C';
			break;

		case 8:
			grade = 'B';
			break;

		case 9:
		case 10:
			grade = 'A';
			break;

		default:
			cout << "Invalid score." << endl;

		}
		outFile << left << setw(12) << firstName
			    << setw(12) << lastName
			    << right << setw(4) << testScore
			    << setw(2) << grade << endl;
		inFile >> firstName >> lastName;
		inFile >> testScore;
	}

	outFile << endl;

	if (count != 0)
		outFile << "Class Average: " << sum / count << endl;
	else
		outFile << "No data." << endl;
	
	inFile.close();
	outFile.close();
}

int main()
{
	whileDo();
	doWhile();
	doWhile2();
	forLoop();
	

	return 0;
}

