/* Assignment 3
Problem 5: Print Multiplication Table (Using for Loop) 
Problem Statement: 
 Write a Java program that prints the multiplication table for a given number (e.g., number 5) using a for 
loop. The program should: 
1. Create a method printMultiplicationTable() that takes a number as a parameter and prints its 
multiplication table from 1 to 10. 
2. Use a for loop to iterate through numbers 1 to 10 and print the multiplication results  */

import java.util.Scanner;
class Multiply{
	static void printMultiplicationTable(int a){
		for( int i = 1 ; i <= 10 ; i++) {
			System.out.println( a+ " * " +i+ " = " + (a*i) );
		}
	}
}
public class Table{
	public static void main(String[] args){
	   Scanner sc = new Scanner(System.in);
	   System.out.println("Enter a number to print table of it ");
	   int a = sc.nextInt();
	   
	   Multiply m = new Multiply();
	   m.printMultiplicationTable(a);
	   Multiply.printMultiplicationTable(a);
	   
	}
}