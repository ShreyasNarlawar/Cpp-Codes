#include<iostream>
using namespace std;

int uintlen(int);
int main(){
	int num;
	int search=0;
	cout<<"Enter Number:";
	cin>>num;
	search=uintlen(num);
	cout<<search;
}
int uintlen(int a){
	int cnt=0,temp;
	while(a!=0){
		temp=a%10;
		a=a/10;
		cnt++;
	}
	return cnt;
}
