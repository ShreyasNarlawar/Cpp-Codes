#include <iostream>
using namespace std;
bool isPrime(int);

int main(){
	int num=25,count=0;
	
 for (int i = 1; i <= 25; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1||num % 2 == 0 || num % 3 == 0) 
	return 0; 
	if (num <= 3)
	return 1;  
    
    for (int i = 5; i*i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
			 return 0;
    }
    
    return 1;
}
