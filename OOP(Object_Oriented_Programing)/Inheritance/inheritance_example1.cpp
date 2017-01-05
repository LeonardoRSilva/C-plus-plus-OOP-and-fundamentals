#include<iostream>
using namespace std;

class Shape{
	protected: 
		float width, height;
	public:
		void set_data(float a, float b){
			width = a;
			height = b;
		}
};

class Retangle: public Shape {
	
	public: 
		float area(){
			return (width * height);
		}
};

class Triangle: public Shape {
	
	public:
		float area(){
			return (width * height / 2);
		}
};

int main(){
	
	Retangle rect;
	Triangle tri;
	
	rect.set_data(5,3);
	tri.set_data(5,3);
	
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	
	return 0;
}
