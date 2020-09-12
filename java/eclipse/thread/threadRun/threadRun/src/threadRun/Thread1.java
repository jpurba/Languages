package threadRun;

import java.util.*;

public class Thread1 extends Thread {
	int n1,n2,n3;
	int time;
	Random r = new Random();
	
	// thread constructor
	public Thread1(int i, int j, int k)
	{
		n1 = i;
		n2 = j;
		n3 = k;
		time = r.nextInt(999);
	}
	
	public void run()
	{
		try {
			System.out.println(n1 + " " + n2 + " " + n3);
			Thread1.sleep(time);
			System.out.printf("Thread1 awake from sleep \n");
		}catch(Exception e)
		{
			
		}

	}

}
