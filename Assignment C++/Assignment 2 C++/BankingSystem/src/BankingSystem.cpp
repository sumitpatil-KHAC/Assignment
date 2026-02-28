/*
 * 2.Create a C++ program for a simple
1. BankAccount with the following data members:
2. AccountNumber(int): The account number of the bank account.
3. accountHolderName(string): The name of the account holder.
4. balance (double):The current balance in the account.
The BankAccount class should have the following member functions:
1. Getter and Setter Methods:
2. Deposit method: A method  that allows the user to deposit money into the
It should take an amount as a parameter and update the balance accordingly.
a class called the account.
3. withdraw method: A method that allows the user to withdraw money from the
account. It should take an amount as a parameter and update the balance.
Make sure to check if there is sufficient balance before allowing the withdrawal.
4. displayAccountDetails method: A method that displays the account details (
account number, account holder name, and balance).
Now, create a menu-driven program in the `main` function that allows the user
to perform the following operations:
1. Deposit money into an existing account
2. Withdraw money from an existing account
3. Display the account details.
4. Exit the program.



 */
#include <iostream>
using namespace std;

class BankAccount{
	int accountNumber;
	string accountHolderName;
	double balance;

public :
	void setAccountNumber(){
		int acNo ;
		cout<<"Enter 6 digit Account Number "<<endl;
		cin >> acNo;
		if(acNo >= 100000 && acNo <= 2147483647 )
			accountNumber = acNo;
		else
			cout<<"Enter a valid Account Number"<<endl;
	}
	int getAccountNumber() const{
		return accountNumber;
	}

	void setAccountHolderName(){
		string n;
		cout<<"Enter your Name "<<endl;
			cin >> n;

		if(n.empty())
			cout<<"Please Enter your name "<<endl;
		accountHolderName = n;
	}
	string getAccountHolderName() const{
		return accountHolderName;
	}

	void setBalance(){
		double bal;
		cout<<"Enter Balance "<<endl;
		cin >> bal;
		if(bal >= 0)
			balance = bal;
		else
			cout<<"Not a valid Balance"<<endl;
	}
	double getBalance() const{
		return balance;
	}

	void deposit(){
		int dep;
		cout<<"Enter Amount to be Deposited : "<<endl;
		cin >> dep;

		balance = balance + dep;

		cout<<"Amount of "<<dep <<"is deposited successfully"<<endl;
		cout<<"Your Balance is "<<balance <<endl;
	}
	void withdraw(){
		int wit;
		cout<<"Enter the amount to withdraw "<<endl;
		cin>>wit;

		if( wit > balance){
			cout<<"Insufficient Balance"<<endl;
		}
		else if(wit == balance){
			cout<<"You cant withdraw all the amount : The minimun amount must be of 500 rupees "<<endl;
		}
		else if(wit < balance){
			balance = balance - wit ;
		}
		cout<<"You have successfully withdrawn amount of "<<wit <<"from your account" <<endl;
		cout<<"Your balance is "<<balance<<endl;
	}
	void displayAccountDetails(){
		cout<<"Account Number "<<accountNumber<< endl;
		cout<<"Account Holder Name "<<accountHolderName<<endl;
		cout<<"Account Balance "<<balance<<endl;
	}

};

int main() {
	BankAccount b;
	b.setAccountNumber();
	b.setAccountHolderName();
	b.setBalance();
	int ch;
	do{
		cout<<"1. Deposit Money into an existing account"<<endl;
		cout<<"2. Withdraw Money from an existing account"<<endl;
		cout<<"3. Display account details"<<endl;
		cout<<"4. Exit the program"<<endl;

		cout<<"Enter your choice"<<endl;
		cin>>ch;

		switch(ch){
		case 1 : b.deposit();
		         break;
		case 2 : b.withdraw();
		         break;
		case 3 : b.displayAccountDetails();
		         break;
		case 4 : cout<<"Exit "<<endl;
		         break;
		default : cout<<"Invalid Choice"<<endl;
		}

	}while(ch!=4);
	return 0;
}
