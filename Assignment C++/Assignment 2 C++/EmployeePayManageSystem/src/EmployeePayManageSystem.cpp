//============================================================================
// Name        : EmployeePayManageSystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Employee{
	int empId;
	string empName;
	double empSalary;
    double grossSal ;
public:
	Employee() {
		empId = 0;
		empName = "";
		empSalary = 0;
		grossSal = 0;
	}
	void setEmpId(){
		int eId;
		cout << "Enter Employee Id "<<endl;
		cin >> eId;
		if(eId > 0 && eId < 50000)
		    empId = eId;
		else
			cout <<"Enter a valid Employee Id"<<endl;
	}
	int getEmpId() const{
		return empId;
	}
	void setEmpName(){
		string eName;
		cout <<"Enter Employee Name "<<endl;
		cin >> eName;
		if(eName.empty())
			cout<<"Enter a valid Name"<<endl;
		else
			empName = eName;
	}
	string getEmpName() const{
		return empName;
	}
	void setEmpSalary(){
		double eSalary;
		cout <<"Enter Employee Salary"<<endl;
		cin >> eSalary;
		if(eSalary < 500)
			cout<<"Not a Valid Salary Amount"<<endl;
		else
			empSalary = eSalary;
	}
	double getEmpSalary()const{
		return empSalary;
	}

	void addEmployee(){
		setEmpId();
		setEmpName();
		setEmpSalary();
	}

	void calculateGrossSalary(){

       if(empSalary <= 5000){
    	   grossSal = empSalary + empSalary * 0.1 ;
    	   cout<<"Gross Salary of Employee having Salary less than 5000 :"<<grossSal<<endl;
       }
       else if(empSalary > 5000 || empSalary <= 10000){
    	   grossSal = empSalary + empSalary * 0.15;
    	   cout<<"Gross Salary of Employee having Salary greater than 5000 and less than 10000 :"<<grossSal<<endl;
       }
       else if(empSalary > 10000 ){
    	   grossSal = empSalary + empSalary * 0.2;
    	   cout<<"Gross Salary of Employee having Salary greater than 10000 :"<<grossSal<<endl;
       }
	}

	void displayEmployeeDetails(){
		cout<<"Employee Id : "<<empId <<endl;
		cout<<"Employee Name : "<<empName <<endl;
		cout<<"Employee Salary : "<<empSalary <<endl;
		cout<<"Employee Gross Salary : "<< grossSal <<endl;
	}
	void updateEmployee(){
		int employeeId;
		cout << "Enter Employee Id : "<<endl;
		cin >> employeeId;
		if(employeeId == empId){
			setEmpName();
			setEmpSalary();

			cout<<"Updated Name "<< getEmpName() <<endl;
			cout<<"Updated Salary " << getEmpSalary() <<endl;
		}
		else{
			cout<<"Enter a valid Employee Id "<<endl;
		}
	}
};

int main() {
	Employee e;
	int ch = 0 ;
	do{
		cout<<"1. Add a Employee"<<endl;
		cout<<"2. Calculate Gross Salary"<<endl;
		cout<<"3. Display Employee Details"<<endl;
		cout<<"4. Update Employee Name and Salary "<<endl;
		cout<<"5. Exit"<<endl;

		cout<<"Enter your choice"<<endl;
		cin>>ch;

		switch(ch){
		case 1 : e.addEmployee();
		        break;
		case 2 : e.calculateGrossSalary();
		         break;
		case 3 : e.displayEmployeeDetails();
		         break;
		case 4 : e.updateEmployee();
		         break;
		case 5 : cout<<"Exit"<<endl;
		         break;
		default : cout<<"Invalid choice"<<endl;
		}

	}while(ch!=5);
	return 0;
}
