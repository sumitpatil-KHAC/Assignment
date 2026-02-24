// Assignment 1.g   Write a Java program that finds and prints the largest of three predefined  numbers using if-else statements. 
public class LargestThreeNumber{
	public static void main(String[] args){
		int a = Integer.parseInt(args[0]);
		int b = Integer.parseInt(args[1]);
		int c = Integer.parseInt(args[2]);
		
		if( a > b  && a > c)
			System.out.println("Largest of Three Numbers is "+a);
		else if( b > a && b > c)
			System.out.println("Largest of Three Numbers is "+b);
		else 
			System.out.println("Largest of Three Numbers is "+c);
	}
}