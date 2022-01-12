package WorldSeries;

public class Team {

	// These are the fields
	private int wins;
	private int losses;
	private String name;
	//private double winningPercentage;
	
	// This is a constructor
	public Team(String n, int w, int l) {
		name = n;
		wins = w;
		losses = l;
	}
	
	public String getName() {
		return name;
	}
	
	public int getWins() {
		return wins;
	}
	
	public int getLosses() {
		return losses;
	}
	
	public double getWinningPercentage() {
		double total = wins + losses;
		return wins / total;
	}
	
	public void printStats() {
		System.out.println("Name: " + name);
		System.out.println("Wins: " + wins);
		System.out.println("Losses: " + losses);
		System.out.println("WP: " + getWinningPercentage() + "\n");
	}
	
	public void setWins(int w) {
		wins = w;
	}
	
	public void setLosses(int l) {
		losses = l;
	}
}
