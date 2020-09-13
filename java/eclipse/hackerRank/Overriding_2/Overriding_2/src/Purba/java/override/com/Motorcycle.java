package Purba.java.override.com;

class Motorcycle extends Bicycle {
	
	String define_me() {
		return "a cycle with an engine.";
	}
	
	// COnstructor
	Motorcycle (){
		
		System.out.println("Hello I am a motorcyle, I am " + define_me());
		
		String temp = super.define_me();
		
		System.out.println("My ancestor is a cycle who is " + temp);
	}

}
