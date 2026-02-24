/* Assignment 4
Question 10: Find the Average of Elements in an Array 
Problem Statement: 
Write a Java program that asks the user to input 5 integers, stores them in an array, and then calculates and 
prints the average of the elements in the array. */

import java.util.Scanner;
public class ArrayAvg{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Size of Array");
		int size = sc.nextInt();
		int []arr = new int[size];
		int sum = 0;
		for(int i = 0 ; i < arr.length ; i++){
			arr[i] = sc.nextInt();
		}
		for(int s : arr){
			sum = sum + s ; 	
		}
		float avg = 0;
		avg = (float) sum / size ;
		System.out.println("The average of the numbers is "+avg);
	}
}