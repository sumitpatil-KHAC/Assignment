#include <stdio.h>

int add(){
	int num1 ;
	int num2 ;
	printf("Enter First Number \n");
	scanf("%d",&num1);
	printf("Enter Second Number \n");
	scanf("%d",&num2);

	int result = num1 + num2;
	printf("Addition : %d \n ",result);
	return 0;
}
int sub(){
	int num1 ;
	int num2 ;
	printf("Enter First Number \n");
	scanf("%d",&num1);
	printf("Enter Second Number \n");
	scanf("%d",&num2);

	int result = num1 - num2;
	printf("Subtraction : %d \n",result);
	return 0;
}
int mul(){
	int num1 ;
	int num2 ;
	printf("Enter First Number \n");
	scanf("%d",&num1);
	printf("Enter Second Number \n");
	scanf("%d",&num2);

	int result = num1 * num2;
	printf("Multiplication : %d  \n",result);
	return 0;
}
int divide(){
	int num1 ;
	int num2 ;
	printf("Enter First Number \n");
	scanf("%d",&num1);
	printf("Enter Second Number \n");
	scanf("%d",&num2);

	if(num2 == 0){
			printf("Error : Division by Zero ");
		}
	else{
	int result = num1 / num2;
	printf("Division : %d  \n",result);
	}
	return 0;
}
int rem(){
	int num1 ;
	int num2 ;
	printf("Enter First Number \n");
	scanf("%d",&num1);
	printf("Enter Second Number \n");
	scanf("%d",&num2);

	if(num2 == 0){
		printf("Error : Division by Zero ");
	}
	else{
	  int result = num1 % num2;
	  printf("Remainder : %d \n ",result);
	}
	return 0;
}
int main(){
	int choice ;
	do{
		printf("**** Calculator *****\n");
		printf("1. Addition \n");
		printf("2. Subtraction \n");
		printf("3. Multiplication \n");
		printf("4. Division \n");
		printf("5. Remainder \n");
		printf("0. Exit");

		printf("\n Enter your Choice");
	    scanf("%d",&choice);

	    switch(choice){
	    case 1 : add();
	             break;
	    case 2 : sub();
	    	     break;
	    case 3 : mul();
	    	     break;
	    case 4 : divide();
	    	     break;
	    case 5 : rem();
	    	     break;
	    default : printf("Invalid Choice");
	              break;
	    }
	}while(choice !=0 );
    return 0;
}

