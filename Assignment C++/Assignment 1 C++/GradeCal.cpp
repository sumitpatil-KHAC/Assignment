/*Grade Calculator
A student appeared in 5 subjects. Store the marks of each subject as a 
float. Compute the total and percentage. Use the ternary operator (no if-else
 allowed) to determine and print the grade according to the table below.
*/

#include <stdio.h>

int main(){
	float math ; 
	float sci ;
	float eng ;
	float his ;
	float hin ;
	printf("Enter The Marks of below Subject \n");
	printf("Math : ");
	scanf("%f",&math);
	printf("Science : ");
	scanf("%f",&sci);
	printf("English : ");
	scanf("%f",&eng);
	printf("History : ");
	scanf("%f",&his);
	printf("Hindi : ");
	scanf("%f",&hin);
	float avg = (math + sci + eng + his + hin) / 5 ;
	(avg >= 75 )? printf("A"): (avg >= 60 )? printf("B") : (avg >= 45 )? printf("C"):(avg < 45 )? printf("Fail"):printf("Out of Box");

			
}
