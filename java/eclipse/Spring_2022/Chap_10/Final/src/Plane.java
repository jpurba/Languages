public class Plane extends Vehicle {
   @Override
   public void drive(){
      System.out.println("Flying plane");
   }
   public static void main(String args[]) {
      Vehicle myVehicle = new Plane();
      myVehicle.drive();
   }
}