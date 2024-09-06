#include<iostream>
using namespace std;
class Library
{
	char author[10];
	float price;

public:
	void accept();
	void show();

};
	void Library:: accept() {
		cout << "enter author:";
		cin >> author;
		cout << "enter price:";
		cin >> price;

	}
	void Library::show() {
		cout << author << '\t';
		cout << price<<endl;
	}

int main() {
	Library lib[2];
	int i;

	for (i = 0; i <= 1; i++)
	{
		lib[i].accept();
	}
	for (i = 0; i <= 1; i++)
	{
		lib[i].show();
	}
}
