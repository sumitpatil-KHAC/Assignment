/* Assignment 4
Question 27: String Literal and Object Creation 
Problem Statement: 
Write a Java program that creates two string variables using string literals with the same 
content. Then, print whether both variables point to the same object. */

import java.util.Scanner;
public class StringLitObj{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a first String");
		String s1 = sc.next();
		System.out.println("Enter a second String");
		String s2 = sc.next();
		if(s1==s2)
			System.out.println("Both variables point to the same object");
		else
			System.out.println("Both do not variables point to the same object");

	}
}