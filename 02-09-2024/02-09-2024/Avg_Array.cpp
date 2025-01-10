#include<iostream>
using namespace std;

int main(){
	int sum=0,avg=0;
	int arr[5];
	int* ptr[5];

	
	for (int i = 0; i < 5;i++) {
		cout << "Enter Mark of " << i + 1 << endl;
		cin >> arr[i];
		
	}
	for (int h = 0; h < 5; h++) {
		ptr[h] = &arr[h];
		sum = sum + *ptr[h];

	}

	avg = sum / 5;
	cout << "The Total marks are :" << sum << endl << "The Avg is :" << avg;

}