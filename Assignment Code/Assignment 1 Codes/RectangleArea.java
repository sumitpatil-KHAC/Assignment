/* Assignment 1.f  Write a Java program that calculates the area of a rectangle using the formula 
area = length * width. Use predefined values for length and width. */
public class RectangleArea{
	public static void main(String[] args){
		double length = Double.parseDouble(args[0]);
		double width = Double.parseDouble(args[1]);
		double area = length * width ;
		System.out.println("Area of Rectangle of length "+length+ " and width "+width+ " is "+area);
		
		

	}
}