#include<iostream>
using namespace std;
class Complex {
	int real, img;

public:
	void show();
	Complex();
	Complex(int, int);
};

Complex::Complex() {
	cout << "in default constructor"<<endl;
	cout << "enter real"<<endl;
	cout << "enter img"<<endl;
	cin >> real >> img;

}

Complex::Complex(int a,int b) {
	
	cout << "in parameterized constructor"<<endl;
	real = a;
	img = b;
	cout << real << endl<<img<<endl;
}

void Complex::show() {
	cout << real << "+" << img << "i"<<endl;
}
int main() {
	Complex c1;
	Complex c2(10, 50);
	c1.show();
	c2.show();
}