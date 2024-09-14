#include<iostream>
using namespace std;
int main() {
	int a,digit,rev=0;
	cout << "enter the number";
	cin >> a;
	int cp = a;
	for (; a != 0;) {
		digit = a % 10;
		rev= (rev*10)+digit;
		a = a / 10;
	}
	if (rev == cp) {
		cout << "palindrome";
	}
	else
		cout << "not a palindrome";
}