#include<iostream>
using namespace std;
class Base{
	protected:
		int i,j;
	public:
		void set(int a,int b) {
			i = a;
			j = b;
		}
		void show(){
			
			cout << i << " " << j << endl;
		}
};

//inheritance
class Derived: public Base {
	int k;
	public:
		Derived(int x) {
			k = x;
		}
		void showk() {
			cout << k << endl;
		}
};

int main(){
	Derived obj(4);
	obj.set(1,2);
	
	obj.show();
	obj.showk();
	return 0;
}
