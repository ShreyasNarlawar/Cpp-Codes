#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter 2 values for swap :"<<endl;
	cin>>a>>b;
	cout<<"before Swapping"<<a<<" "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping"<<a<<" "<<b<<endl;
}
