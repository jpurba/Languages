package inheritanceExample;

import java.util.Scanner;

public class ShowGradedActivity {

	public static void main(String[] args) {
		GradedActivity steven = new GradedActivity();
		GradedActivity bob = new GradedActivity();
		
		double score;          // raw score
		double curvePercent;   // curve percentage
		
		// Create a Scanner object to read keyboard input
		Scanner keyboard = new Scanner(System.in);
		
		/*
		 * For super class CurvedActivity
		 */
		
		steven.setName("Steven");
		steven.setScore(65);
		
		System.out.println(steven.getName() + " has score " + steven.getScore() 
		        + " and the grade is " + steven.getGrade());
		
		bob.setName("Bob");
		bob.setScore(78);
		
		System.out.println(bob.getName() + " has score " + bob.getScore()
		+ " and the grade is " + bob.getGrade());
		
		/*
		 * For subclass CurvedActivity
		 */
		
		// Get the unadjusted exam score 
		System.out.print("Enter the student's raw numeric score: ");;
		score = keyboard.nextDouble();
		
		// Get the curve percentage
		System.out.print("Enter the curve percentage: ");
		curvePercent = keyboard.nextDouble();
		
		CurvedActivity curvedExam = new CurvedActivity(curvePercent);
		
		// Set the exam score
		curvedExam.setScore(score);
		
		// Display the raw score
		System.out.println("The raw score is " +
		curvedExam.getRawScore() + " points.");
		
		//Display the curved score
		System.out.println("THe curved score is " +
		curvedExam.getScore());
		
		// Display the exam grade
		System.out.println("The exam grade is " + 
		curvedExam.getGrade());
		
		System.gc();  // No guaranteed will be called
	}

}
