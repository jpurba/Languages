import java.util.Scanner;

public class LabProgram {

	public static void exactChange(int userTotal, int[] coinVals) {
		
		coinVals[3] = userTotal / 25;
		userTotal %= 25;
		System.out.println(coinVals[3] + "," + userTotal);
		
		coinVals[2] = userTotal /10;
		userTotal %= 10;
		System.out.println(coinVals[2] + "," + userTotal);
		
		coinVals[1] = userTotal / 5;
		userTotal %= 5;
		System.out.println(coinVals[1] + "," + userTotal);
		
		coinVals[0] = userTotal;
		System.out.println(coinVals[0] + "," + userTotal);
	}
	
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		int[] coins = new int[4];
		int value = in.nextInt();
		if(value<=0) {
			System.out.println("No change");
		}
		else {
			exactChange(value, coins);
			if(coins[0] ==1)	{
				System.out.println(coins[0] + " Penny");
			}
			else if(coins[0] > 1) {
				System.out.println(coins[0] + " Pennies");
			}
			if (coins[1] == 1) {
				System.out.println(coins[1] + " Nickel");
			}
			else if (coins[1] > 1) {
				System.out.println(coins[1] + " Nickels");
			}
			if (coins[2] == 1){
				System.out.println(coins[2] + " Dime");
			}
			else if (coins[2] > 1) {
				System.out.println(coins[2] + " Dimes");
			}
			if(coins[3] == 1) {
				System.out.println(coins[3] + " Quarter");
			}
			else {
				System.out.println(coins[3] + " Quarters");
			}
		}
	}
}
