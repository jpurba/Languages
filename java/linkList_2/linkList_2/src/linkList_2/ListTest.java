package linkList_2;

import java.util.*;



public class ListTest {

	public static void main(String[] args) {
		LinkedList<Integer> intList = new LinkedList<Integer>();
		MyLinkedList myList = new MyLinkedList();
		
		
		intList.add(45);
		intList.add(8);
		intList.add(22);
		System.out.println(intList);

		myList.add(45);
		myList.add(8);
		myList.add(22);
		System.out.println(myList);
	}

}
