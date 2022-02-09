import java.util.Scanner;

public class YearChecker {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);

		int givenYear;
		
		System.out.println("Step 1 complete");
		System.out.println("Step 2 as well");
		System.out.println("All steps now complete");
		
        System.out.println("Probably has seat belts.");
	    System.out.println("Probably has electronic stability control.");
	    System.out.println("Probably has tire-pressure monitor.");
		
		givenYear = scnr.nextInt();
		
		if (givenYear >= 2101) {
			System.out.println("Distant future");
			System.out.println("Distant future");
		}
		else if (givenYear >= 2001) {
		
			System.out.println( "21st century");
		}
		else if(givenYear >= 1901) {
			System.out.println("20th century");
		}
		else {
			System.out.println("Long ago");
		}
		
		scnr.close();
	}

}
