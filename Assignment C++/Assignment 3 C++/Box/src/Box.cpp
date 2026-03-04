/*  Create a class Box with private members length, width, and height.
Write:
 A parameterized constructor
 A function setDimensions(int, int, int) that uses this-> to distinguish between
member variables and parameters
 A function volume() to compute the volume
Demonstrate:
 Initialization using constructor
 Assignment using setDimensions()
*/

#include <iostream>
using namespace std;

class Box{
	int length ;
	int width ;
	int height ;
public :
	Box():length(0),width(0),height(0){

	}
	Box(int length , int width , int height){
		this->length = length;
		this->width = width ;
		this->height = height;
	}
	int getLenght() const{
		return length;
	}
	void setLength(int length){
		if(length!= 0)
			this-> length = length;
		else
		    cout<<"Invalid Length"<<endl;
	}



	int getWidth() const {
		return width;
	}

	void setWidth(int width) {
		if(width!= 0)
			this-> length = length;
		else
		    cout<<"Invalid Width"<<endl;
	}
	int getHeight() const {
		return height;
	}

	void setHeight(int height) {
		if(height!= 0)
			this-> height = height;
		else
			 cout<<"Invalid Width"<<endl;
	}
	void setDimensions(int length , int width , int height){
			this ->length = length;
			this ->width = width;
			this ->height= height;
			cout<<"Length "<<length <<" Width "<<width<<" Height "<<height<<endl;
	}
	void volume(){
		int volume = 0;
		volume = length * height * width;
		cout<<"Volume of a Box is "<< volume<< endl;
	}

};
int main() {
	Box b(10,20,30);
	b.volume();
	Box b1;
	b1.setDimensions(20,30,40);
	return 0;
}

/*  Why must initialization happen before assignment?
 * --> Initialization takes place before assignment . As in C++
 * the garbage value is stored in any variable declared without initialization .
 * So , to get answers in precise and accurate way , initialization is done first before assignment
 *
 *  When is initialization preferred over assignment?
 * --> Initialization gives a valid value to a state or member so that in future requirement
 * we can perform operations on it , if assignment is not done .
 */
