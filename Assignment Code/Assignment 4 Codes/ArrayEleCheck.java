/* Assignment 4
Question 13: Check if an Array Contains a Specific Element 
Problem Statement: 
Write a Java program that asks the user to input 5 integers, stores them in an array, and then checks 
whether a specific number (input by the user) is present in the array using the Arrays.asList() method. If 
the number is found, print "Found", otherwise print "Not Found". */

import java.util.Scanner; 
import java.util.Arrays;
import java.util.List;

public class ArrayEleCheck{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of Array");
		int size = sc.nextInt();
		Integer []arr = new Integer[size]; 
		System.out.println("Enter Elements of Array");
		for(int i = 0 ; i < arr.length ; i++){
		   arr[i] = sc.nextInt();
		}
		List<Integer> numList = Arrays.asList(arr);
		System.out.println("List "+ numList); 
		
		System.out.println("Enter a number to search ");
		int s = sc.nextInt();
		if(numList.contains(s))
			System.out.println("Found");
		else
			System.out.println("Not Found");
		
	}

}
