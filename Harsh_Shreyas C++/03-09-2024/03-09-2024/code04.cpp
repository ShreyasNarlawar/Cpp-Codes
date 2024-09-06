#include<iostream>
using namespace std;

//#include<string.h>
int main() {
	int a;
	cout << "Enter the size: ";
	cin >> a;

	int* ptr = new int[a];
	for (int i = 0; i < a; i++) {
		cout << "Enter value " << i + 1 << endl;
		cin >> ptr[i];
	}
	cout << "Values are:" << endl;
	for (int i = 0; i < a; i++) {
		cout << ptr[i] << endl;
	}
	delete[] ptr;
	cout << "After delete Values are:" << endl;
	for (int i = 0; i < a; i++) {
		cout << ptr[i] << endl;
	}
}