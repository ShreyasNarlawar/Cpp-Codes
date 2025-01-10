#include<iostream>
using namespace std;
class Circle{
	public :
		float radius;
		float Area;
	public :
		Circle(){
			radius=8;
		}
	friend float showArea(Circle);
};
float showArea(Circle c){
	c.Area = 3.14f *c.radius*c.radius;
	return c.Area;
}
int main(){
	Circle cir;
	cout<<"Radius of Circle is "<<cir.radius<<endl;
	cout<<"Area of Circle is "<<showArea(cir)<<endl;
}
