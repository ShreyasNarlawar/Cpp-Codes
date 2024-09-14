#include<iostream>
using namespace std;
#include<string.h>

class SBI{
	public:
		int accNo;
		char name[15];
		static int AccOpenedYear;
		
	SBI(int an , char* naav){
		accNo = an;
		strcpy(name , naav);
	}
	void showDetail(){
		cout<<"The Account Number is : "<<accNo<<endl;
		cout<<"The Name of Account Holder is : "<<name<<endl;
		cout<<"Account Opened at : "<<AccOpenedYear<<endl;
	}
};
int SBI::AccOpenedYear = 2024;

int main(){
	SBI sbi1=SBI(4587752,"Ram");
	SBI sbi2=SBI(4575458,"Shreyas");
	sbi1.showDetail();
	sbi2.showDetail();
}

