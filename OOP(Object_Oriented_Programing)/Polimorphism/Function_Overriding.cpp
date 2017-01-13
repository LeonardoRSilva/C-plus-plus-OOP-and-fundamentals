#include<iostream>
using namespace std;

class Base{
	public:
		void display() {
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
	Base obj;
	Derived obj2;
	
	obj.display();
	obj2.display();	
	
	return 0;
}
