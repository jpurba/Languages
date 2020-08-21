#ifndef GRADEDACTIVITY_H_
#define GRADEDACTIVITY_H_

// GradedActivity class declaration
class GradedActivity
{
private:
	double score;                // To hold numeric score

public:
	
	GradedActivity();            // Default constructor
	GradedActivity(double s);    // Constructor
	~GradedActivity();           // Destructor

	void setScore(double s);     // Mutator function
	double getScore() const;     // Accessor function
	char getLetterGrade() const;

};

#endif
