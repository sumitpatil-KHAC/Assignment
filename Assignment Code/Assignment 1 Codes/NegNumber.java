/* Write a Java program that checks if a predefined number is negative using an 
if-else statement and displays the result. */
public class NegNumber{
   public static void main(String[] args){
       int a = Integer.parseInt(args[0]);
	   if( a == 0 ){
		   System.out.println(a+" is not +ve nor -ve number ");
	   }
	   else if( a < 0 ){
		   System.out.println(a+" is Negative number ");
	   }
	   else{
		   System.out.println(a+" is Positive number ");		   
	   }
	   
   }
}