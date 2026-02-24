/* Assignment 3
Problem Statement: 
Write a Java program that includes a method to check the age category.  
1. Create a method checkAgeCategory() that takes an integer (age) as a parameter and prints 
whether the user is a minor, adult, or senior citizen. 
2. In the main method, use the Scanner class to prompt the user to enter their age. 
3. Pass the user's age to the checkAgeCategory() method. */

import java.util.Scanner;
class Age{
	int checkAgeCategory(int age ){
		if ( age >=0 && age < 18 )
            System.out.println("Minor with "+age+" age");
        else if ( age >= 18 && age < 50)
            System.out.println("Adult with "+age+" age");
        else if ( age >= 60 && age < 150 )
            System.out.println("Senior Citizen with "+age+" age");			
        else
            System.out.println("Not a Human");			
	
		return age;
	}
}
public class AgeChecker{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Age");
		int age = sc.nextInt();
		
		Age a = new Age();
		System.out.println(a.checkAgeCategory(age));
		
	}
}