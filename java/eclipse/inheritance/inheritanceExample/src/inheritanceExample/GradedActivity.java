package inheritanceExample;

/*  
 * A Class that holds a grade for a graded activity 
 *
 */
public class GradedActivity {
	
	private double score;   // Numeric score - instance variable
	private String name;    // instance variable
	
	
	// Default constructor
	public GradedActivity () {
		System.out.println("GradedActivity: Default constructor\n");
	}
	
	// Constructor with argument
	public GradedActivity (double score, String name) {
		System.out.println("GradedActivity constructor score: "+
	score + " name: " + name);
	}
	
	// Destructor or garbage collector
	public void finalize() {
		System.out.println("GradedActivity finalize: garbage collected \n");
	}
	
	/*
	 * The setScore method sets the score fields
	 * @param s : The value to store in score
	 */
	
	public void setScore(double s)
	{
		score = s;
		System.out.println("Set new score with " + s);
	}
	
	/*
	 * The setName method sets the name field
	 * @param n : The value to store in name
	 */
	
	public void setName(String n)
	{
		name = n;
		System.out.println("Set new name with " + n);
	}
	
	
	/*
	 * The getScore method returns the score
	 * @return The value stored in the score field
	 */
	
	public double getScore()
	{
		return score;
	}
	
	/*
	 * The getName method returns the name
	 * @return The value stored in the name field
	 */
	
	public String getName()
	{
		return name;
	}
	
	/*
	 * The getGrade method returns a letter grade
	 * determined from the score field
	 * @return the letter grade
	 */
	
	public char getGrade()
	{
		char letterGrade;    // local variable
		
		if (score >= 90)
			letterGrade = 'A';
		else if (score >= 80)
			letterGrade = 'B';
		else if (score >= 70)
			letterGrade = 'C';
		else if (score >= 60)
			letterGrade = 'D';
		else
			letterGrade = 'F';
		
		return letterGrade;
	}

}
