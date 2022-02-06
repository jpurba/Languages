import java.util.Scanner;

public class Discount {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		
		char c;
		c = 'a';
		
		if (c == 'q') {
			System.out.println("c == q ");
		}
		else {
			System.out.println("c != q ");
		}
		
		String S;
		S = "Hi";
		
		if (S == "Hello") {
			System.out.println("S == Hello ");
		}
		else {
			System.out.println("S != Hello ");
		}
		
		int userTickets;
		int awardPoints;
		
		System.out.println("Enter userTickets: ");
		userTickets = scnr.nextInt();
		
		if (userTickets == 6) {
			awardPoints = 1;
		}
		else {
			awardPoints = userTickets;
		}
		System.out.println("awardPoints = " + awardPoints);
		
		int userAge;
		int itemDiscount;
		
		
		System.out.print("Enter user age: ");
		userAge = scnr.nextInt();
		
		if (userAge == 62) {
			itemDiscount = 15;
		}
		else {
			itemDiscount = 0;
		}
		
		System.out.println("itemDiscount = " + itemDiscount);

		
		int numPeople;
		int groupSize;
		
		System.out.print("Enter numPeople and groupSize: ");
		numPeople = scnr.nextInt();
		groupSize = scnr.nextInt();
		
		if (numPeople == 10) {
			groupSize = 2 * groupSize;
		}
		else {
			groupSize = 3 * groupSize;
			numPeople = numPeople - 1;
		}
		
		System.out.println("numPeople = " + numPeople);
		System.out.println("groupSize = " + groupSize);
		
		
		int numPlayers;
		int teamSize;
		
		System.out.print("Enter numPlayers and teamSize: ");
		numPlayers = scnr.nextInt();
		teamSize = scnr.nextInt();
		
		if (numPlayers != 11) {
			teamSize = 11;
		}
		else {
			teamSize = numPlayers;
		}
		
		teamSize = 2 * teamSize;
		
		System.out.println("numPlayers = " + numPlayers);
		System.out.println("teamSize = " + teamSize);
		
		int numPuppies;
		numPuppies = 6;
		
		if (numPuppies == 5) {
			System.out.println("o");
		}
		else {
			System.out.println("d");
		}
		System.out.println("k");
		
		int numApples;
		numApples = 5;
		
		if (numApples != 4) {
			System.out.println("c");
		}
		else {
			System.out.println("d");
		}
		System.out.println("k");
		
	}
}
