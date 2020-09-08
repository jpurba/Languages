package abstractClass;

public class CompSciStudent extends Student {
	
	// Required hours
	private final int MATH_HOURS = 20; 
	private final int CS_HOURS = 40;
	private int GEN_ED_HOURS = 60;
	
	// Hours taken
	private int mathHours;    // Math hours taken
	private int csHours;      // Comp sci hours taken
	private int genEdHours;   // General ed hours
	
	/*
	 * The constructor sets the student's name,
	 * ID number, and year admitted.
	 * @param n The student's name.
	 * @param id The student's ID number
	 * @param year The year the student was admitted
	 */
	public CompSciStudent(String n, String id, int year)
	{
		super(n, id, year);  // call super class constructor
	}

	public void setMathHours(int math)
	{
		mathHours = math;
	}
	
	public void setCsHours(int cs)
	{
		csHours = cs;
	}
	
	public void setGenEdHours(int genEd)
	{
		genEdHours = genEd;
	}
	
	@Override
	public int getRemainingHours() 
	{
		int regHours;
		int remainingHours;
		
		regHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;
		
		remainingHours = regHours - (mathHours + csHours + genEdHours);
		
		return remainingHours;
		
	}
	@Override
	public String toString()
	{
		String str;
		
		str = super.toString() + 
				"\nMajor: Computer Science" +
				"\nMath Hours Taken: " + mathHours +
				"\nComputer Science Hours Taken: " + csHours +
				"\nGeneral Ed Hours Taken: " + genEdHours;
		return str;
	}
	
	
}
