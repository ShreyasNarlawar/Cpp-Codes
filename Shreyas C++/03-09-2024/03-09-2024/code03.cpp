#include<iostream>
using namespace std;


class MyClass {
public:
	int* a;
	float* b;
	char* c;
public:
	void data() {
		a = new int(20);
		cout << *a << endl;

		c = new char('S');
		cout << *c << endl;

		b = new float(4.85f);
		cout << *b << endl;

	}
	MyClass() {
		cout << "called constructor"<<endl;
	}
	~MyClass() {
		cout << "called destructor"<<endl;
	}
};
int main() {

	MyClass* a = new MyClass();
	MyClass* b = new MyClass();
	MyClass* c = new MyClass();

	MyClass obj;
	obj.data();

	delete a;
	delete b;
	delete c;
}