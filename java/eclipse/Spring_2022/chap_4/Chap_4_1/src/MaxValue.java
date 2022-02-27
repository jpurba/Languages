import java.util.Scanner;

public class MaxValue {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		
		int inputNumber;
		int maxValue;
 
		int count = 0;
		int i=0;
		
		int totalInput;
		System.out.print("How many total input number ? ");
		totalInput = scnr.nextInt();
		int[] inArray = new int[totalInput];
		
		System.out.println("Total input = " + totalInput + " Input number: ");
		inputNumber = scnr.nextInt();
		inArray[i] = inputNumber;
		System.out.println(inputNumber);
		maxValue = inputNumber;
		i++;
		inputNumber = scnr.nextInt();
		inArray[i] = inputNumber;
		System.out.println(inputNumber);
		count = i;
		//while(i<totalInput) {
			while (inputNumber != 0) {
				if (inputNumber>maxValue) {
					maxValue = inputNumber;
				}
				inputNumber = scnr.nextInt();
				i++;
				System.out.println("i = " + i);
				if(i >= totalInput) {
					System.out.println("Too many input. Exit from loop !");
					System.exit(0);
				}
				count++;
				inArray[i] = inputNumber;
				System.out.println(inputNumber);
			}
		//}
		
		System.out.print("All input number are: ");
		for(i=0;i<count;i++) {
			System.out.print(inArray[i] + " ");			
		}

		System.out.println("\nMax value is : " + maxValue);
	}

}
