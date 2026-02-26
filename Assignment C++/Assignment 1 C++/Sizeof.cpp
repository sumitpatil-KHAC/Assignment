/* Type Size Explorer
Write a C program that prints the size in bytes of each of the following types using 
sizeof:short int, int, long int, long long int, unsigned int, float, double,
 long double , char 
 Question .Which two types have the same size on your machine? Does 
unsigned int have a di erent size than int? */

#include <stdio.h>
int main(){
	short s;
	short int si ;
	int i;
	long int li;
	long long int lli;
	unsigned int ui;
	float f;
	double d;
	long double ld;
	char c;
	printf("Size of Short : %zu \n",sizeof(s));
	printf("Size of Short Int : %zu \n",sizeof(si));
	printf("Size of Int : %zu \n",sizeof(i));
	printf("Size of Long Int : %zu \n",sizeof(li));
	printf("Size of Long Long Int: %zu \n",sizeof(lli));
	printf("Size of Unsigned Int : %zu \n",sizeof(ui));
	printf("Size of Float : %zu \n",sizeof(f));
	printf("Size of Double : %zu \n",sizeof(d));
	printf("Size of Long Double : %zu \n",sizeof(ld));
	printf("Size of Char : %zu \n",sizeof(c));
}

/*
Size of Short : 2
Size of Short Int : 2
Size of Int : 4
Size of Long Int : 4
Size of Long Long Int: 8
Size of Unsigned Int : 4
Size of Float : 4
Size of Double : 8
Size of Long Double : 16
Size of Char : 1
*/

/* short , short int  = 2
int , long int , unsigned int , float = 4
long long int , double  = 8
No , unsigned int dont have different size than int 
*/
