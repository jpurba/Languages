/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.4 (07/13/2020)
 */
// Needed for the Scanner class for input
import java.util.Scanner;

// needed for random generator
import java.util.Random;

/*
 * This class would perform Rock, Paper and Scissors game against the computer.
 * 1. When the program begins, a random number in the range of 1 through 3 is
 * generated. If the number is 1, then the computer has chosen rock. If the 
 * number is 2, then the computer has chosen paper. If the number is 3, then
 * the computer has chosen scissors. (Don't display the computer's choice yet.)
 * 2. The user enters his or her choice of "rock", "paper", or "scissors" at
 * the keyboard. (You can use a menu if you prefer.)
 * 3. The computer's choice is displayed.
 * 4. A winner is selected according to the following rules:
 *    * If one player chooses rock and the other player chooses scissors, 
 *    then rock wins. (The rock smashes the scissors.)
 *    * If one player chooses scissors and the other player chooses paper,
 *    then scissors wins. (Scissors cuts paper.)
 *    * If one player chooses paper and the other player chooses rock,
 *    then paper wins. (Paper wraps rock.)
 *    * If both players make the same choice, the game must be played again
 *    to determine the winner.
 * Be sure to divide the program into methods that perform each major task.  
 */


public class RockPaperScissors {

    public static void main(String[] args) 
    {
        // array for user input response
        String[] userChoices = new String[] { "", "", "" };
        
        // For string results
        String results;
        // For loop index
        int i,j;
        // For check array result
	boolean checkArray;
	// For checking user input
	boolean checkUserInput = true;
        
        // Requested by Professor to use array for the string
        String[] arrayChoices = new String[] { "Rock", "Paper", "Scissors" };
                
        // Check whether the input have been entered before
        checkArray = contains (arrayChoices , "Draw");
        System.out.println("\ncheckArray = " + checkArray);
        
        System.out.println("\nStart testing Rock, Paper and Scissors game\n");
            
        // Test using menu and user input
        System.out.println("Now, testing user input with 3 possible input (0,1 and 2) :\n");
        
        for(i=0; i< userChoices.length; i++)
        {
            // ask for user input
            results = getUserInput();

            // Check whether the input have been entered before
            checkArray = contains (userChoices , results);

            // validate the checkArray
            if(checkArray==true)
            {
		i--; // repeat to ask user input again
		System.out.println("You have made the same selection. Please made different choice !");
            }
            else
            {
		userChoices[i] = results;
            }
        }
              
        System.out.println("User input test finish and pass. You made all possible cases.");
        System.out.println("\nNow, testing all possible cases for the game :");
        
        for(i=0; i< arrayChoices.length; i++)
        {
            for(j=0; j< arrayChoices.length; j++)
            {
                results = determineWinner(arrayChoices[i], arrayChoices[j]);
                System.out.println("User: " + arrayChoices[i] + "; Computer: " + arrayChoices[j] 
                + "; Result (winner or draw) : " + results);
            }
            System.out.printf("\n");
        }
        
        // Test using menu and one user input
        System.out.println("\nNow, testing with sigle user input :");
        results = determineWinner(getUserInput(), getComputerChoice());
        if (results == "Draw")
        {
            System.out.println("Results: " + results);
        }
        else
        {
            System.out.println("Results: " + results + " win");
        }
    } // end of main()
    
    /*
     * Purpose: Generate random number and 
     *          returns either "Rock", "Paper" or "Scissors".
     * Signature: input nothing and return string 
     * Examples: 
     * getComputerChoice() return "Rock"
     * getComputerChoice() return "Paper"
     * getComputerChoice() return "Scissors"
     */
    public static String getComputerChoice()
    {   
        // create random object
        Random random = new Random();
        
        // Limit for random number and input for random number generated
        // Maximum and minimum number come from Professor he specifically
        // ask for range from 0 to 2
        int minimumNumber = 0;
        int maximumNumber = 2;
        int numberGenerated = ((maximumNumber - minimumNumber) + minimumNumber) + minimumNumber;

        // initialized to big number out of ranged so it will end up in while loop
        int randomNumber = 99;
        
        // Requested by Professor to use array for the string
        String[] arrayChoices = new String[] { "Rock", "Paper", "Scissors" };
        
        // Make sure it generated number range from 0 to 2
        while( (randomNumber < minimumNumber) || (randomNumber > maximumNumber) )
        {
            randomNumber = random.nextInt(numberGenerated);
        }
        
        return arrayChoices[randomNumber];
    } // end of getComputerChoice()
    
    /*
     * Purpose: Show the menu of choices and get User input choice 
     * Signature: input nothing and return string 
     * Examples: 
     * getUserInput() return "Rock"
     * getUserInput() return "Paper"
     * getUserInput() return "Scissors"
     * getUserInput() return exit the program.
     */
    public static String getUserInput()
    {
        // Requested by Professor to use array for the string
        String[] arrayChoices = new String[] { "Rock", "Paper", "Scissors" };
        
        // initialized to big number out of ranged so it will end up in while loop
        int numberOfChoice = 99;
        
        // scanner object for user's input
        Scanner input = new Scanner (System.in);
        
        System.out.println("Welcome to Rock, Paper and Scissors game");
        System.out.println("0. Rock");
        System.out.println("1. Paper");
        System.out.println("2. Scissors");
        System.out.println("Please make your selection: ");
        numberOfChoice = input.nextInt();
        
        // Make sure it generated number range from 0 to 2 as requested
        while( (numberOfChoice < 0) || (numberOfChoice > 2) )
        {
            System.out.println("Error. Please input number 0, 1, or 2 ! ");
            numberOfChoice = input.nextInt();
        }
                
        input.close();
        return arrayChoices[numberOfChoice];
    } // end of getUserInput()
    
    /*
     * Purpose: randomly returns either "Rock", "Paper" or "Scissors".
     * Signature: input 2 strings and return string 
     * Examples: 
     * getComputerChoice("Rock","Scissors") return "User"
     * getComputerChoice("Scissors","Paper") return "User"
     * getComputerChoice("Rock","Paper") return "Computer"
     */
    public static String determineWinner(String userChoice, String computerChoice)
    {
        // Variables for all choices and the winner plus draw
        String rock     = "Rock";
        String paper    = "Paper";
        String scissors = "Scissors";
        String user     = "User";
        String computer = "Computer";
        String draw     = "Draw";
        String results   = "";
        
        // User choose rock and computer choose scissors, user win
        if( (userChoice.equals(rock)) && (computerChoice.equals(scissors)) )
        {
            results =  user;
        }
        // User choose scissors and computer choose paper, user win
        else if( (userChoice.equals(scissors)) && (computerChoice.equals(paper)) )
        {
            results =  user;
        }
        // User choose paper and computer choose rock, user win
        else if( (userChoice.equals(paper)) && (computerChoice.equals(rock)) )
        {
            results =  user;
        }
        // User choose rock and computer choose paper, computer win
        else if( (userChoice.equals(rock)) && (computerChoice.equals(paper)) )
        {
            results =  computer;
        }
        // User choose paper and computer choose scissors, computer win
        else if( (userChoice.equals(paper)) && (computerChoice.equals(scissors)) )
        {
            results =  computer;
        }
        // User choose scissors and computer choose rock, computer win
        else if( (userChoice.equals(scissors)) && (computerChoice.equals(rock)) )
        {
            results =  computer;
        }
        // Both User and computer choose the same and the game is draw
        else if( userChoice.equals(computerChoice) )
        {
            results =  draw;
        }
        
        return results;
        
    } // end of determineWinner
    
    /*
     * Purpose: check the input number whether it's on the 
     * 		array or not. Return the results as boolean
     *          whether it's true or not
     * Signature: input array of integers and integer, return boolean 
     * Examples: 
     * contains({"Rock", "Paper", "Scissors"}, "Paper") returns true
     * contains({"Rock", "Paper", "Scissors"}, "Draw") returns false
     */
    public static Boolean contains  (String [] inputArray, String inputString)
    {
        int i;
    	// initialize result to false and it will be updated
    	// in the loop.
    	boolean result = false;
    	
    	// loop through all array elements
    	for(i = 0; i < inputArray.length; i++)
    	{
    		// check whether the number is on the array
    		if(inputArray[i] == inputString)
    		{
    			result = true;
    		}
    	}
    	
    	return result;
    }

}
