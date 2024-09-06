#include<iostream>
using namespace std;
int main() {
	int arr1[2][2];

	cout << "Enter value for Array";
	cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr1[i][j];
		}
		
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr1[i][j]*arr1[i][j] << '\t';

		}
		cout << endl;
	}
}