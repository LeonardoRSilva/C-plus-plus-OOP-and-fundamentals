#include<iostream>
using namespace std;

class Shape{
	protected:
		float l;
	public:
		void get_data(){
			cin >> l;
		}
		virtual float area() = 0;
};

class Square: public Shape{
	public:
		float area() {
			return l * l;
		}
};

class Circle:public Shape {
	public:
		float area(){
			return 3.14 * l * l;
		}
	
};

int main() {
	Square obj;
	obj.get_data();
	cout << obj.area() << endl;
	
	return 0;
}
