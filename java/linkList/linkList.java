// A simple java program to introduce a linked list
class LinkedList {
    Node head;     // head of link list
    /* Linked list node. This inner class is made so that
       main() can access it */

    static class Node {
        int data;
        Node next;
        Node (int d)
        {
            data = d;
            next = null;
        } // Constructor
    }

    /* This function prints contents of linked list starting from head */
    public void printList()
    {
         Node n = head;
         while(n!= null) {
             System.out.print(n.data + " ");
             n = n.next;
         }

    }    

    /* method to create a simple linked list with 3 nodes */
    public static void main(String[] args)
    {
        /* Start with the empty list */
        LinkedList llist = new LinkedList();

        llist.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        llist.head.next = second; // link the first node to second node

        second.next = third; // link the second node to third node 
  
        llist.printList();
    }

}
