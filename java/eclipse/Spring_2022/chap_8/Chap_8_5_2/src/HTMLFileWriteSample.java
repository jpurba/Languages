import java.io.PrintWriter;
import java.io.FileOutputStream;
import java.io.IOException;

public class HTMLFileWriteSample {
  static void writeHTMLFile(PrintWriter printer, String innerHTML) {
     printer.println("<!DOCTYPE html>");
     printer.println("<html>");
     printer.println("  <body>");
     printer.println("    <p>" + innerHTML + "</p>");
     printer.println("  </body>");
     printer.println("</html>");
  }
  public static void main(String[] args) throws IOException {
     // Open an output file stream and create a PrintWriter
     FileOutputStream fileStream = new FileOutputStream("simple.html");
     PrintWriter filePrinter = new PrintWriter(fileStream);
  
     // Write the HTML file, then close filePrinter
     writeHTMLFile(filePrinter, "Hello <b>HTML</b> world!");
     filePrinter.close();

     // Use the same function, writeHTMLFile, to write to the console
     PrintWriter systemOutPrinter = new PrintWriter(System.out);
     writeHTMLFile(systemOutPrinter, "Hello <b>HTML</b> world!");     
     systemOutPrinter.close();
  }
}