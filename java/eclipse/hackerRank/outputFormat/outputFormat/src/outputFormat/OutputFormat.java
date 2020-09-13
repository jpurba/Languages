package outputFormat;

import java.util.Scanner;
//In each line of output there should be two columns:
//The first column contains the String and is left 
//justified using exactly  characters.
//The second column contains the integer, expressed in 
//exactly  digits; if the original input has less than 
//three digits, you must pad your output's leading digits 
//with zeroes.

public class OutputFormat {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("==============================");
		// output
		for(int i=0; i<3; i++)
		{
			String s1 = sc.next();
			int x = sc.nextInt();
			
			System.out.printf("%-14s %03d \n", s1, x);

		}
		System.out.println("==============================");

		sc.close();
	}

}
