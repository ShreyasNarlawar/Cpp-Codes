#include<iostream>
using namespace std;
void swap(int&,int&);
int main() {
	int a, b;
	cout << "Enter a and b";
	cin >> a >> b;
	cout << "Before Swapping"<<a<<b << endl;
	swap(a,b);
	cout << "After Swapping" << a << b << endl;
}
void swap(int &p,int &q) {
	int Temp = p;
	p = q;
	q = Temp;
}


