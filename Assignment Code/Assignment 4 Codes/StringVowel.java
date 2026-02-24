/* Assignment 4
Question 25: Count Vowels in a String 
Problem Statement: 
Write a Java program that asks the user for a string and counts the number of vowels (a, 
e, i, o, u) in the string. The program should then print the total number of vowels. */

import java.util.Scanner;
public class StringVowel{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a String");
		String s = sc.next();
		int count = 0;
		for(int i = 0  ; i < s.length() ; i++){
		    if( s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
				count++;
		}
		System.out.println("Number of vowel in "+s+" = " +count);
	}
}