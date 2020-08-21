// inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
//#include "GradedActivity.h"
#include "FinalExam.h"

using namespace std;

int main()
{
    double testScore;   // To hold test score
    int questions;      // Number of questions on the exam
    int missed;         // Number of questions missed by the student
    
    // Create a GradedActivity object for the test
    GradedActivity test;
    FinalExam finalExams;

    // Get a numeric test score from the user
    cout << "Enter your numeric test score: ";
    cin >> testScore;

    // Store the numeric score in the test object
    test.setScore(testScore);

    // Display the letter grade for the test
    cout << "The grade for the test is "
        << test.getLetterGrade() << endl;


    // For Final exam
    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Define a FinalExam object and initialize it with 
    // the value entered
    FinalExam finalTest(questions, missed);

    // Display the test results
    cout << setprecision(2);
    cout << "\nEach question counts " << finalTest.getPointsEach()
        << " points.\n";
    cout << "The exam score is " << finalTest.getScore() << endl;
    cout << "The exam grade is " << finalTest.getLetterGrade() << endl;


    return 0;

}

