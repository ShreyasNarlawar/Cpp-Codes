#include<iostream>
using namespace std;
int main() {
	int arr1[2][2];
	//int arr2[2][2];

	cout << "Enter value for Array";
	cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr1[i][j];
			cout << '\t';
		}
		cout<<endl;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			//arr2[i][j] = arr1[j][i];
			cout << arr1[j][i]<<'\t';
			
		}
		cout << endl;
	}
}