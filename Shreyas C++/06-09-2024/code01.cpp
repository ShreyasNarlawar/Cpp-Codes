#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			cout<<"in default constructor \n";
		};
		void display(){
			cout << "a is displayed"<< endl;
		}
		
};
class B : public A{
};

int main (){
	A a;
	a.display();
	B b;
	b.display();
}


