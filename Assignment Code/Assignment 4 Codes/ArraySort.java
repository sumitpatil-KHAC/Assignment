/* Assignment 4
Question 12: Sort an Array in Ascending Order 
Problem Statement: 
Write a Java program that asks the user to input 5 integers, stores them in an array, and then sorts the 
array in ascending order using the Arrays.sort() method. After sorting, print the sorted array. */

import java.util.*;
public class ArraySort{
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
		
		System.out.println(Arrays.toString(arr));
		
	}
}