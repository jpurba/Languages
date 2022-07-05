package linkList_2;

public class MyLinkedList {
	
	class Node{
		int value;
		Node next;
		
	}
	
	Node head;
	
	MyLinkedList(){
		head = null;
	}
	
	void add(int newvalue) {
		Node newnode = new Node();
		newnode.value = newvalue;
		newnode.next = head;
		head = newnode;
	}
	
	public String toString() {
		Node tmp = head;
		String result = "[";
		while(tmp != null){
			result = result + Integer.toString(tmp.value) + " - ";
			tmp = tmp.next;
		}
		result = result + "]";
		return result;
	}

}
