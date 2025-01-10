#include<iostream>
using namespace std;

class Parent{
	public:
		void marry(){
			cout<<"Marry with Alia"<<endl;
		}
};
class Child:public Parent{
	public:
	void marry(){
		cout<<"Wanna marry with Deepika"<<endl;
	}
};
int main(){
	Child c;
	Parent p;
	c.marry();
	p.marry();
}
