/* Assignment 4
Question 9: Find the Largest Element in an Array 
Problem Statement: 
Write a Java program that asks the user to input 5 integers, stores them in an array, and then finds and 
prints the largest element in the array. (Explore in-built method to solve this) */

import java.util.Scanner;
public class ArrayLargeEle{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array");
		int s = sc.nextInt();
		System.out.println("Enter Elements of Array");
		int arr[] = new int[s];
		int max = 0;
		for(int i = 0 ; i < arr.length ; i++ ){
			arr[i] = sc.nextInt();
		}
		for(int i : arr){
			if( i > max)
			    max = i;
		}	
		System.out.println("The Maximum of all numbers is  "+max);
	}
}