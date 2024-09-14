#include<iostream>
using namespace std;
#include<string.h>

class mera {
private:
	char* n;
	int size;
public:
	mera(char*);
	~mera() {
		cout << "Distructor is called." << endl;
		delete[]n;
	}
};
mera::mera(char* a) {
	size = strlen(a);
	cout << size << endl << a << endl;
	n = new char(size + 1);
	strcpy(n, a);
}
int main() {
	mera sunn("Hello Shreyas");
}