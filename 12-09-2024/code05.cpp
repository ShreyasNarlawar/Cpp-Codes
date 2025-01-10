#include<iostream>
#include<string.h>
using namespace std;

int ustrlen(char* naaav){
	int l = 0;
	while(*naaav != '\0'){
		l++;
		naaav++;
	}
	return l;
}

int main(){
	char name[10];
	cout<<"Enter Name :";
	cin>>name;

	cout<<"The Length of Name is :"<<ustrlen(name);
}
