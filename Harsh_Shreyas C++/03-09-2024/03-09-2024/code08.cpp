#include<iostream>
using namespace std;

int main() {
	float total_sub,sum=0;
	float avg=0;
	char name[20];

	cout << "Enter Name :" << endl;
	cin >> name;
	
	cout << "Enter total subjects :" << endl;
	cin >> total_sub;
	float* arr = new float[total_sub];

	for (int i = 0; i < total_sub; i++) {
		cout << "Enter The Marks for Subject " << i + 1 <<" : " << endl;
		cin >> arr[i];
		sum = sum + arr[i];
	}


	cout << "The Total Marks of "<<name<<" is : "<<sum<<endl;
	avg = sum / total_sub;
	cout << "The Average is : " << avg;
}