/*
 * Q5.1 Create a class Student with:
 rollNo
 name
 marks
Write the following:
1. Default constructor
2. Parameterized constructor
3. Constructor that uses this-> pointer
4. A function to print student details
Create:
 One object using default constructor
 Two objects using parameterized constructor
Q5.2 — Answer:
 When does compiler generate a default constructor?
 When does it NOT generate one?
 Can constructors be overloaded?
 */
#include <iostream>
using namespace std;

class Student{
	int rollNo;
	string name;
	float marks;
public:
	Student():rollNo(0),name(""),marks(0){

	}
	Student(int rollNo , string name , float marks){
		this->rollNo = rollNo ;
		this->name = name;
		this->marks = marks;
	}
	void getRollNo(int rN){
		if(rN > 0)
		    this->rollNo = rN;
		else
			cout<<"Not a Roll Number";
	}
	int setRollNo() const{
		return rollNo;
	}
	void getName(string n){
		if(n.empty())
			cout<<"Enter a valid name";
		else
			this->name = n;
	}
	string setName() const{
		return name;
	}
	void getMarks(float m){
		if(m > 0 && m < 100)
			this->marks = m;
		else
			cout<<"Marks are out of limit";
	}
	float setMarks() const{
		return marks;
	}
	void studentDetails(){
		cout<<"Roll No "<< rollNo <<endl;
		cout<<"Name "<< name <<endl;
		cout<<"Marks "<< marks <<endl;
	}


};
int main() {
	Student s;

	Student s1(101,"Sumit",98);

	Student s2(111,"Tanmay",68);

	s.studentDetails();

	s1.studentDetails();

	s2.studentDetails();

	return 0;
}

/*
 *  When does compiler generate a default constructor?
 * ---> When the program dont have its own constructor then , at time of object creation
 * default constructor is provided by compiler (with garbage value)
 *
 *  When does it NOT generate one?
 * ---> Compiler will not generate a default constructor if it is explicitly defined by programmer
 *
 * Can constructors be overloaded?
 * ---> Constructors can be overloaded , the  above program constructor is an example of constructor overloading
 */

