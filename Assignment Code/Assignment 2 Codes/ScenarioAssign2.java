/* Assignment 2: 
Scenario: 
You are working on a program that handles different data types. Your manager has asked you to quickly 
check the values of various variables, but you’re in a rush and forget to initialize them. As you go through 
the code, you expect some values to show up, but Java has something else in mind. Your task is to fix the 
issue and ensure the variables hold proper values.  */
public class ScenarioAssign2{
	public static void main(String[] args){
		byte a;                     
        short b; 
        int c; 
        long d; 
        float e; 
        double f; 
        char g; 
        boolean h; 
		
		/* Variable might not have been initialized error for all the below SOP
		System.out.println("Byte = "+a);
		System.out.println("Short = "+b);
		System.out.println("Integer = "+c);
		System.out.println("Long = "+d);
		System.out.println("Float = "+e);
		System.out.println("Double = "+f);
		System.out.println("Character = "+g);
		System.out.println("Boolean = "+h); */
		
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