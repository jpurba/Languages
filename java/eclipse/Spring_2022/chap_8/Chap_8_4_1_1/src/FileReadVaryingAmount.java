import java.util.Scanner;
import java.io.FileInputStream;
import java.io.IOException;


public class FileReadVaryingAmount {

	public static void main(String[] args) throws IOException{
		FileInputStream fileByteStream = null;
		Scanner inFS = null;
		int fileNum;
		
		System.out.println("Opening file myfile.txt");
		fileByteStream = new FileInputStream("myfile.txt");
        inFS = new Scanner(fileByteStream);
        
        System.out.println("Reading and printing numbers.");
        
        while(inFS.hasNextInt()) {
        	fileNum = inFS.nextInt();
        	System.out.println("num: " + fileNum);
        }
        
        // Done with file, so try to close it
        System.out.println("Closing file myfile.txt.");
        fileByteStream.close();

	}

}
