import java.util.*;

public class Solution {

	public static void main(String[] args) {
		
		MyCalculator myCalculator = new MyCalculator();
		System.out.print("I implemented: ");
		ImplementedInterfaceNames(myCalculator);
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.print(myCalculator.divisor_sum(n) + "\n");

		sc.close();
	}
	
	static void ImplementedInterfaceNames(Object o) {
		
		Class[] theInterfaces = o.getClass().getInterfaces();
		for (int i = 0; i < theInterfaces.length; i++) {
			String interfaceName = theInterfaces[i].getName();
			System.out.println(interfaceName);
		}
	}

}
