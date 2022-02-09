package chap_3_7_2;

import java.util.Scanner;

public class SafetyFeatures {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int carYear;
		
		carYear = input.nextInt();
		
	      if (carYear > 2002) {
				System.out.println("Probably has seat belts.");
				System.out.println("Probably has anti-lock brakes.");
				System.out.println("Probably has airbags.");
			}
			else if (carYear > 1990) {
				System.out.println("Probably has seat belts.");
				System.out.println("Probably has anti-lock brakes.");
			}
			else if(carYear > 1971) {
				System.out.println("Probably has seat belts.");
			}
			else if (carYear < 1967) {
				System.out.println("Probably has few safety features.");
			}
		
		input.close();

	}

}
