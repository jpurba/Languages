import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListEx {

	public static void main(String[] args) {
		int i;
		ArrayList<Integer> itemList = new ArrayList<Integer>();
		
		System.out.println("itemList.size() is: " + itemList.size());
		//itemList.set(0, 99); // error
		itemList.add(99);
		System.out.println("itemList.size() is: " + itemList.size());
		itemList.add(77);
		itemList.add(44);
		
		System.out.println("ArrayList Size: " + itemList.size() + ", Contents: ");
		for (i=0; i<itemList.size(); i++) {
			System.out.print(" " + itemList.get(i));
		}
		
		
		System.out.print("\n\n");
		
		System.out.print(itemList.get(itemList.size()));
		
		System.out.print("\n\n");
		
		itemList.add(0);
		itemList.add(0);
		itemList.add(0);
		itemList.add(0);
		itemList.add(99);
		itemList.add(98);
		itemList.add(97);
		itemList.add(96);
		
		System.out.println("ArrayList Size: " + itemList.size() + ", Contents: ");
		for (i=0; i<itemList.size(); i++) {
			System.out.print(" " + itemList.get(i));
		}
		System.out.print("\n");
		System.out.println("ItemList.get(6) is " + itemList.get(6));
		
		itemList.clear();
		//System.out.println("ItemList.get(0) is " + itemList.get(0)); // will give error	
	}
}
