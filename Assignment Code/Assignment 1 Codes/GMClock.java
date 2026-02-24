/* Assignment 1.d  Write a Java program that displays a "Good Morning" message if the 
predefined time is between 5 AM and 12 PM. Use an if statement to implement the logic. */
public class GMClock{
	public static void main(String[] args){
		double a = Double.parseDouble(args[0]);
		if( a >= 0 && a <= 23 ){
			if( a >= 5 && a <= 12){
				System.out.println("Good Morning ");
			}
		}
		else
			System.out.println("Not a proper time format or number ");
	}
}

