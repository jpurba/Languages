package javaLoops1;

import java.util.*;

public class JavaLoops1 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int result;
		
		System.out.printf("Enter integer number : \n");
		int N = input.nextInt();
		
		for(int i= 1; i<=10; i++)
		{
			result = N * i;
			System.out.printf("%d x %d = %d \n", N, i, result);
		}
		
		
		input.close();

	}

}
