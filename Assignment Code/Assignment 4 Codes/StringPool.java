/* Assignment 4
Question 30: String Pool with intern() Method 
Problem Statement: 
Write a Java program that creates a string using the new keyword and then calls the 
intern() method. Print whether the interned string is pointing to the same object as the 
original string literal. */

public class StringPool{
	public static void main(String[] args){
		String s1 = new String("Java");
		String s2 = s1.intern();
		String s3 = "Java";
		System.out.println("Is s2 and s3 pointing to the same object " +(s2 == s3)); 


	}
}