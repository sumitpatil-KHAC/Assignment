/* Temperature Converter
Write a C program with the following two functions — declare prototypes before 
main(), define them after  main() :
float celsiusToFahrenheit(float c)
 — converts Celsius to Fahrenheit
(Formula: F = (C × 9/5) + 32)
float fahrenheitToCelsius(float f)
 — converts Fahrenheit to Celsius
(Formula: C = (F - 32) × 5/9)
In  main(), call both functions with sample values and print the results 
formatted to 2 decimal places
*/

#include <stdio.h>
float celsiusToFahrenheit(float);          // prototype
float fahrenheitToCelsius(float);

int main(){
	float c = celsiusToFahrenheit(0);
	printf("%.2f \n",c);
	float f = fahrenheitToCelsius(68);
	printf("%.2f",f);
	return 0;
}
float celsiusToFahrenheit(float c){
	float fah  = 0;
	fah = c * (9/5) + 32;
	return fah;
}
float fahrenheitToCelsius(float f){
	float cel  = 0;
	cel = (f-32)* 5/9;
	return cel;		
}
