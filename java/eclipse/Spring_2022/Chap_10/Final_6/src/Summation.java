public class Summation{ 
   public static int sum(int arr[]) {
      int result = 0;
      int i;
      for (i = 0; i <= arr.length; i++) {
         result = result + arr[i];
      }
      return result;
   }
   public static void main(String[] args) {
      int list[] = {1,3,4,5};
      try {
         System.out.println("Sum of given array is " + sum(list)); 
      }
      catch (ArrayIndexOutOfBoundsException e) { 
         System.out.println("Array Index is Out Of Bounds"); 
      }
      catch (IndexOutOfBoundsException except) { 
         System.out.println("Index is Out Of Bounds"); 
      }
   }
}