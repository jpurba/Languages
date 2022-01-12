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
	}

}
