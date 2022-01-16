package BookShelves;

public class Book {
	
	// These are the instance fields. 
	// Global variables
	private String title;
	private String author;
	private String isbn;
	private int year;
	
	
	public Book(String t, String a, String i, int y) {
		title = t;
		author = a;
		isbn = i;
		year = y;
	}
	
	public String getTitle() {
		return title;
	}
	
	public String getAuthor() {
		return author;
	}
	
	public String getISBN() {
		return isbn;
	}
	
	public int getYear() {
		return year;
	}
	
	public void setTitle(String t) {
		title = t;
	}
	
	public void setAuthor(String a) {
		author = a;
	}
	
	public void setISBN(String i) {
		isbn = i;
	}
	
	public void setYear (int y) {
		year = y;
	}
	
	public void printBook() {
		System.out.println("Title: " + title);
		System.out.println("Author: " + author );
		System.out.println("ISBN: " + isbn);
		System.out.println("Year: " + year);
	}

}
