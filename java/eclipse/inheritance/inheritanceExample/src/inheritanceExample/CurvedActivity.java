package inheritanceExample;

/*
 * This class computes a curved grade. It extends the 
 * GradedActivity class
 */
public class CurvedActivity extends GradedActivity {

	double rawScore;    // instance variable - Unadjusted score
	double percentage;  // instance variable - Curve percentage
	
	public CurvedActivity() {
		
		percentage = 0.0;
		rawScore = 0.0;
		
		System.out.println("CurvedActivity: Default constructor\n");
		
	}
	
	public CurvedActivity(double percent)
	{
		percentage = percent;
		rawScore = 0.0;
		System.out.println("CurvedActivity constructor: "+ percent+ "\n");
	}
	
	/*
	 * The setScore method overrides the superclass setScore
	 * method. This version accepts the unadjusted score as an 
	 * argument. That score is multiplied by the curved percentage
	 * and the result is sent as an argument to the superclass's setScore method.
	 * @param s the unadjusted score.
	 */
	@Override
	public void setScore(double s)
	{
		rawScore = s;
		super.setScore(rawScore * percentage);  // set core on superclass
	}
	
	/*
	 * The getRawScore method returns the raw score.
	 * @return the value in the rawScore field;
	 */
	public double getRawScore()
	{
		return rawScore;
	}
	
	/*
	 * The getPercentage method returns the curve percentage.
	 * @return the value in the percentage field;
	 */
	public double getPercentage()
	{
		return percentage;
	}

}
