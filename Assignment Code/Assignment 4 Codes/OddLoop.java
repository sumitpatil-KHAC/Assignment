/* Assignment 4
Question 5: Sum of Odd Numbers between 1 and N 
Problem Statement: 
Write a Java program that asks the user for a number N and calculates the sum of all odd numbers 
between 1 and N using a for loop. */

import java.util.Scanner;
public class OddLoop{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		int sum = 0;
		for(int i = 1 ; i <= n ; i++){
			if(i % 2 != 0)
				sum = sum + i;	
		}
		System.out.println("The sum of odd Numbers from 1 to "+n+ " is : "+sum);
		
	}
}