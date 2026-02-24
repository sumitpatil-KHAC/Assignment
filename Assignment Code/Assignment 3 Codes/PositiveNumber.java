/* Assignment 3
Problem Statement: 
Write a Java program that repeatedly asks the user to enter a positive number.  
1. Create a method askForPositiveNumber() that uses a do-while loop to ask the user for a number 
until they enter a positive number. 
2. Use the Scanner class to take the user’s input. 
3. Once a positive number is entered, the program should display the number.  */

import java.util.Scanner;
class Positive{
	void askForPositiveNumber(){
	    int a ;
		do{
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter +ve Number");
		    a = sc.nextInt();
		   	
		}while( a <= 0 );
		System.out.println("Positive Number "+a);
	}
}
public class PositiveNumber{
	public static void main(String[] args){
		Positive p = new Positive();
		p.askForPositiveNumber();
		
	}
}