/* . (Challenge) Absolute Value & Clamp — No 
if-else
Write two C++ functions using only the ternary operator (no 
if, no else, no standard library): 
1. int absolute(int n) — returns the absolute value of n.
2. int clamp(int val, int lo, int hi)
 — returns:
lo if  val < lo 
hi if val > hi 
val otherwise
Test with the following cases in  main() and print results in a table format:
*/

#include <iostream>
using namespace std;
int absolute(int n){	
	return (n >= 0 ) ? n : -(n);
}
int clamp(int val, int lo, int hi){
	return (val > hi) ? hi : lo ;
}
int main(){
	int val = 0;
	int lo = 0;
	int hi = 0;
	
	cout << "Enter val : "<< endl;
	cin >> val;
	cout << "Enter lo : "<< endl;
	cin >> lo;
	cout << "Enter hi : "<< endl;
	cin >> hi;
	cout << "val \t lo \t hi \t absolute(val) \t clamp(val,lo,hi)" <<endl;
	int abs = absolute(val);
	int clp = clamp(val,lo,hi);
	cout << val <<"\t" << lo <<"\t" << hi <<"\t\t" << abs <<"\t\t" << clp;
	return 0;
	
}

/* Output :-
val      lo      hi      absolute(val)   clamp(val,lo,hi)
-15     -10     10              15              -10
0       -10     10              0               -10
25      -10     10              25              10
-3      0       5               3               0
*/

