#include<iostream>
using namespace std;

int main() {
	int arr1[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter Value for "<<i+1 << endl;
		cin >> arr1[i];
	}
	int max = arr1[0];

	for (int i = 0; i < 5; i++) {
		if (max < arr1[i]) {
			max = arr1[i];
		}
	}
	cout << "Maximum number is " << max;


	int min=arr1[1];
	for (int i = 0; i < 5; i++) {
		if (min > arr1[i]) {
			min = arr1[i];
		}
	}
	cout << "Minimum number is " << min;
}