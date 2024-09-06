#include<iostream>
using namespace std;
int main() {
	int a,i;
	cout << "enter the value";
	cin >> a;

	for (i = 2; i <= a; i++)
	{
		if (a % i == 0)
			break;
	}
	if (i == a)
		cout << "prime";
	else
		cout << "not";
}