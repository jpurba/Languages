import java.util.Scanner;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.PrintWriter;
import java.io.IOException;

public class LabProgram {

	public static void main(String[] args) throws IOException {
		Scanner scnr = new Scanner(System.in);
		
		FileInputStream fileByteStream = null;
		Scanner inFS = null;
		String firstName;
		String lastName;
		int exam1;
		int exam2;
		int exam3;
		double average;
		String fileName;

		// Try to open file:
		System.out.println("Enter file name: ");
		fileName = scnr.nextLine();
		fileByteStream = new FileInputStream(fileName);
		inFS = new Scanner(fileByteStream);
		
		while(inFS.hasNext()) {
			lastName = inFS.next();
			firstName = inFS.next();
			exam1 = inFS.nextInt();
			exam2 = inFS.nextInt();
			exam3 = inFS.nextInt();
			average = (int)((exam1 + exam2 + exam3)/3);
			System.out.println(lastName + ", " + firstName + " has average: "+ average);
		}

	}

}
