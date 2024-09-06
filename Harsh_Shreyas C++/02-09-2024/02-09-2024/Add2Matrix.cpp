#include<iostream>
using namespace std; 
int main() {
	int arr1[3][3];
	int arr2[3][3];

	cout << "Enter value for 1 Array";
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}

	}
	cout << "Enter value for 2 Array";
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr2[i][j];
			
		}
	}

	cout << " values are";
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr1[i][j];
			cout << '\t';

		}
		
		cout << endl;
	}

	cout << endl;
	cout << '\t' << "+";
	cout << endl<<endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j];
			cout << '\t';

		}

		cout << endl;
	}
	cout << endl;
	cout <<'\t' << "=";
	cout << endl<<endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr1[i][j]+arr2[i][j];
			cout << '\t';
		}
		cout << endl;
	}
}