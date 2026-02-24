/* Assignment 4
Question 7: Find the Sum of All Elements in an Array 
Problem Statement: 
Write a Java program that uses a for-each loop to calculate the sum of all elements in a given integer 
array. The program should ask the user to input 5 integers, store them in an array, and then compute the 
sum of these numbers using the for-each loop. */


import java.util.Scanner;
public class ArrayEleSum{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array");
		int s = sc.nextInt();
		System.out.println("Enter Elements of Array");
		int arr[] = new int[s];
		int sum = 0;
		for(int i = 0 ; i < arr.length ; i++ ){
			arr[i] = sc.nextInt();
		}
		for(int i : arr){
			sum = sum +i;
		}	
		System.out.println("The sum of all numbers is  "+sum);

	}
}