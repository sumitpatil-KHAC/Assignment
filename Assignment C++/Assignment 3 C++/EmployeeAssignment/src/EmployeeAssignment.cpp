/*
 * Q6.1 Create a class Employee with:
 const int employeeId
 string name
 float salary
Write a constructor using initializer list to initialize all members.
Q6.2 — Add a function to display details.
Q6.3 — Answer these:
1. Why must const members be initialized in initializer list?
2. What happens if you try to assign the value of a const member inside constructor body?
3. Why is initializer list faster than assignment?
 */

#include <iostream>
using namespace std;

class Employee{
	const int employeeId;
	string name;
	float salary;
public:
	Employee():employeeId(0), name(""),salary(0){

	}
	Employee(int empId , string name , float salary):employeeId(empId), name(name),salary(salary){
		 // this->employeeId = employeeId;
	}
	void employeeDetails(){
		cout<<"Employee Id : "<<employeeId <<endl;
		cout<<"Employee Name : "<<name <<endl;
		cout<<"Employee Salary : "<< salary <<endl;

	}
};
int main() {
	Employee e;

	Employee e1(101, "Sumit", 123456);

	e.employeeDetails();

	e1.employeeDetails();

	return 0;
}

/*
 * 1. Why must const members be initialized in initializer list?
 * ---> to avoid assignment of const variables , constructor initializer is used .
 *      to avoid , this->employeeId = employeeId; - here assignment to const variable employeeId is done which is not valid for any const variable
 *
 * 2. What happens if you try to assign the value of a const member inside constructor body?
 * --->  error will occur ,- assignment of read only
 *
 * 3. Why is initializer list faster than assignment?
 * ---> As it executes before entering into constructor body
 */
