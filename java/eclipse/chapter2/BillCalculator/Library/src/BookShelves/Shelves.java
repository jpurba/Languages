package BookShelves;

public class Shelves {

	public static void main(String[] args) {
		Book minion = new Book("Minion","Jobi","0123",2020);
		Book bird = new Book("Angry Bird", "Jeremiah", "5678", 2016);

		System.out.println("The book list:");
		minion.printBook();
		System.out.println("\n");
		bird.printBook();
	}

}
