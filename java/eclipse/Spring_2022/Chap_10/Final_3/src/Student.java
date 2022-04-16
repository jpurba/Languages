public class Student {
   private double myGPA;
   private int myID;

   public getID() {
      return myID;
   }
   
   public static void main(String [] args) {
      Student s = new Student();
      System.out.println("Student ID: " + s.getID( ));
   }
}