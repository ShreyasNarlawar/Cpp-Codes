#include<iostream>
using namespace std;

class Demo{
	static int a;
public:
	Demo() {
	 	a++; 
	 	cout<<a<<endl;
	}
	static int getval() {
	
	return a;
	}
};
int Demo::a=30;

int main()
{
	cout << Demo::getval() <<endl;
	Demo d1;
}
