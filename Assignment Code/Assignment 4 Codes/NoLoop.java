/* Assignment 4
Question 1: Print Numbers from 1 to N 
Problem Statement: 
Write a Java program that asks the user for a number N and then prints the numbers from 1 to N using a 
for loop. */

import java.util.Scanner;
public class NoLoop{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		for( int i = 1 ; i <= n ; i++ ){
			System.out.print(i+"  "); 
		}
	}

}