/*  Assignment 3
Problem Statement: 
 Write a Java program that calculates the sum of all integers from 1 to N (where N is a positive integer) 
using a for loop. The program should: 
1. Create a method calculateSum() that takes a number N and calculates the sum of all integers from 
1 to N. 
2. Use a for loop to iterate through all integers from 1 to N and add them up. */

import java.util.Scanner;

class Calculate{
	static int calculateSum(int n){
		int sum = 0;
		for(int i = 0 ; i <= n ; i++){
			sum = sum + i;
		}
		return sum;
	}
}
public class CalN{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println(" Enter a number ");
		int n = sc.nextInt();
		System.out.println(Calculate.calculateSum(n));
	}
}