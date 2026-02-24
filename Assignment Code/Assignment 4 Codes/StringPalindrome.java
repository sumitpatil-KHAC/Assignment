/* Assignment 4
Question 26: Check if a String is a Palindrome 
Problem Statement: 
Write a Java program that asks the user for a string and checks whether the string is a 
palindrome. A palindrome is a string that reads the same backward as forward (ignoring 
spaces and punctuation). */

import java.util.Scanner;
public class StringPalindrome{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a String");
		String s = sc.next();
		String rev = "" ;
		for(int i = s.length()-1 ; i >= 0 ; i--){
		    rev = rev + s.charAt(i);
		}
		if(s.equals(rev))
			System.out.println("The string "+s+" is a palindrome");
		else
			System.out.println("The string "+s+" is not a palindrome");
			
		
	}
}