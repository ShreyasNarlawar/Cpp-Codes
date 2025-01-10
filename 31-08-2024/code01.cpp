#include<iostream>
using namespace std;
class Student
{
	int id;
	int age;
	float salary;

public:
	void accept()
	{
		cout << "enter id";
		cin >> id;
		cout << "enter salary";
		cin >> salary;
	}

	void show()
	{
		printf("id is %d\n salary is %3.2f\n", id, salary);

	}
	void setid(int);
	int getid();

};


void Student::setid(int d)
{
	id = d;
}
int Student::getid()
{
	return id;
}

int main()
{
	Student s;
	s.accept();
	s.show();
	s.getid();
	s.setid(5646);
	s.show();

}
