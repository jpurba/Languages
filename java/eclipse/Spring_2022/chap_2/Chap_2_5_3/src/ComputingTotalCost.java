import java.util.Scanner;

public class ComputingTotalCost {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int numDrinks;
		int numTacos;
		int totalCost;
		int x;
		int y;
		
		x=8;
		y=1;
		x += (3+y);
		y=2;
		
		System.out.println(x);
		System.out.println(y);
		
		numDrinks = scnr.nextInt();
		numTacos  = scnr.nextInt();
		
		totalCost = (2*numDrinks) + (3*numTacos);
		
		System.out.print("Total cost: ");
		System.out.println(totalCost);

	}

}
