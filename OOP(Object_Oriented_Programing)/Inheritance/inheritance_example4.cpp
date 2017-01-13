#include<iostream>
using namespace std;
// example of multiple inheritance
class Base1{
	protected:
		int x;
	public:
		void showx() {
			cout << x << endl;
		}
};

class Base2{
	protected:
		int y;
	public:
		void showy() {
			cout << y << endl;
		}
};

class Derived: public Base1, public Base2 {
	public:
		void set(int i, int j) {
			x = i;
			y = j;
		}
};

int main(){
	Derived obj;
	obj.set(10,20);
	
	obj.showx();
	obj.showy();
	
	return 0;
}
