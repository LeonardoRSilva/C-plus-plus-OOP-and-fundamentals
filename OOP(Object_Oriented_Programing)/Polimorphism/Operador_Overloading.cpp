#include<iostream>
using namespace std;

class Operador {
	public:
		int a = 2;
		void operator++(){
			a = a + 5;
		}
		void display(){
			cout << a;
		}
};

int main() {
	Operador obj;
	++obj;
	
	obj.display();
	
	return 0;
}
