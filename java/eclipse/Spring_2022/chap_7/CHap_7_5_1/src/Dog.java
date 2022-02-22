
public class Dog {

	private int years;
	private int weight;
	private String size;
	private int humanYears;
	
	private void setHumanYears() {
		int factor;
		
		if (size.equals("small")) {
			factor = 6;
		}
		else if (size.equals("medium")) {
			factor = 7;
		}
		else {
			factor = 8;
		}
		
		humanYears = years * factor;
	}
	
	public int getHumanYears() {
		return humanYears;
	}
	
	public void setWeightAndAge(int weightToSet, int yearsToSet) {
		weight = weightToSet;
		
		if (weight <= 15) {
			size = "small";
		}
		else if (weight <= 55) {
			size = "medium";
		}
		else {
			size = "large";
		}
		
		years = yearsToSet;
		setHumanYears();
	}
}
