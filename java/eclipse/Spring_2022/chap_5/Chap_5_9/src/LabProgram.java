import java.util.Scanner;

/* Direct driving distances between cities, in miles */
/* 0: Boston  1: Chicago  2: Los Angeles  */

public class LabProgram {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		int cityA;   /* Starting City */
		int cityB;   /* Destination city */
		
		int[][] drivingDistances = new int[3][3];  /* Driving distances */
		
		drivingDistances[0][0] = 0;
		drivingDistances[0][1] = 960;  // Boston-Chicago
		drivingDistances[0][2] = 2960; // Boston-Los Angeles
		
		drivingDistances[1][0] = 960;  // Chicago-Boston
		drivingDistances[1][1] = 0;
		drivingDistances[1][2] = 2011; // Chicago-Los Angeles
		
		drivingDistances[2][0] = 2960; // Los Angeles-Boston
		drivingDistances[2][1] = 2011; // Los Angeles-Chicago
		drivingDistances[2][2] = 0;
		
		System.out.println("0: Boston 1: Chicago 2: Los Angeles");
		cityA = scnr.nextInt();
		cityB = scnr.nextInt();
		
		if((cityA >= 0) && (cityA <= 2) && (cityB >= 0) && (cityB <=2)) {
			System.out.print("Distance: " + drivingDistances[cityA][cityB]);
			System.out.println(" miles.");
		}
		
		System.out.println("Welcome!");
	}

}
