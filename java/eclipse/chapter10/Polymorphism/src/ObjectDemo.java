import java.util.ArrayList;

public class ObjectDemo {

	public static void main(String[] args) {
		Integer year = new Integer(2);
		String name = new String("Lonzo");
		Double fg = new Double(.67);
		ArrayList<Object> list = new ArrayList<Object>();
		
		list.add(year);
		list.add(name);
		list.add(fg);
		for(Object obj : list)
		{
			System.out.println("List contains: " + obj);
		}
	}
}
