#include<iostream>
#include<string.h>
using namespace std;


int main(){
	char name[10];
	cout<<"Enter Name :";
	cin>>name;

	cout<<"The Number of characters are :"<<ustrlen(name);
	cout<<"The Number of space are :"<<spacelen(name);
	cout<<"The Number of vowels are:"<<vowellen(name);
	cout<<"The Number of words are :"<<wordlen(name);
}

int ustrlen(char* naaav){
	int l = 0;
	while(*naaav != '\0'){
		l++;
		naaav++;
	}
	return l;
}

