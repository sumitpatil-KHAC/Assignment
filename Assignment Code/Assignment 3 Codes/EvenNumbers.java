/* Assignment 3
Problem Statement: 
Write a Java program that prints all even numbers between 1 and 50 using a while loop.  
1. Create a method printEvenNumbers() that prints all even numbers from 1 to 50. 
2. Use a while loop to iterate from 1 to 50 and print the even numbers. */

class Even{
	void printEvenNumbers(){
		int a = 1;
		while( a <= 50){
			if(a % 2 == 0 )
			    System.out.print(a+ "   ");
			a++;
		}
	}
}
public class EvenNumbers{
	public static void main(String[] args){
		Even e = new Even();
		e.printEvenNumbers();
	}
}