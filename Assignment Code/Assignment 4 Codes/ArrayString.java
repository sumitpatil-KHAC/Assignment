/* Assignment 4
Question 8: Print All Names in a String Array 
Problem Statement: 
Write a Java program that uses a for-each loop to print all the names stored in a String array. The program 
should ask the user to input 4 names, store them in an array, and then print each name using the for-each 
loop. */
 
import java.util.Scanner; 
public class ArrayString{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Size of Array");
		int size = sc.nextInt();
		
		String []s = new String[size];
		
		for( int i = 0 ; i < s.length ; i++){
			s[i] = sc.next();
		}
		for(String i : s){
			System.out.println(i);
		}	
	}
} 