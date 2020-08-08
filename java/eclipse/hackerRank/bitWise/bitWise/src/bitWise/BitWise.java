package bitWise;

// Needed for the Scanner class for input
import java.util.Scanner;

public class BitWise {

	public static void main(String[] args) {
		
		int n;
		int k;
		
		Scanner input = new Scanner (System.in);
		// Ask user input the first integer
		System.out.println("Enter the first integer: ");
		n = input.nextInt();
		
		// Ask user input the second integer
		System.out.println("Enter the second integer: ");
		k = input.nextInt();
		
		calculateMaximumValues(n,k);
		
		input.close();

	}
	
	public static void calculateMaximumValues(int n, int k) {
		int i,j;
		int maxAND = 0;
		int maxOR = 0;
		int maxXOR = 0;
		int nAndK = 0;
		int nOrK = 0;
		int nXorK = 0;
		
		for (i=1; i<=k; i++)
		{
			for (j=i+1; j<=n; j++)
			{
				nAndK = i&j;
				nOrK = i|j;
				nXorK = i^j;
				
				System.out.printf("n=%d; k=%d, n&k=%d; n|k=%d; n xor k=%d\n", i,j,nAndK,nOrK,nXorK);
				
				if((nAndK > maxAND) && (nAndK < k))
					maxAND = nAndK;
				if((nOrK > maxOR) && (nOrK < k))
					maxOR = nOrK;
				if((nXorK > maxXOR) && (nXorK < k))
					maxXOR = nXorK;
			}
		}
		
		System.out.printf("maxAND = %d; maxOR = %d; maxXOR = %d\n", maxAND, maxOR, maxXOR);
		
	}

}
