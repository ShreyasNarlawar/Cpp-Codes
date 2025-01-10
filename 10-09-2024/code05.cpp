#include<iostream>
using namespace std;
class Box{
	private :
		int length;
	public:
		Box(){
			length=4;
		}
		friend int printlen(Box);
};
int printlen(Box b){
	b.length += 10;
	return b.length;
}
int main(){
	Box b;
	cout<<"Length of Box is :"<<printlen(b)<<endl;
	return 0;
}
