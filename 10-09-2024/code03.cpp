#include<iostream>
using namespace std;

class Myclass;
class theirClass {
	public :
	    void MemberFunc(Myclass&);
};
class Myclass{
	private:
		int a;
	protected:
		int b;
	public:
	Myclass(){
		a=103;
	}
	friend void theirClass::MemberFunc(Myclass&);
};
void theirClass::MemberFunc(Myclass& m1){  //define

		cout<<"Total Students are :"<<m1.a<<endl;
}
int main(){
	
	Myclass m1;
	theirClass th;
	th.MemberFunc(m1);
}
