#include<iostream>
using namespace std;

class Employee{
	public:
		int E_id;
	Employee(){
		cout<<"In default Constructor\n";
		E_id = 0;
	}
	Employee(int g){
		cout<<"In para Constructor of Emp \n";
		E_id = g;	
	}
	void display(){
		cout<<"In display Function "<<endl<<"The Employee Id is :>"<<E_id<<endl;
	}
};

class Manager:public Employee{
	public:
		int M_id,D_id;
	Manager(){
		cout<<"In Manager Default constructor" <<endl;
		M_id=0;D_id=0;		
	}
	Manager(int c,int d){
		M_id = c;
		D_id = d;
		cout<<"In Manager Para,"<<endl;
	}
	void display(){
		cout << "In display Function "<<endl << "The Manager id is :>"<<M_id << endl<<"Department Id is"<<D_id;
	}
};

int main(){
	Manager m1(425,18);
	m1.display();
	Manager m2();
}