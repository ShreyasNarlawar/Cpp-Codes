#include<iostream>
using namespace std;

class Parent{
	protected:
		int roll_no;
		
};
class Child : public Parent{
	public:
		int b;
		void SetRollNo(int a){
			roll_no = a;
			}
		void valB(int z){
			b = z;
			}
		void Bdisplay(){
			cout<<"ValB is:"<<b<<endl;
		}
		void display(){
			cout<<"Roll no is:"<<roll_no<<endl;
		}
};
int main(){
	Child c;
	c.SetRollNo(8586);
	c.display();
	cout<<"Size of object is "<<sizeof(c);
	c.valB(50);
	c.Bdisplay();
}
