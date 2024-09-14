#include<iostream>
using namespace std;
class cons
{
public:
	cons() {
		cout << "constructor is called:"<<endl;
	}
	~cons()
	{
		cout << "destructor is called:";
	}
};

/*cons::cons()
{
	cout << "constructor is called:";
}*/
int main()
{
	cons* a1=new cons;
	delete a1;


}