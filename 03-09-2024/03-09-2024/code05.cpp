#include<iostream>
using namespace std;
#include<string.h>

int main() {
	char arr[10];
	string sirname;

	cout << "Enter Name :";
	cin >> arr;
	cout << "Enter Sirname :";
	cin >> sirname;

	cout << strlen(arr)<<endl;
	cout << sizeof(arr)<<endl;

	cout << sizeof(sirname);
}