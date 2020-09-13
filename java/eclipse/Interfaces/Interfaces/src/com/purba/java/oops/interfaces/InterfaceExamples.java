package com.purba.java.oops.interfaces;

public class InterfaceExamples {

	public static void main(String[] args) {
		
		System.out.println("Create new bird object using FLyable interface");
		//Flyable flyable = new Flyable(); This will give error
		Flyable flyable = new Bird();
		flyable.fly();
		
		System.out.println("\nCreate new Aeroplane object using Aeroplane Class");
		Aeroplane aeroplane = new Aeroplane();
		aeroplane.fly();
		
		System.out.println("\nCreate new Bird object using Bird Class");
		Bird bird = new Bird();
		bird.fly();

	}

}
