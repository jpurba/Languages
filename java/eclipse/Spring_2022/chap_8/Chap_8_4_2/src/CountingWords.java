import java.util.Scanner;
import java.io.FileInputStream;
import java.io.IOException;

public class CountingWords {

	public static void main(String[] args) throws IOException {
		Scanner scnr = new Scanner(System.in);
		FileInputStream fileByteStream = null;
		Scanner inFS = null;
		String userWord;
		int wordFreq = 0;
		String currWord;
		
		// Try to open file
		System.out.println("Opening file wordFile.txt.");
		fileByteStream = new FileInputStream("wordFile.txt");
		inFS = new Scanner(fileByteStream);
		
		// Word to be found
		System.out.print("Enter a word: ");
		userWord = scnr.next();
		
		while(inFS.hasNext()) {
			currWord = inFS.next();
			if(currWord.contentEquals(userWord)) {
				++wordFreq;
			}
		}
		System.out.println(userWord + " appears in the file " + wordFreq + " times.");
		
		// Done with file, so try to close it
		fileByteStream.close();

	}

}
