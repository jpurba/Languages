
public class ClassDerivationEx {

	public static void main(String[] args) {
		GenericItem miscItem = new GenericItem();
		ProduceItem perishItem = new ProduceItem();
		
		miscItem.setName("Crunchy cereal");
		miscItem.setQuantity(9);
		miscItem.printItem();
		
		perishItem.setName("Apples");
		perishItem.setQuantity(40);
		perishItem.setExpiration("Dec 5, 2019");
		perishItem.printItem();
		
		System.out.println(" (Expires: " 
		+ perishItem.getExpiration() + ")");

	}

}
