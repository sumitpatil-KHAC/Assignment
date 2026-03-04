/*
 * 4.1 Write a program that:
 Uses new to allocate an array of 5 integers
 Takes user input
 Prints the values
 Deallocates memory using delete[]
Q4.2 Repeat Q4.1 using malloc and free.
Q4.3 — Explain:
 Why constructors are not called when using malloc
 Why new is preferred in C++
 Difference in return types and initialization
 Why malloc cannot initialize complex types
 */
#include <iostream>
using namespace std;

int main1() {
	int* arr = new int[5];
	for(int i = 0; i < 5 ; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < 5 ; i++){
		cout<< arr[i] <<" ";
	}
	delete[] arr;

	return 0;
}

int main(){
	int* arr = (int*)malloc(sizeof(int));
	for(int i = 0; i < 5 ; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < 5 ; i++){
		cout<< arr[i] <<" ";
	}
	free(arr);
	return 0;
}
/*
 *  Why constructors are not called when using malloc
 * ---> The use of constructors is to initialize value and memory .
 *  Why new is preferred in C++
 * ---> In malloc , returns a void that need to be cast to appropriate type
 *      In new , returns a pointer of appropriate type
 *  Difference in return types and initialization
 * ---> Initialization is basically assignment of value to the already declared variable
 *      Return type , is used to return specific type of data for that specific member function
 *  Why malloc cannot initialize complex types
 * ---> as they dont call any constructor for initilization purpose
 *
 * Constructors are not called with malloc because it is a C memory allocation function that only reserves raw memory.
new is preferred in C++ because it calls constructors, returns typed pointers, supports initialization, and works correctly with objects.
malloc returns void* and requires casting, while new returns a typed pointer.
malloc cannot initialize complex types because it does not invoke constructors.
 */
