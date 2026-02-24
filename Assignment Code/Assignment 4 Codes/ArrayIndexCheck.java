/* Assignment 4
Question 14: Find the Index of an Element in an Array 
Problem Statement: 
Write a Java program that asks the user to input 5 integers, stores them in an array, and then finds the 
index of a specific number (input by the user) using the Arrays.binarySearch() method. If the number is 
found, print the index, otherwise print "Not Found". */

import java.util.Scanner; 
import java.util.Arrays;

public class ArrayIndexCheck{
	public static void main(String[] args){
	    Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of Array");
		int size = sc.nextInt();
		int []arr = new int[size]; 
		System.out.println("Enter Elements of Array");
		for(int i = 0 ; i < arr.length ; i++){
		   arr[i] = sc.nextInt();
		}
		
		Arrays.sort(arr); 
		
		System.out.println("Enter a number to search ");
		int s = sc.nextInt();
		int i = Arrays.binarySearch(arr,s);
		if(i >= 0 )
			System.out.println("Found");
		else
			System.out.println("Not Found");
	}
}