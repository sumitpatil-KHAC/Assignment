/* Assignment 4
Question 28: String Creation with new Keyword 
Problem Statement: 
Write a Java program that creates two string objects using the new keyword with the 
same content. Then, print whether both objects are the same using the == operator and 
the .equals() method. */


public class StringNew{
	public static void main(String[] args){
		
		String s1 = new String("Java");
        String s2 = new String("Java");

        System.out.println("Using == operator: " + (s1 == s2));

        System.out.println("Using equals(): " + s1.equals(s2));
			
	}
}