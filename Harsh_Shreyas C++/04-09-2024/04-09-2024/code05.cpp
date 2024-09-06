#include<iostream>
using namespace std;

class Box {
	int len;
	int* breadth;
	int heig;
public:
	Box() {
		cout << "In default constructor" << endl;
		breadth = new int;
	}
	~Box() {
		cout << "Destructor yeun gelaaa re !!!!!!";
		delete breadth;
	}
	Box(Box& sam) {
		cout << "aahe me re" << endl;
		this->len = sam.len;
		this->breadth = new int;
		*breadth = *(sam.breadth);
		heig = sam.heig;
	}

	void setData(int len, int bread, int heig) {
		this->len = len;
		*breadth = bread;
		this->heig = heig;
	}
	void showData() {
		cout << "The Lenght is :" << len << endl << "The Breadth is :" << *breadth << endl << "The Height is :" << heig << endl;
	}
};
int main() {
	Box a;
	a.setData(50, 40, 74);
	a.showData();
	Box b(a);
	a.showData();
	b.showData();

}