// Diamond / Hybrid Inheritance

#include <iostream>
using namespace std;

class Microsoft{
	public :
	float Revenue;
	Microsoft(float Mvalue){
		Revenue = Mvalue;
		cout <<" Revenue of microsoft "<<Revenue<<"B"<<endl;
	}
};
class Apple :public Microsoft{
	public:
		Apple(float Avalue):Microsoft(0),Revenue(Bvalue){
			Revenue = Avalue;
			cout <<" Revenue of Apple "<<Revenue<<"B"<<endl;
		}
};
class Samsung:public Microsoft{
	public:
		Samsung(float Bvalue):Microsoft(0),Revenue(Bvalue){
			Revenue = Bvalue;
			cout <<" Revenue of Samsung "<<Revenue<<"B"<<endl;
		}
};
class Google:public Samsung, public Apple{
	public:
		Google(float Mvalue,float Avalue, float Bvalue):Microsoft(Mvalue),Apple(Avalue),Samsung(Bvalue){
		
			 cout << "Total Revenue of Google: " << (Apple::Revenue + Samsung::Revenue) << "B" << endl;
    }
};
int main(){
	Google g1(245.81f,383.74f,209.37f);	
//	245.81B
//	383.74B
//	209.37B
//	328.28B
}
