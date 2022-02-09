import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {

		Scanner scnr = new Scanner (System.in);
		
		int totalChange = 0;
		int quotientD = 0;
		int remainderD = 0;
		int quotientQ = 0;
		int remainderQ = 0;
		int quotientDime = 0;
		int remainderDime = 0;
		int quotientN = 0;
		int remainderN = 0;
		//int quotientP = 0;
		int remainderP = 0;
		
		System.out.print("Enter total change: ");
		totalChange = scnr.nextInt();
		
		if(totalChange>100) {
			quotientD = totalChange / 100;
			remainderD = totalChange % 100;
			System.out.print("Dollar: quotient = " + quotientD);
			System.out.println(" remainder = " + remainderD);
			
			if (remainderD > 25) {
				
			}
		}
		else if (totalChange > 25) {
			quotientQ = totalChange / 25;
			remainderQ = totalChange % 25;
			System.out.print("Quarter: quotient = " + quotientQ);
			System.out.println(" remainder = " + remainderQ);
		}
		else if(totalChange > 10) {
			quotientDime = totalChange / 10;
			remainderDime = totalChange % 10;
			System.out.print("Dime: quotient = " + quotientDime);
			System.out.println(" remainder = " + remainderDime);
		}
		else if (totalChange > 5) {
			quotientN = totalChange / 5;
			remainderN = totalChange % 5;
			System.out.print(" Dime: quotient = " + quotientN);
			System.out.println(" remainder = " + remainderN);
		}
		else {
			remainderP = totalChange;
		}
		
		

	}

}
