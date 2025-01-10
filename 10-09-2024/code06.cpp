#include<iostream>
using namespace std;
class ClassD;  
class ClassC{
	public :
		ClassC() : numC(15){}     
	private:
		int numC;
		
	friend int add (ClassC, ClassD); 
};
class ClassD{
	public:
		ClassD(): numD(10){} 
	private :
		int numD;
		
	friend int add (ClassC, ClassD); 
};

int add(ClassC objA, ClassD objB){  
	return (objA.numC + objB.numD);
}

int main(){
	ClassC objA;
	ClassD objB;
	cout << " Addition is "<<add(objA, objB);
	return 0;
}
