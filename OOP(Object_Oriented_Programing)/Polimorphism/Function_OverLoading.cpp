#include<iostream>
using namespace std;
class PrintData{
	public:
		void print(int i) {
			cout << "printing int: " << i << endl;
			
		}
		void print(double f) {
			cout << "printing float: " << f << endl;
		}
};

int main() {
	PrintData obj;
	obj.print(55.55);
	obj.print(5454);
	
	return 0;
}
