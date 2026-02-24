/* Assignment 1.e   Write a Java program that calculates the area of a square using the formula 
area = side * side. Use a predefined side length. */
public class SquareArea{
	public static void main(String[] args){
		int a = Integer.parseInt(args[0]);
		int area = a * a ;
		System.out.println("Area of Circle "+a+" is " +area);
		
	}
}