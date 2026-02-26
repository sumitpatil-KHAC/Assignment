/*Min-Max via Reference Parameters
Write a C++ function:
void findMinMax(int a, int b, int c, int &minVal, int &maxVal); 

The function must nd the minimum and maximum of three integers without using any library function
and store the results into minVal and maxVal through reference parameters. 
In main(), declare two variables int lo, hi
, pass them to findMinMax , and print the results. Verify that the original 
variables  lo and  hi are updated after the call.
*/

#include <iostream>
using namespace std;
void findMinMax(int a, int b, int c, int &minVal, int &maxVal){
	if( a>b  && a>c)
	    maxVal = a;
	else if(b>a && b>c)
	    maxVal = b;
	else 
	   maxVal = c;
	cout << "MaxVal = " << maxVal << endl;
	
	if( a<b  && a<c)
	    minVal = a;
	else if(b<a && b<c)
	    minVal = b;
	else 
	    minVal = c;
	cout << "\n MinVal " << minVal << endl;
	
}  

int main(){
	int lo = 0;
	int hi = 0;
	findMinMax( 10 , 20 , 15 , lo , hi);
	cout << "lo :  " << lo  << endl;
	cout << "\n hi :  " << hi << endl;
}
