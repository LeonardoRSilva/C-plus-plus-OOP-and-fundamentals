#include<iostream>
using namespace std;
class Name {
	public:
		int a;
		
		Name(int x){
			a = x;
		}
	
};

int main() {
	Name obj(20);
	Name obj2(50);
	Name obj3(60);
	
	cout << obj.a << endl;
	cout << obj2.a << endl;
	cout << obj3.a << endl;
	
	return 0;
}
