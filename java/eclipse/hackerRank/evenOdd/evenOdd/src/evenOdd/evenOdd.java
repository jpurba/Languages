package evenOdd;

import java.util.*;

public class evenOdd {

	public static void main(String[] args) {
		
		Scanner input = new Scanner (System.in);
		int N;
		System.out.println("Enter an integer: ");
		
		N = input.nextInt();
		
		if(N >= 1 && N <= 100)
		{
			if(N % 2 == 0)
			{
				//System.out.printf("Input number %d is even number\n", N);
				if(N >= 2 && N < 5 )
				{
					System.out.println("Not Weird");
				}
				else if (N >= 6 && N <= 20) 
				{
					System.out.println("Weird");
				}
				else if(N > 20)
				{
					System.out.println("Not Weird");
				}
			}
			else
			{
				//System.out.println("Input number " + N + " is odd number");
				System.out.println("Weird");
			}
		}
		else
		{
			//System.out.println("Input number is out of range 1<= number <=100");
			
		}
		
		System.out.println("Input number is " + N);
		input.close();

	}

}
