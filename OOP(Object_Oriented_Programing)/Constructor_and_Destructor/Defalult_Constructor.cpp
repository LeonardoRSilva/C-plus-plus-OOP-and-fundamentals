#include<iostream>
using namespace std;
class Name{
	public:
		int a;
		int b;
		
		Name() {
			a = 20;
			b = 30;
		}
	
};

int main() {
	Name obj;
	
	cout << obj.a << endl;
	cout << obj.b << endl;
	
	return 0;
}
