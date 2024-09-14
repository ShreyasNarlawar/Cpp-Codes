#include<iostream>
using namespace std;

int main(){
	int arr[10],even,odd;
	cout<<"Enter Numbers :";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int j=0;j<10;j++){
		if(arr[j]%2==0){
			even++;
		}
		else
		odd++;
	}
	cout<<"Even Numbers are :"<<even<<endl;
	cout<<"Odd Numbers are  :"<<odd;
	
}
