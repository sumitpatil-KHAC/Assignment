/* Assignment 4
Question 6: Print All Elements of an Array 
Problem Statement: 
Write a Java program that uses a for-each loop to print all elements of an integer array. The program 
should ask the user to input 5 integers, store them in an array, and then print all the elements using a 
for-each loop. */

import java.util.Scanner;
public class ArrayElements{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array");
		int s = sc.nextInt();
		System.out.println("Enter Elements of Array");
		int arr[] = new int[s];
		for(int i = 0 ; i < arr.length ; i++ ){
			arr[i] = sc.nextInt();
		}
		for(int i : arr){
			System.out.print(i+"  ");
		}
		
	}
}