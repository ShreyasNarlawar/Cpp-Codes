#include <iostream>
#include <string.h>
using namespace std;

int main(){

	char sch[10];
	char xyz[10];
	
	cout << "enter first name ";
	cin >> sch;
	
	strcpy(xyz,sch);
	
	strrev(sch);
	cout<<sch<<endl;
	
	int a = strcmp(xyz,sch);
	cout<< a;
}
