/* Assignment 4
Question 24: Reverse a String 
Problem Statement: 
Write a Java program that asks the user for a string and then prints the reverse of that 
string.  */

import java.util.Scanner;

public class StringRev{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a String");
		String s = sc.next();
		for(int i = s.length()-1 ; i >= 0 ; i--){
		    System.out.print(s.charAt(i));
		}
		
	}
	
}