#include<iostream>
using namespace std;

class Square{
	public:
		int side=0;
	void output(){
		
		cout<<"The Area of Square is : "<<side*side<<endl;
	}
};
int main(){
	Square sq;
	cout<<"Enter the Side :"<<endl;
		cin>>sq.side;
		sq.output();
	
}

