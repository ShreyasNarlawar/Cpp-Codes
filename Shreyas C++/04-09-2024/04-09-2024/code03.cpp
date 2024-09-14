#include<iostream>
using namespace std;

class Temp {
	int size;
	int* ptr;

public:
	Temp();
	void get();
	void show();
	void max();
	void min();
};
Temp::Temp() {
	cout << "Enter size:";
	cin >> size;
	cout << endl;
	ptr = new int[size];
}
void Temp::get() {
	cout << "Enter Values : \n";
	for (int i = 0; i < size; i++)
	cin >> ptr[i];
}
void Temp::max() {
	int m = ptr[0];
	for (int i = 1; i < size; i++) {
		if (ptr[i] > m)
			m = ptr[i];
	}
	cout<<"maximum no is:"<<m << endl;
}
void Temp::min() {
	int m = ptr[0];
	for (int i = 1; i < size; i++) {
		if (ptr[i] < m)
			m = ptr[i];
	}
	cout<<"minimum no is :"<<m << endl;
}
void Temp::show() {
	cout << "Value are";
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << '\n';
	}
}
int main() {
	Temp a;
	a.get();
	a.max();
	a.min();
	a.show();
}