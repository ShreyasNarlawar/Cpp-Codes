#include<iostream>
using namespace std;
class Employee   ///It contain one pure virtual function hence it is abstract class
{	
	public:
		int e_id;
		int salary;
		int rate;
//		virtual int floa(void)=0;   //pure virtual function
	public:
		Employee()
		{
			rate=10;
		}
		void accept();
		void display();
		int computesalary();
		~Employee()
		{
			cout<<"I am in destructor"<<endl;
//			delete ptr;
		}
};
void Employee::accept() 
{
	cout<<"Enter employee id"<<endl;
	cin>>e_id;
	cout<<"Enter salary"<<endl;
	cin>>salary;
}
void Employee::display()
{	
	cout<<"Employee id is "<<e_id;
	cout<<"Salary is "<<salary;
}
Employee::computesalary()
{
	salary=rate*salary;
}

class wageemployee: public Employee
{
	public:
		Employee::display;
};
class salesmanager:public Employee
{
	public:
		void computesalary()
		{
			salary=10*rate*salary;
		}
};
int main()
{
	salesmanager obj;
	obj.accept();
	obj.display();
}
