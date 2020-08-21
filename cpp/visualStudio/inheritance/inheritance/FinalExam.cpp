#include <iostream>
#include "FinalExam.h"

using namespace std;

// Default constructor
FinalExam::FinalExam()
{
	numQuestions = 0 ;
	pointsEach = 0.0 ;
	numMissed = 0;
	cout << "Final Exam default constructor \n";
}

// Default destructor
FinalExam::~FinalExam()
{
	cout << "FinalExam default destructor \n";
}

// Constructor with parameter
FinalExam::FinalExam(int questions, int missed)
{
	set(questions, missed);
	cout << "Final Exam constructor with parameter \n";
}

// Accessor functions
int FinalExam::getNumQuestions() const
{
	return numQuestions;
}

double FinalExam::getPointsEach() const
{
	return pointsEach;
}

int FinalExam::getNumMissed() const
{
	return numMissed;
}

//************************************************
// set function
// The parameters are the number of questions and 
// the number of questions missed.         
//************************************************
void FinalExam::set(int questions, int missed)
{
	double numericScore;  // To hold the numberic score
	// Set the number of questions and number missed
	numQuestions = questions;
	numMissed = missed;

	// Calculate the points for each question
	pointsEach = 100.0 / numQuestions;

	// Calculate the numeric score for this exam
	numericScore = 100.0 - (missed * pointsEach);

	// Call the inherited setScore function to set
	// the numeric score
	setScore(numericScore);
}