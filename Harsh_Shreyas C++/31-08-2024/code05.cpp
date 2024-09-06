#include<iostream>
using namespace std;
int main() {
	int a, d, sum = 0;
	cout << "enter the number";
	cin >> a;
	int cp = a;
	for (; a != 0;) {
		d = a % 10;
		sum = sum + (d * d * d);
		a = a / 10;
	}
	if (sum == cp) {
		cout << "armstrong";
	}
	else
		cout << "not";
}