#include<iostream>
using namespace std;

class Rectangle{
		static const int length =4;
	public:
		static const int breadth;
	private:
		static const int height;
	
	public:
		Rectangle(){
			cout<<"Rectangle "<<endl;
		}
	static int display(){
		int total = length*breadth*height;
		return total;	
		
	}
};
const int Rectangle::breadth=5;
const int Rectangle::height=9; 

int main(){
	
	cout<<"The Area of Rectangle is : "<<Rectangle::display();
}
