/* Assignment 2 : 
Problem Statement: 
Write a Java program that checks whether the year is a leap year or not. A year is a leap year if: 
It is divisible by 4, but not divisible by 100, or 
It is divisible by 400. 
Predefined Value (Try with different values as well): 
 Year = 2024 
 Year = 1900 */

public class LeapYear{
	public static void main(String[] args){
		int y = Integer.parseInt(args[0]);
		
		if( (y % 4 == 0 ) && ( y % 100 != 0))
			System.out.println(y+ "is a Leap year");
		else
			System.out.println(y+ "is not a Leap year");

	}
}