import java.util.Scanner;
import java.util.ArrayList;

public class StringCompare {

	public static void main(String[] args) {
		String base = "neigh";
		String str = "neighneigh";
		String str1 = "neigh";
		Object objStr = str1;
		String compStr;
		ArrayList<String> stringIn = new ArrayList<String>();
		
		//System.out.println(str.compareTo(base));
		//System.out.println(str.compareToIgnoreCase(base));
        //System.out.println(str.compareTo(objStr.toString()));
        
        stringIn.add(str);
        
        for(int i=0; i< stringIn.size()-1;i++) {
            compStr = stringIn.get(i).substring(0,stringIn.get(i).indexOf(" "));
            System.out.println(compStr);
        }
 
        
	}

}
