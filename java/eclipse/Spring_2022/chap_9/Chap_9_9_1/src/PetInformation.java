import java.util.Scanner;

public class PetInformation {

	public static void main(String[] args) {

		Scanner scnr = new Scanner(System.in);
		
		Pet myPet = new Pet();
		Dog myDog = new Dog();
		
		String petName, dogName, dogBreed;
		int petAge, dogAge;
		
		petName = scnr.nextLine();
		petAge = scnr.nextInt();
		scnr.nextLine();
		dogName = scnr.next();
		dogAge = scnr.nextInt();
		scnr.nextLine();
		dogBreed = scnr.nextLine();
		
		myPet.setName(petName);
		myPet.setAge(petAge);
		myPet.printInfo();

		myDog.setName(dogName);
		myDog.setAge(dogAge);
		myDog.setBreed(dogBreed);
		
		myDog.printInfo();
		System.out.println("   Breed: " + myDog.getBreed());
		
		
		//Pet myPet2 = new Pet(petName, petAge);
		//myPet2.printInfo();
		
		//Dog myDog2 = new Dog(dogName, dogAge, dogBreed);
		//myDog2.printInfo();

	}

}
