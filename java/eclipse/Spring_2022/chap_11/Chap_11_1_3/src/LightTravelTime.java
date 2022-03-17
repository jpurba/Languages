import java.util.Scanner;
import java.util.InputMismatchException;

public class LightTravelTime {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		double distMiles = 0.0;
		double lightTravelTimeSec = 0.0;
		
		System.out.println("Enter distance in miles: ");
		try {
			distMiles = scnr.nextDouble();
			lightTravelTimeSec = distMiles /156282.2;
		}
		catch(InputMismatchException e) {
			System.out.println("Must enter a number!");
		}

		System.out.println(lightTravelTimeSec);
	}

}
