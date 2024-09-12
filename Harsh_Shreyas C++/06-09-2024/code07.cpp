#include<iostream>
using namespace std;

class Demo{
	int num;
	public:
	Demo(int a){
		cout<<"In Parameterized Constructor :> "<<a<<endl;
	}
};
class Fun:public Demo{
	int c;
	public:
	Fun():Demo(198){
		cout<<"In Default of Fun \n";
	}
};

int main(){
	Fun a;
}
