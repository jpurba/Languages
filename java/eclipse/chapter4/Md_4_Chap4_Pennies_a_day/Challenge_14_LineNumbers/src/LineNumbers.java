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
 * Version: 1.2 (07/04/2020)
 */
// Needed for the Scanner class for input
import java.util.Scanner;

//Needed for file IO
import java.io.*;

/**
 * Class Name: LineNumbers
 * Purpose   : The program should asks user for the file name and then should display 
 *             the content of the file with each line preceded with a line number 
 *             followed by a colon. The line numbering should start at 1.
 * 
 */
public class LineNumbers {

	
	public static void main(String[] args) throws IOException
	{
		
		// scanner object for user's input
		Scanner input = new Scanner (System.in);
		
		// Set variable to write to a new file
		PrintWriter fileName = new PrintWriter("data.txt");
		char moreLines = 'y';
		String userLine;
		String fileToOpen;
		int numberOfLines = 1;
		
		while (moreLines == 'y' || moreLines =='Y')
		{
			System.out.println("Please enter a line: ");
			userLine = input.nextLine();
			fileName.println(userLine);
			System.out.println("Do you want to enter another line? (y/n) ");
			moreLines = input.nextLine().charAt(0);
		}
		
		fileName.close();
		System.out.println("Please enter the name of the file you want to open: ");
		fileToOpen = input.nextLine();
		
		// Open the file
		File fileOpened = new File(fileToOpen);
		while(!fileOpened.exists())
		{
			System.out.println(fileToOpen + " does not exist. \nPlease enter another file name: ");
			fileToOpen = input.nextLine();
			fileOpened = new File(fileToOpen);
		}
		
		Scanner fileToRead = new Scanner(fileOpened);
		
		System.out.println("THe first five lines of the files are: ");
		while( fileToRead.hasNext() && numberOfLines <=5 )
		{
			System.out.println (fileToRead.nextLine());
			numberOfLines++;
		}

	}

}
