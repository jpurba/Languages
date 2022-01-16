package javaAPI;

import java.util.Scanner;  // Scanner class
import java.util.Random;   // Random class
import java.io.*;          // io class

/**
 * 
 * @author Josua Purba
 * This program writes random numbers to a file
 *
 */
public class ObjectDemo {

	public static void main(String[] args) throws FileNotFoundException {
		int maxNumbers;  // max numbers of random numbers
		int number;      // to hold random number

		//scanner object for keybord input
		Scanner keyboard = new Scanner(System.in);
		
		//random object to generate random numbers
		Random rand = new Random();
		
		//Printwriter object to open the file
		
		PrintWriter outputFile = new PrintWriter("number.txt");
		
		// Get the number of random numbers to write
		System.out.println("How many random numbers should I write? ");
		maxNumbers = keyboard.nextInt();
		
		// Write the random numbers to the file
		for (int count = 0; count < maxNumbers; count++)
		{
			// Generate a random integer
			number = rand.nextInt();
			
			// Write the random integer to the file
			outputFile.println(number);
			
		}
		
		// Close the file
		outputFile.close();
		System.out.println("Done");
	}

}
