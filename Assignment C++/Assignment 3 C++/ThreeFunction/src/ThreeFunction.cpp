/* Q2.1 Write three functions:
void swapByValue(int a, int b);
void swapByAddress(int *a, int *b);
void swapByReference(int &a, int &b);
Call all three in main() and observe which one actually swaps values.
Q2.2 — Answer this:
Explain how reference variables act as aliases and how that affects swapByReference().
*/
#include <iostream>
using namespace std;

void swapByValue(int a, int b){
	int temp = 0;
	temp = a ;
	a = b ;
	b = temp;
	cout<<"Value in func: "<<"Value of a : "<<a <<" | " <<" Value of b : "<<b<<endl;
}
void swapByAddress(int *a, int *b){
	int temp = *a;
	*a = *b ;
	*b = temp;
	cout<<"Address in func : "<<"Value of a : "<<*a <<" | " <<" Value of b : "<<*b<<endl;
}
void swapByReference(int &a, int &b){
	int temp =  a ;
	a = b ;
	b = temp;
	cout<<"Reference in func : "<<"Value of a : "<<a <<" | " <<" Value of b : "<<b<<endl;
}
int main() {
	int a , b;
	cout<<"Enter First Number : "<<endl;
	cin>>a;
	cout<<"Enter Second Number : "<<endl;
	cin>>b;
	swapByValue(a , b);
	cout<<"Value : "<<"Value of a : "<<a <<" | " <<" Value of b : "<<b<<endl;

	swapByAddress(&a , &b );
	cout<<"Address : "<<"Value of a : "<<a <<" | " <<" Value of b : "<<b<<endl;

	swapByReference( a ,b);
	cout<<"Reference : "<<"Value of a : "<<a <<" | " <<" Value of b : "<<b<<endl;

	return 0;
}

/*
 * Explain how reference variables act as aliases and how that affects swapByReference().
 * ---> Reference variable acts as a alias to existing variable . they dont have their own memory
 * In swapByReference() - the parameters are alias of original variable . so swapping then modifies
 * the actual variables in calling function
 */
