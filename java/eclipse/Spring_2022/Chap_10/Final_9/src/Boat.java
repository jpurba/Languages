public class Boat extends Vehicle {
	private int numEngines;
	   public Boat(int num) {
	      numEngines = num;
	   }
	   public String toString() {
	      return super.toString() + " " + numEngines;
	   } 
}