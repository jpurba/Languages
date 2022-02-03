import java.util.Scanner;

public class ComputingFinalResult {

	public static void main(String[] args) {

		 Scanner scnr1 = new Scanner(System.in);
	      int num1;
	      int num2;
	      int finalResult;

	      num1 = scnr1.nextInt();
	      num2 = scnr1.nextInt();

	      finalResult = (num1 + num2) / 3;

	      System.out.print("Final result: ");
	      System.out.println(finalResult);

	      scnr1.close();
	}

}
