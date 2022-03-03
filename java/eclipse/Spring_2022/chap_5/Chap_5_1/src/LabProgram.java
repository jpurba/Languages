
public class LabProgram {

	public static void main(String[] args) {
		
		int N=1;
		int totalElement = 5;
		int[] peoplePerDay = new int[totalElement];
		
		peoplePerDay[N] = 15;
		N = N+1;
		peoplePerDay[N] = peoplePerDay[N-1] * 3;
		System.out.println("peoplePerDay[2] = " + peoplePerDay[N]);

		int[] yearsArr = new int[4];
		yearsArr[0] = 1999;
		yearsArr[1] = 2012;
		yearsArr[2] = 2025;
		System.out.println("\nArray size: " + yearsArr.length);
		for (int i=0; i< yearsArr.length; i++) {
			System.out.println("yearsArr[" + i +"] = " + yearsArr[i]);
		}
	}

}
