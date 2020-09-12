package threadRun;

public class MainThread {

	public static void main(String[] args) {
		
		// Create thread object which are declared in others files
		Thread t1 = new Thread(new Thread1(1,2,3));
		Thread t2 = new Thread(new Thread2(4,5,6));
		Thread t3 = new Thread(new Thread3(7,8,9));
		
		System.out.println("Main Thread");
		
		// start the threat
		t1.start();
		t2.start();
		t3.start();
		
		for(int i = 0; i<10; i++)
		{
			t1.run();
			t2.run();
			t3.run();
		}
		
		System.out.println("Main Thread");

	}

}
