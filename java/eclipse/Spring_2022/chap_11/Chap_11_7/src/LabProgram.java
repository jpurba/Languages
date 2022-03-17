import java.util.Scanner;


public class LabProgram {

	public static void main(String[] args) throws ArrayIndexOutOfBoundsException {
		Scanner scnr = new Scanner(System.in);
		String[] names = {"Riley", "Edan", "Reagan", "Henry", "Caius",
				"Jane", "Gulo", "Sonya", "Tyrese", "Johny" };
		
		int index;
		index = scnr.nextInt();
		try {
			System.out.println("Name: " + names[index]);
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("Exception! Index " + index + 
					" out of bounds for length " + names.length);
			
			if (index < 0) {
			    System.out.println("The closest name is: " + names[0]);
			}
			else if (index > 0) {
				System.out.println("The closest name is: " + names[9]);
			}
		}

	}
}
