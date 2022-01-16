package Cellphone;

import java.util.Scanner;

public class CellphoneTest {

	public static void main(String[] args) {
		String testMan;
		String testMod;
		double testPrice;
		
		Cellphone samsung = new Cellphone("Samsung", "Galaxy", 199.99);
		
		samsung.printCellphone();

        System.out.println("\n");
		Scanner keyboard = new Scanner(System.in);
		
		System.out.print("Enter the manufacturer: ");
		testMan = keyboard.nextLine();
		
		System.out.print("Ener the model number: ");
        testMod = keyboard.nextLine();
        
        System.out.print("Enter the retail price: ");
        testPrice = keyboard.nextDouble();
        
        Cellphone phone = new Cellphone(testMan, testMod, testPrice);
        
        phone.printCellphone();
        System.out.println("\n");
        
        System.out.println("Here is the data that you provided: ");
        System.out.println("Manufacturer: " + phone.getManufact());
        System.out.println("Model: " + phone.getModel());
        System.out.println("Retail price: " + phone.getRetailPrice());
	}

}
