#include<iostream>
using namespace std;

int main(){
	int val,rev,temp;
	
	cout<<"Enter Value for Reverse :";
	cin>>val;
	
	cout<<"Before Reverse :"<<val<<endl;
	
	while(val!=0){
		temp=val%10;
		rev = rev *10 + temp;
		val=val/10;
	}
	cout<<"After Reverse :"<<rev<<endl;
}
