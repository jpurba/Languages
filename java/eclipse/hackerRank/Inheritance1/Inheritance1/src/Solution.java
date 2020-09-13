
public class Solution{

	public static void main(String[] args) {
		
		System.out.println("Create first bird object");
		Bird bird = new Bird();
		bird.walk();
		bird.fly();
        bird.sing();
        
        System.out.println("\nCreate first animal object");
        Animal animal = new Animal();
        animal.walk();
        
        System.out.println("\nCreate second bird object");
        Bird bird2 = new Bird();
        bird2.walk();
        bird2.fly();
        bird2.sing();
	}

}
