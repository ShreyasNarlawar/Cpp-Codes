#include <iostream>
using namespace std;

class Car{
	public :
		int seats;
		Car(){
			cout<<"In Default of car Constructor"<<endl;
			cout<<"Enter Seats for car :\n";
			cin>>seats;
		}
		void display(){
			cout<<"The Total seats in the car are :"<<seats<<endl;
		}
};
class Bike :public Car{
	public :
		int cc;
		Bike(){
			cout<<"In Default of Bike Constructor"<<endl;
			cout<<"Enter CC :\n";
			cin>>cc;
		}
		void display(){
			cout<<"The CC of bike is :"<<cc<<endl;
		}
};

int main(){
	Bike obj;
	obj.display();
	
}
