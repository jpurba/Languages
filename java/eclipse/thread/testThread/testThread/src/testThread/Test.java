package testThread;

public class Test implements Runnable {

	Thread t;
	
	// default constructor
	public Test()
	{
		t = new Thread(this, "ABC");
		t.start();
	}
	public static void main(String[] args) {
		
		new Test();
		
		// TODO Auto-generated method stub
		while(true)
		{
			System.out.println("In Main");
			try {
				Thread.sleep(150);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		while(true)
		{
			System.out.println("In thread");
			try {
				Thread.sleep(150);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}

}
