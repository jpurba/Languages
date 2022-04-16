public class PrintMedia {
   public static void main(String[] args) {
      Media med = new Media();

      med.setSinger("Michael Jackson");
      med.setName("Thriller");

      med.printName();
      med.printSinger();
   }
}