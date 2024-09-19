#include<iostream>
using namespace std;

template<class T>
T Swap(T &val1 ,T &val2){
	T temp = val1;
	val1=val2;
	val2=temp;
}
int main(){
	int num1 = 40;
	int num2 = 53;
	char a = 's';
	char b = 'n';
	
	cout<<"Before Swap : "<<num1<<" "<<num2<<endl;
	Swap(num1,num2);
	cout<<"After Swap : "<<num1<<" "<<num2<<endl;

	cout<<"Before Swap : "<<a<<" "<<b<<endl;
	Swap(num1,num2);
	cout<<"After Swap : "<<a<<" "<<b<<endl;

}
