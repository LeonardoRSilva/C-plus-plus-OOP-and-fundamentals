#include<iostream>
using namespace std;

class Base{
	public:
		virtual	void display() {
			cout << "You are in the base class" << endl;
		}
};
class Derived: public Base {
	public:
		void display(){
			cout << "You are in the derived class" << endl;
		}
	
};

int main() {
	
	Derived obj2;
	Base *obj = &obj2;
	
	obj->display();	
	
	return 0;
}
