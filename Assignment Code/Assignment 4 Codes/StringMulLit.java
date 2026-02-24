/* Assignment 4
Question 31: Multiple String Literals with Same Content 
Problem Statement: 
Write a Java program that declares three string literals with the same content and prints 
whether all three strings refer to the same object using the == operator. */

public class StringMulLit{
	public static void main(String[] args){
        String str1 = "java"; 
        String str2 = "java"; 
        String str3 = "java";
		
		if( (str1 == str2) && (str2 == str3) && (str3 == str1))
			System.out.println("All strings point to the same object");
        else
			System.out.println("All strings do not point to the same object"); 

	}
}