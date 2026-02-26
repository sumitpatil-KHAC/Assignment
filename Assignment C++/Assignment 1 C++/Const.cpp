/* . const Constant in Functions
 Write two C++ functions that use a  const float PI = 3.14159f
 declared at the global scope:
 float circleArea(float radius)
 — returns area of a circle.
float circlePerimeter(float radius)
 — returns circumference.
In main() , call both with  radius = 7.0 and print results to 4 decimal places.
Additionally, add this line inside main() and describe what happens when you compile:
PI = 3.0f;   
// attempt to modify const
Do not delete the line — comment it out after observing the error and write the compiler error message as a
comment beside it.
*/

#include<iostream>
using namespace std;

const float PI = 3.14159f;
float circleArea(float radius){
	float area = PI * radius * radius ;
	return area ;
}
float circlePerimeter(float radius){
	float perimeter = 2 * PI * radius;
	return perimeter;
}
 
int main() {
	int radius = 0;
	cout << "Enter Radius of Circle" << endl;
	cin >> radius ;
	float area = circleArea(radius);
	cout << "Area of Circle of radius "<<radius << "is : "<<area <<endl;
	float perimeter = circlePerimeter(radius);
	cout << "Area of Perimeter of radius "<<radius << "is : "<<perimeter <<endl;
    //	PI = 3.0f;      // attempt to modify const
}
