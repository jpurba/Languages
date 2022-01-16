/**
 * 
 */
package WorldSeries;

/**
 * @author Dell
 *
 */
public class WorldSeries {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		Team cubs = new Team("Cubs", 92, 70);
        Team nationals = new Team ("Nationals", 97, 65);
        Team indians = new Team("Indians", 102, 60);
        
        // Starting statistics
        cubs.printStats();
        nationals.printStats();
        indians.printStats();
        
        System.out.println("Now entering the playoffs...");
        // cubs win, nationals lose, indians lose
        // cubs win
        cubs.setWins(cubs.getWins() + 1);
        
        //nationals lose 
        nationals.setLosses(nationals.getLosses() + 1);
        
        //indians lose
        indians.setLosses(indians.getLosses() + 1);
        
        // Ending statistics
        cubs.printStats();
        nationals.printStats();
        indians.printStats();
        
        Team theWinner = winner(cubs,nationals,indians);
        System.out.println("\nThe winner is " + theWinner.getName());
        
	}
	
	/*** This method takes in three team objects and prints the 
	 * name of the team objects with the greatest number of wins and 
	 * returns that team object
	 * @param a the first team
	 * @param b the second team
	 * @param c the third team
	 * @return the winning team
	 * 
	 */

	public static Team winner(Team a, Team b, Team c) {
		if(a.getWins() > b.getWins() && a.getWins() > c.getWins()) {
			System.out.println(a.getName());
			return a;
	    }
		else if (b.getWins() > a.getWins() && b.getWins() > c.getWins()) {
			System.out.println(b.getName());
			return b;
		}
		else {
			System.out.println(c.getName());
			return c;
		}
	}
}
