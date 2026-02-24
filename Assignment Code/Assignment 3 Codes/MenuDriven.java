/* Assignment 3
Problem Statement: 
You are required to write a menu-driven Java program that implements four separate 
problems. The program should allow the user to select which problem to run, execute the 
corresponding logic, and then return to the menu until the user chooses to exit. 
The four problems are as follows (Already done in assignment 2, just put it in switch 
case): 
Problem 1: Grade Evaluation System 
Problem 2: Leap Year Check 
Problem 3: Day of the week 
Problem 4: Identify Default Values of Variables 
Case 5: Exit 
*/

import java.util.Scanner;

class Menu{
	Scanner sc = new Scanner(System.in);
	
	void gradeSys(){
		System.out.println(" Enter Marks of Maths , Science, History");  
		int math = sc.nextInt();
		int science = sc.nextInt();
		int history = sc.nextInt();
		float avg = 0;
		avg = (float)(math + science + history)/3; 
		if(avg >= 90 )
			System.out.println("Grade A with "+avg+ "marks");
		else if(avg >= 70 && avg <= 89 )
			System.out.println("Grade B with "+avg+ "marks");
		else if(avg >= 50 && avg <= 69 )
			System.out.println("Grade C with "+avg+ "marks");
		else if(avg >= 30 && avg <= 49 )
			System.out.println("Grade D with "+avg+ "marks");
		else
		    System.out.println("Fail with "+avg+ "marks");
	}
	void leapCheck(){
		System.out.println("Enter a year to check whether it is Leap or not ");
		int y = sc.nextInt();
		
		if( (y % 4 == 0 ) && ( y % 100 != 0) || ( y % 400 ==0))
			System.out.println(y+ "is a Leap year");
		else
			System.out.println(y+ "is not a Leap year");
	}
	void weekDay(){
		System.out.println("Enter a day 1-7");
		int day = sc.nextInt();
		switch(day){
			case 1 : System.out.println("Monday");
			         break;
			case 2 : System.out.println("Tuesday");
			         break;
			case 3 : System.out.println("Wednesday");
			         break;
			case 4 : System.out.println("Thursday");
			         break;
			case 5 : System.out.println("Friday");
			         break;
			case 6 : System.out.println("Saturday");
			         break;
			case 7 : System.out.println("Sunday");
			         break;
			default : System.out.println("Invalid day number");
			         break;
		}
	}
	void defValues(){
		byte a;                     
        short b; 
        int c; 
        long d; 
        float e; 
        double f; 
        char g; 
        boolean h; 
		
		a = 10 ; 
		b = 20 ;
		c = 30 ; 
		d = 40 ;
		e = 50.5f ;
		f = 60.5 ;
		g = 'a';
		h = true ;
		
		System.out.println("Byte = "+a);
		System.out.println("Short = "+b);
		System.out.println("Integer = "+c);
		System.out.println("Long = "+d);
		System.out.println("Float = "+e);
		System.out.println("Double = "+f);
		System.out.println("Character = "+g);
		System.out.println("Boolean = "+h);
	}
}
public class MenuDriven{
	public static void main(String[] args){
		Menu m = new Menu();
	    Scanner sc = new Scanner(System.in);
		int ch;
	  do{	
        System.out.println("*************");
        System.out.println("1: Grade Evaluation System ");
        System.out.println("2: Leap Year Check ");		
        System.out.println("3: Day of the week");		
        System.out.println("4: Identify Default Values of Variables ");	
        System.out.println("5. Exit");		
		
        System.out.println("Enter your Choice");
        ch = sc.nextInt();
	 		
        switch(ch){
			case 1 : m.gradeSys();
			         break;
			case 2 : m.leapCheck();
			         break;
			case 3 : m.weekDay();
			         break;
		    case 4 : m.defValues();
			         break;
		    default : System.out.println("You are Exited");
			          break;
		}			
      } while(ch != 5);
	}
}