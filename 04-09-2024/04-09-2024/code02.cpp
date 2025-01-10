#include<iostream>
#include<string.h>
//#include <cstring>

using namespace std;

class String1
{
	int l;
	char* ptr;

public:
	void chardisplay();
	String1();
	String1(char*);
	void stringdisplay();
	String1(char, int);
	String1(int);
	~String1()
	{
		cout << "destructor is called\n";
		if (ptr)
		{
			delete ptr;
			cout << "if block run:";
		}
	}
};
void String1::chardisplay()
{

	cout << "length is: " << l << endl;
	cout << "character is: " << *ptr<<endl;
}
void String1::stringdisplay()
{
	cout << "length is: " << l << endl;
	cout << "string is:" << ptr << endl;
}

String1::String1()
{
	l = 1;
	ptr = new char[l];
	*ptr = 'H';
}

String1::String1(char* sptr)
{
	l = strlen(sptr);
	ptr = new char[l + 1];
	strcpy(ptr,sptr);
}

String1::String1(char ch, int a)
{
	int i;
	l = a;
	ptr = new char[l + 1];
	for (i = 0; i < l; i++)
	{
		ptr[i] = ch;
	}
	ptr[i] = '\0';
}

String1::String1(int a)
{
	l = a;
	ptr = new char[l + 1];
	cout << "enter string:\n";
	cin >> ptr;
}


int main()
{
	String1 a1;
	a1.chardisplay();

	String1 a2('ram');
	a2.stringdisplay();

	String1 a3('&',50);
	a3.stringdisplay();

	String1 a4(8);
	a4.stringdisplay();

}