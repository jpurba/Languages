public class Principal extends Teacher {
   public void PrintInformation() {
      System.out.println("In Child Class Principal");
  }
   public static void main(String args[]) {
      Principal tim;
      tim = new Principal();
      tim.PrintInfo();
   }
}