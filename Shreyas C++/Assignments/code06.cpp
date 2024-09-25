#include<iostream>
using namespace std;
#include<string.h>

int main(){
	char name[30];
	cout<<"Enter Name ::";
	cin>>name;
	
	
	cout<<"Before Uppercase : "<<name<<endl;
	int len = strlen(name);
	
	for(int i=0;i<len;i++){
	name[i]=name[i]-32;
	}
	cout<<"After Uppercase : "<<name;
	
}
