/* Assignment 4 
Question 11: Count Positive and Negative Numbers in an Array 
Problem Statement: 
Write a Java program that asks the user to input 6 integers, stores them in an array, and then counts how 
many positive and negative numbers are present in the array. */

import java.util.Scanner;
public class ArrayCountPosNegEle{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size of Array");
        int size = sc.nextInt();
		int arr[] = new int[size];
		for(int i = 0 ; i < arr.length ; i++){
			arr[i] = sc.nextInt();
		}
		int pos = 0;
		int neg = 0;
		for(int a : arr){
			
			if(a > 0 )
				pos++;
			else if( a < 0 )
				neg++;		
		}
		System.out.println("Positive number :" +pos);
		System.out.println("Negative number :" +neg);
        		
	}
}
