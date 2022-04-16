public class MathOps {
   public static int divOp(int num, int denom) throws Exception {
      if (denom == 0) {
         throw new Exception("Invalid div input");
      }
      return num / denom;
   }
   
   public static double sqrtOp(double num) throws Exception {
      if (num < 0) {
         throw new Exception("Invalid sqrt input");
      }
      return Math.sqrt(num);   
   }
   
   public static void main(String[] args) {
      try {
         int x;
         int y;
         
         x = 4;
         y = 0;
         
         System.out.println(divOp(x, y));
         System.out.println(sqrtOp((double)y));
      }
      catch (Exception excpt) {
            System.out.println(excpt.getMessage());
            System.out.println("Cannot compute operation");
      }
   }
}