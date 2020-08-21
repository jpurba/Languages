#include <iostream>
#include "GradedActivity.h"

using namespace std;

// Default constructor
GradedActivity::GradedActivity()
{
	score = 0.0;
	cout << "GradedActivity default constructor \n";
}

// Constructor
GradedActivity::GradedActivity(double s)
{
	score = s;
	cout << "GradedActivity constructor with parameter \n";
}

// Default destructor
GradedActivity::~GradedActivity()
{
	cout << "GradedActivity default destructor \n";
}

// Mutator function
void GradedActivity::setScore(double s)
{
	score = s;
}

// Accessor function
double GradedActivity::getScore() const
{
	return score;
}

char GradedActivity::getLetterGrade() const
{
	char letterGrade;  // To hold the letter grade
	if (score > 89)
		letterGrade = 'A';
	else if (score > 79)
		letterGrade = 'B';
	else if (score > 69)
		letterGrade = 'C';
	else if (score > 59)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}
