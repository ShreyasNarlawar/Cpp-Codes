#include<iostream>
using namespace std;
#include<string.h>
class Demo
{
	int a, b;
	char* c = new char[20];
public:
	Demo(int a, int b, char* c)
	{
		this->a = a;
		this->b = b;
		strcpy(this->c, c);
	}
	void show()
	{
		cout << a << b << c << endl;

	}
};
int main()
{
	Demo d1(10, 20, "shrey");
	{
		Demo d2(d1);
		d2.show();
	}
	d1.show();
}
