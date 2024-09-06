#include<iostream>
#include<string.h>
using namespace std;

class Demo {
	int roll_no;
	char name[20];
public:
	Demo(int, char*);
	void Display();
	~Demo() {
		cout << "Destructor has been called.";
	}
};
Demo::Demo(int a, char* naav) {
	roll_no = a;
	strcpy_s(name, naav);
}
void Demo::Display() {
	cout << "The Roll Number is : " << roll_no << endl;
	cout << "The Name is " << name << endl;
}

int main() {
	Demo* d = new Demo(66, "shreyas");
	d->Display();
	delete d;
}