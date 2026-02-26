/* Pointer Swap
Declare three integer variables: 
x = 10, y = 20, z = 30.
Create three pointers 
px, py, pz pointing to them.
Using only pointer dereferencing (no direct use of 
x, y, z after declaration):
Swap the values of x and z .
Print all three variables before and after the swap.
Also print the addresses stored in each pointer to con rm they did not change.
*/
#include <iostream>
using namespace std;

int main(){
	int x = 10;
	int y = 20;
	int z = 30;
	
	int *px;
	int *py;
	int *pz;
	
	*px = x;
	*py = y;
	*pz = z;
	
	cout<<"x : "<< x ;
	cout<<"y : "<< y ;
	cout<<"z : "<< z ;
	
	x = z;
	
	cout<<"x : "<< x ;
	cout<<"y : "<< y ;
	cout<<"z : "<< z ;
	return 0;
}

