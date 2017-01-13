#include<iostream>
using namespace std;
class Base{
	int i;
	protected: 
		int j;
	public:
		int k;
		void seti(int a) {
			i = a;
		}
		int geti(){
			return i;
		}
		
};

class Derived: protected Base {
	public:
		
		void setj(int a) {
			j = a;
		}
		
		void setk(int a) {
			k = a;
		}
		
		int getj(){
			return j;
		}
		
		int getk(){
			return k;
		}
};

int main(){
	
	Derived obj;
	obj.setk(10);
	cout << obj.getk() << endl;
	
	obj.setj(12);
	cout << obj.getj() << endl;
}
