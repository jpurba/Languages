
public class MyCalculator implements AdvancedArithmetic {

	public int sum;
	
	// constructor;
	MyCalculator() {
		sum = 0;
	}
	
	@Override
	public int divisor_sum(int n) {
		
		for(int m=n; m>0; m--) {
			if(n%m==0) {
				sum += m;
			}
		}
		
		return sum;
	}
	
}
