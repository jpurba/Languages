public class Car extends Vehicle {
   private int distance;
   public void move(int miles) {
      distance = distance + miles;
   }
   public void printInfo() {
      System.out.print("Car ");
   }
   public static void main(String args[]) {
      Vehicle myVehicle;
      Car myCar;
      myVehicle = new Vehicle();
      myCar = new Car();
      myVehicle.printInfo();
      myCar.printInfo();
   }
}