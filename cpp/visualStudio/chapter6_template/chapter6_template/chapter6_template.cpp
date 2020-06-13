/* 
* 
* Billie Williams * 
* Chapter 6, Programming Challenge 11: Lowest Score Drop 
* 
* January 20, 2020 
* 
*/

#include <iostream>

using namespace std;

// Function prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main(){
	//vars to hold the test scores        
	int score1;
	int score2; 
	int score3; 
	int score4; 
	int score5; 
	
	// Get the five test scores.
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);
	
	// Calculate and display the test score average, 
	// after dropping the lowest score.
	calcAverage(score1, score2, score3, score4, score5);
	
	return 0;
}

// ********************************************************
// name:      getScore
// called by: main
// passed:    int &score
// returns:   nothing
// calls:     nobody
// The getScore function asks the user for a test score,  *
// stores it in a reference parameter variable, and       *
// validates it.                                          *
// ********************************************************

void getScore(int &score){
	// Ask the user for a test score.
	cout << "Enter a test score: ";
	cin >> score;
	
	// Validate the score.
	while (score < 0 || score > 100){
		cout << "Enter a test score between 0 and 100: ";
		cin >> score;
	}
}
// ********************************************************

// name:      calcAverage
// called by: main
// passed:    int score1, score2, score3, score4, score5
// returns:   nothing
// calls:     findLowest
// The calcAverage function calculates and displays the   *
// average of the four highest scores.                    *
// ********************************************************
void calcAverage(int score1, int score2, int score3,
	             int score4, int score5){
	
	// Get the lowest score.
	int lowest = findLowest(score1,
		score2, score3, score4, score5);
	
	// Get the total of all the scores.
	int total = score1 + score2 + score3 + score4 + score5;
	
	// Drop the lowest score and calculate the average.
	int average = (total - lowest) / 4;
	
	// Display the average.
	cout << "After dropping the lowest score, "  
		 << "the test average is "  
		 << average << ".\n";
}
// ********************************************************

// name:      findLowest
// called by: calcAverage
// passed:    int score1, score2, score3, score4, score5
// returns:   lowest
// calls:     nobody
// The findLowest function finds and returns the lowest   *
// of the five scores passed to it.                       *
// ********************************************************
int findLowest(int score1, int score2, int score3,
	           int score4, int score5){
	int lowest; // To hold the lowest score.
				// Determine the lowest of the five scores.
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		lowest = score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4&& score2 < score5)
		lowest = score2; 
	else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
		lowest = score3; 
	else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
		lowest = score4; 
	else
		lowest = score5;
	// Return the lowest score.
	return lowest;
}