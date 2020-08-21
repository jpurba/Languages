#ifndef FINALEXAM_H_
#define FINALEXAM_H_

#include "GradedActivity.h"
class FinalExam : public GradedActivity
{
private:
	int numQuestions;    // Number of questions
	double pointsEach;   // Points for each question
	int numMissed;       // Number of questions missed
public:
	// Default constructor
	FinalExam();
	
	// Constructor
	FinalExam(int questions, int missed);

	// Destructor
	~FinalExam();

	// Mutator function
	void set(int, int); 

	// Accessor functions
	int getNumQuestions() const;

	double getPointsEach() const;

	int getNumMissed() const;
};



#endif