public class Division{ 
   public static double division(double a, double b) throws Exception {
      if(b == 0)
         throw new Exception("Invalid number.");
      return a / b;
   }
   public static void main(String[] args) {
      try {
         System.out.println("Result: " + division(5, 0)); 
      }
      catch (ArithmeticException e) { 
         System.out.println("Arithmetic Exception Error"); 
      }
      catch (Exception except) { 
         System.out.println("Division by Zero"); 
      }
      catch(Throwable thrwObj) { 
         System.out.println("Error"); 
      } 
   }
}