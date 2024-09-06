#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Student numbers:" << endl;
	cin >> num;
	int* a;
	a = new int[num];



	for (int i = 0; i < num; i++) {
		cout << "Enter GPA of " << i + 1 << "student:" << endl;
		cin >> a[i];
	}
	for (int j = 0; j < num; j++) {
		cout << "The GPA of student " << j + 1 << "is:" << a[j]<<endl;
	}
	delete[]a;
}