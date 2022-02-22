
public class PhonePlan {

	private int freeMinutes;
	private int freeMessages;
	
	public PhonePlan() {
		freeMinutes = 0;
		freeMessages = 0;
	}
	
	public PhonePlan(int numMinutes, int numMessages) {
		freeMinutes = numMinutes;
		freeMessages = numMessages;
	}
	
	public void print() {
		System.out.println("Minutes: " + freeMinutes + ", Messages: " + freeMessages);
	}
}
