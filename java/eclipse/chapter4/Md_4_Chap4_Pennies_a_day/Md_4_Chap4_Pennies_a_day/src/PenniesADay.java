/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.2 (06/25/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: PenniesADay
 * Purpose   : To calculate the amount a person would earn over a period of time. 
 *             His / her salary is one penny the first day, two pennies the second day,
 *             and continues to double each day.
 *             The program should display a table showing the salary for each day, and 
 *             then show the total pay at the end of the period.
 *             The output should be displayed in a dollar amount, not the number 
 *             of pennies.
 */
public class PenniesADay {

	public static void main(String[] args) {
		
		// variable for number of day to work
		int numberDay;
		int i;
		// variable to calculate payment of salary
		final double initialSalary = 0.01;
		double totalSalary = 0.00;
		double currentSalary;
		
		// scanner object for user's input
		Scanner input = new Scanner (System.in);
		
		// Ask user input for number of day to work
		System.out.println("Enter period of time to work (in day) : ");
		numberDay = input.nextInt();
		
		while(numberDay <= 0)
		{
			System.out.println("Error ! Please enter positive number !");
			System.out.println("Enter period of time to work (in day) : ");
			numberDay = input.nextInt();
		}
		
		System.out.println("Day\tSalary(in Dollar)");
		// For the first day, set salary to $ 0.01
		currentSalary = initialSalary;  
		
		// Calculate salary for each day 
		for (i=0;i <= numberDay; i++)
		{
			// Display output number of day and Salary (in Dollar)
			System.out.println(i+"\t$ " + currentSalary);
			
			// Add currentSalary to totalSalary;
			totalSalary+=currentSalary;
			
			// Double the current salary
			currentSalary *= 2;
		}
	
		

	}

}
