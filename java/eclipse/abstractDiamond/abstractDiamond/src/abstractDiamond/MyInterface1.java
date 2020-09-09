package abstractDiamond;

public interface MyInterface1 {
	
	public int num = 100;
	public default void display() {
		System.out.println("display method of MyInterface1");
	}

}
