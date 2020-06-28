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
 * Version: 1.3 (06/27/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: InternetServiceProvider
 * Purpose   : To calculate Internet Service Provider customer's monthly bill. 
 *             There are 3 packages for customer
 *             Package A: $9.95 / month with 10 hours access and $2/hour after that.
 *             Package B: $13.95 / month with 20 hours access and $1/hour after that.
 *             Package C: $19.95 / month with unlimited access.
 *             The code should ask user input for package that is used and number of
 *             the hours that are used.
 *             The code then compare the price if the user choose other packages
 *             The code display the total charges and the comparison for other charges
 *             if other charges are cheaper. If there is no saving, no message should
 *             be printed
 */

public class InternetServiceProvider {

	public static void main(String[] args) {
		
		// Defines constant variable for packages, prices and time
		final double packageAPrice = 9.95;
		final int packageATimeLimit = 10;
		final double packageAPricePerHour = 2.00;
		
		final double packageBPrice = 13.95;
		final int packageBTimeLimit = 20;
		final double packageBPricePerHour = 1.00;
		
		final double packageCPrice = 19.95;
		
		// Defines variables for calculations
		double totalBillA = 0.00;
		double totalBillB = 0.00;
		double totalBillC = 0.00;
		double extraChargeA = 0.00;
		double extraChargeB = 0.00;
		
		// Variable for string input for user package
		String userPackage;
		
		// Variable for user's time to use internet calculation
		int userHours;
		int extraHours;

		// scanner object for user input
		Scanner input = new Scanner (System.in);
		
		// Ask user input package type and time is used on internet
		System.out.println("Enter the letter of the package you purchased (A, B, or C): ");
		userPackage = input.nextLine();
		
		System.out.println("Enter the amount of hours that were used: ");
		userHours = input.nextInt();
		
		// Compute for package A
		if(userHours > packageATimeLimit)
		{
			extraHours = userHours - packageATimeLimit;
			extraChargeA = extraHours * packageAPricePerHour;
		}
		totalBillA = packageAPrice + extraChargeA;
		
		
		// Compute for package B
		if(userHours > packageBTimeLimit)
		{
			extraHours = userHours - packageBTimeLimit;
			extraChargeB = extraHours * packageBPricePerHour;
		}		
		totalBillB = packageBPrice + extraChargeB;

		
		// Compute for package C
		totalBillC = packageCPrice;
		
		// Debugging 
		//System.out.printf("Total A = $ %.2f \n", totalBillA);
		//System.out.printf("Total B = $ %.2f \n", totalBillB);
		//System.out.printf("Total C = $ %.2f \n", totalBillC);
		
		// Check the package choice and ignore capital/small case
		switch (userPackage)
		{
		case "a":
		case "A":
			
			System.out.printf("Your cost: $ %.2f \n", totalBillA);
			if (totalBillA > totalBillB)
			{
				System.out.printf("With package B, you would have saved: = $ %.2f \n", totalBillA - totalBillB);
			}
			
			if (totalBillA > totalBillC)
			{
				System.out.printf("With package C, you would have saved: = $ %.2f \n", totalBillA - totalBillC);
			}
			
			break;
		case "b":
		case "B":	

			System.out.printf("Your cost: $ %.2f \n", totalBillB);
			if (totalBillB > totalBillA)
			{
				System.out.printf("With package A, you would have saved: = $ %.2f \n", totalBillB - totalBillA);
			}
			
			if (totalBillB > totalBillC)
			{
				System.out.printf("With package C, you would have saved: = $ %.2f \n", totalBillB - totalBillC);
			}
			
			break;
		case "c":
		case "C":
			
			System.out.printf("Your cost: $ %.2f \n", totalBillC);
			if (totalBillC > totalBillA)
			{
				System.out.printf("With package A, you would have saved: = $ %.2f \n", totalBillC - totalBillA);
			}
			
			if (totalBillC > totalBillB)
			{
				System.out.printf("With package B, you would have saved: = $ %.2f \n", totalBillC - totalBillB);
			}
			
			break;
		
		default:

		}
		
		input.close();
	}

}
