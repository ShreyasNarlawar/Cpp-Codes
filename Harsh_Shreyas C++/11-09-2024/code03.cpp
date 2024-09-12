#include<iostream>
using namespace std;

int main(){
	//char studname[4][20]={"Krishna","Radha","Ram","Seeta"};
	char *studname[4]={"Krish","Radha","Rames","Seeta"};
	
	cout<<"The Size of Array is: "<<sizeof(studname)<<endl;
	
	for(int i= 0; i<4;i++){
		
		for(int j=0;j<5;j++){	
		
			cout<<*(*(studname+i)+j)<<endl;
		
		}
		cout<<endl;
	}
}
