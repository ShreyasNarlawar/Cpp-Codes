#include<iostream>
using namespace std;
class Demo
{
	int * ptr;

public:

	Demo()
	{
		ptr = new int ;
		*ptr = 10;
	}
	~Demo()
	{
		cout << "destructor is called:\n";

	}
	void display()
	{
		cout << ptr;
	}


};
int main()
{
	Demo obj;
	obj.display();
	obj.~Demo();
}