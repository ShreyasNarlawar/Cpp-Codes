#include <iostream>
using namespace std;

namespace myone{
	void func(){
		cout<<"Inside namespace function"<<endl;
	}

}
namespace mytwo{
	void func(){
		cout<<"Inside 2nd namespace function";
	}
}
int main(){
	myone::func();
	mytwo::func();
}
