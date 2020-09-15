package com.java.oop.singleton;

public class Main {

	public static void main(String[] args) {
		// instantiating Singleton class with variable x
		Singleton x = Singleton.getInstance();
		
		// Instantiating Singleton class with variable y
		Singleton y = Singleton.getInstance();
		
		// Instantiating Singleton class with variable z
		Singleton z = Singleton.getInstance();
		
		x.s = (x.s).toUpperCase();
		
		System.out.println("String from x is " + x.s);
		System.out.println("String from y is " + y.s);
		System.out.println("String from z is " + z.s);
		
		x.s = (x.s).toLowerCase();
		
		System.out.println("\nString from x is " + x.s);
		System.out.println("String from y is " + y.s);
		System.out.println("String from z is " + z.s);

	}

}
