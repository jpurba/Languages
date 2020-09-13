
public class Solution {

	public static void main(String[] args) {
		
		Adder a = new Adder();
		
		// Print the superclass name
		//System.out.println("My superclass is: " + a.getClass().getSuperClass().getName());

		System.out.println("My superclass is: " + a.getClass().getSuperclass().getName());
		
		System.out.println(a.add(10, 32) + " " + a.add(10,3) + " " + a.add(10,10) + "\n");
	}

}
