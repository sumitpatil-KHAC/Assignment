//============================================================================
/*3.1 Write a program to store an integer value in a variable, then:
 Create a pointer pointing to the variable
 Create a reference to the same variable
 Modify the value using pointer and reference
Print the variable after each change.
Q3.2 — Explain:
 Two differences between pointer and reference
 Why references cannot be reseated but pointers can
 Why references cannot be NULL
*/

#include <iostream>
using namespace std;

int main() {
	int var ;  // declaration

	var = 10;  // assignment

	int* ptr = &var;   // pointer

	cout<< "Value of Pointer "<< *ptr <<endl;

	*ptr = 20;      // dereferencing

	cout<< "Modified Value of Pointer "<< *ptr <<endl;

	int &ref = var;    //reference

	cout << " Value of Reference "<< ref<<endl;

	ref = 30;

	cout << " Modified Value of Reference "<< ref<<endl;

	return 0;
}

/*  Two differences between pointer and reference
 * ---->  Pointer stores address of a variable .
 *        Reference used to create reference to variable
 *        Pointer has its own memory
 *        Reference dont have its own memory
 *  Why references cannot be reseated but pointers can
 * ----> Becuase Reference dont have their own memory , they share the memory
 *       and pointers have their own memory
 *  Why references cannot be NULL
 * ----> References can not be null because they are alias for another variable
 *
 */
