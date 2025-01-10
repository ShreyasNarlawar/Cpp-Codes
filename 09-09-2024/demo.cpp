#include<iostream>
using namespace std;

int main() {

	int arr[5];
	int* ptr[5];


	for (int i = 0; i < 5; i++) {
		cout << "Enter value for " << i + 1 << endl;
		cin >> arr[i];

	}
	for (int j = 0; j < 5; j++) {
		ptr[j] = &arr[j];

	}
	for (int k = 0; k < 5; k++) {
		cout << endl << *ptr[k];
	}
}
