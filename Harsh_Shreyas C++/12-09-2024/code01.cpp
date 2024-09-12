#include <iostream>
#include <string.h>
using namespace std;

int main(){

	void strcpy(char* , char*);
	
	char sch[10], tcs[10];
	cout << "enter first name ";
	cin >> sch;
	cout << "enter surname ";
	cin >> tcs;
//	strcpy(tcs,sch);
	
	int x = strcmp(sch,tcs);
	cout << x ;
}
