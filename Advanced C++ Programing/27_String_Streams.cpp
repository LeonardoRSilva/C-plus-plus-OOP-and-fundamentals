#include<iostream>
#include<sstream>
using namespace std;

class Person {
	private: 
		string first, middle, last;
		int age;
	public:
		Person(string f, string m, string l, int a) {
			first = f;
			middle = m;
			last = l;
			age = a;	
		}
		string toString() {
			stringstream stm;
			stm << "Person:" << first << " " << middle << " "
				<< last << " " << age ;
			return	stm.str();
		
		}
		
};
int main() {
	
	Person p1("George", "Fred", "Jones", 27);
	cout << p1.toString();
	
	return 0;
}
