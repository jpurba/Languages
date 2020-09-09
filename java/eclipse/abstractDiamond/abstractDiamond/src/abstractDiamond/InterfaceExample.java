package abstractDiamond;

public class InterfaceExample implements MyInterface1, MyInterface2{

	public void display() {
		MyInterface1.super.display();
		// or
	    MyInterface2.super.display();
	}
	
	public static void main(String[] args) {
		InterfaceExample example = new InterfaceExample();
		
		example.display();

	}

}
