/*3.Q3. Imagine you are tasked with creating a program to simulate a toll booth. The toll booth
keeps track of the number of vehicles that have passed through it and the total amount of
money collected. You need to implement a class TollBooth with appropriate data members
and member functions to accomplish this.
 *
 */
#include <iostream>
using namespace std;

class TollBooth{
	int totalVehicles ;
	double totalRevenue ;
	int totalCarsCount ;
public:
	TollBooth(){
		totalVehicles = 0;
		totalRevenue = 0;
		totalCarsCount = 0 ;
	}
	int getTotalVehicles() const {
		return totalVehicles;
	}
	double getTotalRevenue() const{
		cout<<"Total Revenue : " <<totalRevenue <<endl;
		return 0;
	}
	void reset(){
		totalVehicles = 0;
		totalRevenue = 0;
		cout<<"The Data is reset "<<endl;
	}
	void vehiclePayingToll(int vehicleType ,double tollAmount){
		// cout<<"Select vehicle Type "<<endl;
		//cout<<"2. Truck , 300 rupees"<<endl;
		//cout<<"3. Bus , 350 rupees"<<endl;

		if(vehicleType > 0 && vehicleType <= 3){
			totalVehicles = totalVehicles + 1;
			if(vehicleType == 1)
				totalCarsCount++;
		}
		else
			cout<<"Invalid Vehicle Type"<<endl;

		totalRevenue = totalRevenue + tollAmount;

		cout<<"Total Vehicles : " <<totalVehicles <<endl;
		cout<<"Total Revenue : " <<totalRevenue <<endl;


	}
	void totalCars(){
			cout<<" Total Cars "<< totalCarsCount <<endl;
	}

};
int main() {
	TollBooth t;
	int ch;
	do{
		cout<<"1. Add a Standard Car and collect toll "<<endl;
		cout<<"2. Add a Truck and collect toll "<<endl;
		cout<<"3. Add a Bus and collect toll "<<endl;
		cout<<"4. Display total cars passed "<<endl;
		cout<<"5. Display total revenue "<<endl;
		cout<<"6. Reset booth statistics"<<endl;
		cout<<"7. Exit "<<endl;

		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch){
		case 1 : cout<<"1. Standard Car , 180 rupees"<<endl;
			     t.vehiclePayingToll(1, 180);
			     break;
		case 2 : cout<<"2. Truck , 300 rupees"<<endl;
		         t.vehiclePayingToll(2, 300);
			     break;
		case 3 : cout<<"3. Bus , 350 rupees"<<endl;
			     t.vehiclePayingToll(3, 350);
				 break;
		case 4 : cout<<"Total Cars passed"<<endl;
                 t.totalCars();
		         break;
		case 5: cout <<"Total Revenue "<<endl;
		        t.getTotalRevenue();
		         break;
		case 6: t.reset();
		        break;
		case 7 :cout<<"Exit "<<endl;
		         break;
		default :cout<<"Invalid Choice " <<endl;
		         break;
		}

	}while(ch!=7);
	return 0;
}
