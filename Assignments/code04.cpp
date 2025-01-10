#include<iostream>
using namespace std;
int main(){

int num=0;
cout<<"Factorials are :"<<endl;
for(int i=5;i<9;i++){
	for(int j =0;j<i;j++){
		num=num+(i*j);
		}
		cout<<num<<endl;
	}
}
