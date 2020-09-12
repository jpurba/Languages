package threadRun;

import java.util.Random;

public class Thread3 extends Thread {
	
	int n1,n2,n3;
	int time;
	Random r = new Random();
	
	public Thread3(int i, int j, int k)
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
			Thread3.sleep(time);
			System.out.printf("Thread3 awake from sleep \n");
		}catch(Exception e)
		{
			
		}
	}

}
