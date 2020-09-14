package com.purba.java.oop.polymorphism;

class Dog extends Animal{
	
	
	// Constructor
	Dog() {
		super.name = "Dog";
	}
	
	
	String shout() {
		
		return "Bow Bow\n";
	}
	
	
	String getName() {
		return "Dog";
	}
	
	void setName(String s) {
		
		super.name = s;
	}

}
