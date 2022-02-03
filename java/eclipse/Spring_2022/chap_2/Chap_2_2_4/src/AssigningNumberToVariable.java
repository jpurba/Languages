import java.util.Scanner;

public class AssigningNumberToVariable {

	public static void main(String[] args) {
		//Scanner scnr = new Scanner(System.in);
		//int numPeople;
		//numPeople = scnr.nextInt();
		//numPeople = numPeople+5;
		
		//System.out.print("There are ");
        //System.out.print(numPeople);
        //System.out.println("  people");
        
        //scnr.close();
		
		
		Scanner scnr = new Scanner(System.in);
		int userNum;
		int userNumSquared;
		
		userNum = scnr.nextInt();
		userNumSquared = userNum * userNum;
		System.out.println(userNumSquared);
		
		scnr.close();
		
	}

}
