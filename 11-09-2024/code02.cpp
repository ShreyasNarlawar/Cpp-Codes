#include <iostream>
using namespace std;

class Demo{
//    static  int x;
	int x;
public:
	Demo() {
	    x=10;
	}
	static int getval(){
//	    return x;
	return this->x;
	}
	 
};
int Demo::x;
int main()
{
	cout << Demo::getval() << endl;
}
