#include<iostream>
using namespace std;
void ustrcpy(char*,char*);

int main(){
	char abc[10];
	char xyz [10];
	
	cout << "enter the string : "<<endl;
	cin >> abc;
	
	ustrcpy(xyz,abc);
	cout<<"Copy String is :"<<xyz;
}
void ustrcpy(char *a,char* b){
	while(*b !='\0'){
		*a=*b;
		a++;
		b++;
	}
	*a = '\0';
}
