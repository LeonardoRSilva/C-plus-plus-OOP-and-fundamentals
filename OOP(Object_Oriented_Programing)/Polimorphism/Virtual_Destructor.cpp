#include<iostream>
using namespace std;

class Base {
	public:
		Base() {
			cout <<"Construct Base" << endl;
		}
		//this is a destructor
		virtual	~Base() {
			cout << "Destroying Base" << endl;
		}
};

class Derive: public Base {
	public:
		Derive(){
			cout << "Construct Derive" << endl;
		}
		~Derive() {
			cout << "Destroying Derive" << endl;
		}
	
};

int main(){
	
	Base *basePtr = new Derive();
	
	delete basePtr;	
	
	return 0;
}
