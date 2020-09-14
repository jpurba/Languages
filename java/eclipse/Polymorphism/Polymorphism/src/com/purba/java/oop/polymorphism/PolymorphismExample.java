package com.purba.java.oop.polymorphism;

public class PolymorphismExample {

	public static void main(String[] args) {
		
		Animal animal = new Cat();
		System.out.printf("Create a new Cat object \n");
		//System.out.println("The cat bark : " + animal.bark());
		System.out.println("The " + animal.name + " shout: " + animal.shout());
		
		Dog dog = new Dog();
		System.out.printf("Create a new Dog object \n");
		System.out.println("The " + dog.name + " shout: " + dog.shout());
		
		Cat cat = new Cat();
		System.out.printf("Create a new Cat object \n");
		System.out.println("The " + cat.name + " shout: " + cat.shout());
		

	}

}
