// Assignment 2 : Employee Class 
class Employee{
	int id;           // instance variable
	String name;
	String dept;
	double sal;
	static String cname = "Green World Technologies";     // static variable
	
	Employee(){
		System.out.println("Employee Detail");
		id = 1;                                       
		name = "Vivek";
		dept = "IT";
		sal = 100000.65;
		
	}
	int totalemp(int total ){
		return total;
	}
	
}
public class Demo3{
	public static void main(String[] args){
		Employee e = new Employee();
		
		System.out.println(e.totalemp(100));
		System.out.println(e.id);
		System.out.println(e.name);
		System.out.println(e.dept);
		System.out.println(e.sal);
	    System.out.println(e.cname);


		
	}
}