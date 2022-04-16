import java.util.ArrayList;
public class SimpleCar {
   @Override
   public String toString(){
      return "I drive fast";
   }
   public static void main(String[] args){
       ArrayList <Object> myStuff;
       myStuff = new ArrayList<Object>();
       myStuff.add(new String("Greetings"));
       myStuff.add(new Object());
       myStuff.add(new SimpleCar());
       for(Object item : myStuff){
          System.out.println(item.toString());
       }
       
       
       
       
       Integer value1 = new Integer(20);
       Integer value2 = new Integer(20);
       if(value1 == value2) { 
          System.out.print("equal values");
       }else {
          System.out.print("not equal references");
       }
       if(value1.equals(value2)) { 
          System.out.print(" and equal values");
       }else {
          System.out.print(" and not equal references");
       }
       
       
       
       
   }
}