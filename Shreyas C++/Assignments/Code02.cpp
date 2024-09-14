#include<iostream>
using namespace std;

int revint(int);
int main(){
	
	int num;
	cout<<"Enter a number :";
	cin >> num;
	int dup = num;
	
	
	if(revint(num)==dup)
	cout<<"Entered Number is Palindrome.";
	else
	cout<<"Entered Number is not Palindrome.";
}
int revint(int val){
	int cpy,rev;
	while(val!=0){
		cpy=val%10;
		rev = rev *10 + cpy;
		val=val/10;
	}
	return rev;
//	cout<<rev;
}
