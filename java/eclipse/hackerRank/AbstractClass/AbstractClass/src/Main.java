import java.util.*;

public class Main {
	
	public static void main(String [] args) {
		
		//Book newNovel = new Book();  // Can't instantiate abstract class
		System.out.println("Enter book title: ");
		Scanner sc = new Scanner(System.in);
		String title = sc.nextLine();
		
		MyBook newNovel = new MyBook();
		newNovel.setTitle(title);
		System.out.println("The title is : " + newNovel.getTitle());
		
		System.out.println("New Book Program");
		sc.close();
	}

}
