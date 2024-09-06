#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[6];
	char* p = new char[6];
	cout << "enter the name:" << endl;
	cin >> p;

	cout<<strlen(p)<<endl;
	cout << sizeof(p);
	delete[]p;
	cout << a;
}