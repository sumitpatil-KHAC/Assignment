/* Pointer Swap
Declare three integer variables: 
x = 10, y = 20, z = 30.
Create three pointers 
px, py, pz pointing to them.
Using only pointer dereferencing (no direct use of 
x, y, z after declaration):
Swap the values of x and z .
Print all three variables before and after the swap.
Also print the addresses stored in each pointer to confirm they did not change.
*/
#include <iostream>
using namespace std;

int main(){
	int x = 10;
	int y = 20;
	int z = 30;
	
	int *px = &x;
	int *py = &y;
	int *pz = &z;
	
	*px = x;
	*py = y;
	*pz = z;
	
	cout<<"x : "<< x <<endl;
	cout<<"y : "<< y <<endl;
	cout<<"z : "<< z <<endl;
	
	cout<< &px <<endl;
	cout<< &py <<endl;
	cout<< &pz <<endl;
	
	int temp = 0;
	temp = x;
	x = z;
	z = temp;
		
	cout <<"After Swap" <<endl;
	cout<<"x : "<< x <<endl;
	cout<<"y : "<< y <<endl;
	cout<<"z : "<< z <<endl;
	
	cout<< &px <<endl;
	cout<< &py <<endl;
	cout<< &pz <<endl;
	return 0;
}

