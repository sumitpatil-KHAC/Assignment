/* Assignment 4
Question 3: Calculate the Factorial of a Number 
Problem Statement: 
Write a Java program that asks the user for a number N and calculates the factorial of N using a for loop. */

import java.util.Scanner;
public class Factorial{
	public static void main(String[] args){
		Scanner sc =  new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		int fact = 1;
		for(int i = 1 ; i <= n; i++){
			fact = fact * i;
		}
    System.out.println("Factorial of "+n+ " is " +fact);		
	}
}
