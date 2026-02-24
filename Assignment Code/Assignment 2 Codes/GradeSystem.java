/* Assignment 2 : 
Problem Statement: 
Write a Java program that calculates the average marks of a student and determines the grade based on the 
following criteria: 
Grade A: Average marks ≥ 90 
Grade B: Average marks between 70 and 89 
Grade C: Average marks between 50 and 69 
Grade D: Average marks between 30 and 49 
Fail: Average marks < 30 */

public class GradeSystem{
	public static void main(String[] args){
		int math = Integer.parseInt(args[0]);
		int science = Integer.parseInt(args[1]);
		int history = Integer.parseInt(args[2]);
		float avg = 0;
		avg = (float)(math + science + history)/3; 
		if(avg >= 90 )
			System.out.println("Grade A with "+avg+ "marks");
		else if(avg >= 70 && avg <= 89 )
			System.out.println("Grade B with "+avg+ "marks");
		else if(avg >= 50 && avg <= 69 )
			System.out.println("Grade C with "+avg+ "marks");
		else if(avg >= 30 && avg <= 49 )
			System.out.println("Grade D with "+avg+ "marks");
		else
		    System.out.println("Fail with "+avg+ "marks");
		
		/* int m = 80;
		int s = 85;
		int h = 90;
		float avg = 0;
		avg = (float)(m + s + h)/3; 
		if(avg >= 90 )
			System.out.println("Grade A with "+avg+ "marks");
		else if(avg >= 70 && avg <= 89 )
			System.out.println("Grade B with "+avg+ "marks");
		else if(avg >= 50 && avg <= 69 )
			System.out.println("Grade C with "+avg+ "marks");
		else if(avg >= 30 && avg <= 49 )
			System.out.println("Grade D with "+avg+ "marks");
		else
		    System.out.println("Fail with "+avg+ "marks");
		*/

	}
}	