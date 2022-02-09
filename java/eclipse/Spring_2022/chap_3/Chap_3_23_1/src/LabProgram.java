import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
	      
	      int cents = scnr.nextInt();

	      int centsRem = 0;
	      int numDollars = (cents / 100);
	      int numQuarters = (cents / 25);
	      int numDimes    = (cents / 10);
	      int numNickels  = (cents / 5);
	      int numPennies  = (cents / 1);
	      
	      System.out.println("numDollars = " + numDollars + " Dollar");
	      System.out.println("numQuarters = " + numQuarters + " Quarters");
	      System.out.println("numDimes = " + numDimes + " Dimes");
	      System.out.println("numNickels = " + numNickels + " nickels");
	      System.out.println("numPennies = " + numPennies + " Pennies");

	      // no change
	      if (cents == 0) {
	         System.out.println("No change");
	      }
	      
	      // dollars
	      if (numDollars > 0) {
	         System.out.println(numDollars + " Dollar");
	         
	         centsRem = cents % 100;
	         System.out.println("centsRem1 = " + centsRem + " cents");
	         
		      if (centsRem >= 25) {
		    	  numQuarters = (centsRem / 25);
		    	  System.out.println("numQuarters = " + numQuarters + " Quarter");
		    	  
		    	  if (numQuarters==1) {
			          System.out.println(numQuarters + " Quarter");
		    	  }
		    	  else {
			          System.out.println(numQuarters + " Quarters");		    		  
		    	  }
		    	  
		    	  centsRem = centsRem % 25;
		    	  System.out.println("centsRem2 = " + centsRem + " cents");
		    	  
		    	  if (centsRem >= 10) {
		    		  numDimes = (centsRem / 10);
			    	  System.out.println("numDimes = " + numDimes + " Dimes");
			    	  
			    	  if (numDimes==1) {
				          System.out.println(numDimes + " Dime");
			    	  }
			    	  else {
				          System.out.println(numDimes + " Dimes");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 10;
			    	  if(centsRem >=5) {
			    		  numNickels = (centsRem / 5);
				    	  System.out.println("numNickels = " + numNickels + " Nickels");
				    	  
				    	  if (numNickels==1) {
					          System.out.println(numNickels + " Dime");
				    	  }
				    	  else {
					          System.out.println(numNickels + " Dimes");		    		  
				    	  }
			    	  }
			    	  
			      }
		    	  
		    	  
		      }
		      else if (centsRem >= 10) {
		    	  numDimes = (cents / 10) % 10;
		    	  if (numDimes==1) {
			          System.out.println(numDimes + " Dime");
		    	  }
		    	  else {
			          System.out.println(numDimes + " Dimes");		    		  
		    	  }
		      }
		      else if (centsRem >= 5) {
		    	  numNickels = (cents / 5) % 5;
		    	  if (numNickels==1) {
			          System.out.println(numNickels + " Nickel");
		    	  }
		    	  else {
			          System.out.println(numNickels + " Nickels");		    		  
		    	  }
		      }
		      else {
		    	  if (centsRem==1) {
			          System.out.println(centsRem + " Penny");
			          System.exit(0);
		    	  }
		    	  else {
			          System.out.println(centsRem + " Pennies");	
			          System.exit(0);
		    	  }
		      }
		      
	      }
	      

	      
	      // quarters
	      if (numQuarters > 0 ) {
	          System.out.println(numQuarters + " Quarter");
	      }
	      
	      else if (numQuarters >= 2) {
	          System.out.println(numQuarters + " Quarters");
	      }
	      
	      // dimes      
	      if (numDimes < 2 && numDimes == 1) {
	          System.out.println(numDimes + " Dime");
	      }
	      
	      else if (numDimes >= 2) {
	          System.out.println(numDimes + " Dimes");
	      }
	      
	      // nickels      
	      if (numNickels < 2 && numNickels == 1) {
	          System.out.println(numNickels + " Nickel");
	      }
	      
	      else if (numNickels >= 2) {
	          System.out.println(numNickels + " Nickels");
	      }
	      
	      // pennies      
	      if (numPennies < 2 && numPennies == 1) {
	          System.out.println(numPennies + " Penny");
	      }
	      
	      else if (numPennies >= 2) {
	          System.out.println(numPennies + " Pennies");
	      }

	}

}
