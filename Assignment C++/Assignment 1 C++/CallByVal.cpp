/* 5.Spot the Bug — Call by Value Trap
The following program is meant to double the value of  n 
inside doubleIt() and see the change reflected in main()
. It does not work as expected.
#include <stdio.h> 
void doubleIt(int n) { 
    n = n * 2; 
printf("Inside doubleIt: %d\n", n); 
} 
int main() { 
int num = 7; 
    doubleIt(num); 
printf("In main after call: %d\n", num); 
return 0; 
} .
1. Compile and run it. Write the output.
2. Fix the function using call by reference (C++ style with &) so that  
num in  main() is actually doubled
3. Write the corrected program and its output.
 */
 
/* 1. Code 
#include <stdio.h> 
void doubleIt(int n) { 
    n = n * 2; 
    printf("Inside doubleIt: %d\n", n); 
} 
int main() { 
    int num = 7; 
    doubleIt(num); 
    printf("In main after call: %d\n", num); 
    return 0; 
} 
*/
/* 
1. Output 
Inside doubleIt: 14
In main after call: 7
*/

/*2.Code 
# include <iostream>
using namespace std;
void doubleIt(int &n){      // call by reference 
	n = n * 2;
	cout << "Inside doubleIt :" << n << endl;
}
int main(){
	int num = 7;
	doubleIt(num);
	cout << "In main after call " << num <<endl;
	return 0;
}
*/
/*
2. Output
Inside doubleIt :14
In main after call 14 
*/

/* 3. Code 
#include <stdio.h> 
void doubleIt(int &n) { 
    n = n * 2; 
    printf("Inside doubleIt: %d\n", n); 
} 
int main() { 
    int num = 7; 
    doubleIt(num); 
    printf("In main after call: %d\n", num); 
    return 0; 
} 
*/
/*
3. Output
Inside doubleIt :14
In main after call 14 
*/
