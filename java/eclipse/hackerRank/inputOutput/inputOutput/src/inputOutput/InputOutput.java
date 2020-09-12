package inputOutput;

import java.util.Scanner;

public class InputOutput {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int i = input.nextInt();		
		double d = input.nextDouble();
		
		input.nextLine(); // skip the newline character 
		                     // so it won't skip next line
		
		String s = input.nextLine();
		
		System.out.println("String: " + s);
		System.out.println("Double: " + d);
		System.out.println("Int: " + i);
		
		input.close();
		//System.out.println("Hello World !");

	}

}
