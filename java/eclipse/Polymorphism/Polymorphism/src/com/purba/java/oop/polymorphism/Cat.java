package com.purba.java.oop.polymorphism;

class Cat extends Animal{
	
	//Constructor
	Cat () {
		super.name = "Cat";
	}
	
	String shout() {
		
		return "Meow Meow\n";
	}

}
