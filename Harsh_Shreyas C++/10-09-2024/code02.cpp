#include<iostream>
using namespace std;

class Myclass1{
	private:
		int a;
	protected:
		int b;
	public:
	Myclass1(){
		a=74;
		b=87;
	}
	friend void frdfunc(Myclass1&);

};

void frdfunc(Myclass1& r){
	cout << "private variable is: "<< r.a << endl;
	cout << "protected variable is: "<< r.b << endl;
}

int main(){
	
	Myclass1 mc;
	frdfunc(mc);
}
