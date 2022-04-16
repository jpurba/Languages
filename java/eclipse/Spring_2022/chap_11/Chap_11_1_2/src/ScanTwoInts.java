import java.util.Scanner;

public class ScanTwoInts {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		int num1;
		int num2;
		
		System.out.print("Enter two integers: ");
		num1 = scnr.nextInt();
		num2 = scnr.nextInt();
		
		System.out.print("The two integers: " + num1 + " and " + num2);

	}

}
