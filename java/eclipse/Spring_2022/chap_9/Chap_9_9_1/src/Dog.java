
public class Dog extends Pet {
	private String breed;
	
	public Dog() {
		breed = " ";
	}
	public Dog(String dogName, int dogAge, String dogBreed) {
		breed = dogBreed;
		this.setName(dogName);
		this.setAge(dogAge);
	}
	
	public void setBreed(String userBreed) {
		breed = userBreed;
	}
	
	public String getBreed() {
		return breed;
	}
	
	//@Override
	//public void printInfo() {
	//	System.out.println("Pet Information:");
	//	System.out.println("Name: " + this.getName());
	//	System.out.println("Age: " + this.getAge());
	//	System.out.println("Breed: " + getBreed());
	//}

}
