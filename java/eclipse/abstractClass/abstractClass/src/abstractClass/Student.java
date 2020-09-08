package abstractClass;


/*
 * The student class is an abstract class that holds general
 * data about a student. CLasses representing specific types
 * of students should inherit from this class
 */

public abstract class Student {
	
	private String name;      // student name
	private String idNumber;  // Student ID
	private int yearAdmitted; // Year admitted
	
	public Student()
	{
		name = " ";
		idNumber = " ";
		yearAdmitted = 0;
	}
	
	/*
	 * The constructor sets the student's name,
	 * ID number, and year admitted.
	 * @param n The student's name.
	 * @param id The student's ID number
	 * @param year The year the student was admitted
	 */
	public Student(String n, String id, int year)
	{
		name = n;
		idNumber = id;
		yearAdmitted = year;
	}
	
	/*
	 * The toString method returns a string containing
	 * the student's data
	 * @return A reference to a string.
	 */
	public String toString()
	{
		String str;
		
		str = "Name: " + name
				+ "\nID Number: " + idNumber
				+ "\nYear Admitted: " + yearAdmitted;
		
		return str;	
	}
	
	/*
	 * THe getRemainingHours method is abstract. It must be 
	 * overridded in a sublass. 
	 * @return The hours remaining for the students
	 */
	
	public abstract int getRemainingHours();

}
