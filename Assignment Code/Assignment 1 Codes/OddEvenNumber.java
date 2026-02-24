/* Assignment 1.c Write a Java program that checks if a predefined number is odd or even. Use 
an if-else statement and the modulus operator (%) to determine whether the number is 
divisible by 2 or not.*/

public class OddEvenNumber{
	public static void main(String[] args){
		int a = Integer.parseInt(args[0]);
		if( a % 2 == 0 )
			System.out.println(a+" is a Even Number ");
		else
		    System.out.println(a+" is a Odd Number ");

	}
}
