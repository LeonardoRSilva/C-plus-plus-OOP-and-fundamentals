#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string namePerson1, namePerson2;
	
	//solution name with space
	cout << "Enter your name and lastname: ";
	getline(cin, namePerson2);
	cout << "Your name is " << namePerson2 << endl;
	
	cout << "Enter your name and lastname: ";
	cin >> namePerson1; 
	cout << "Your name is " << namePerson1 << endl;
	
	
	//sigle caracter input
	char c;
	c = cin.get();
	do {
		cout.put(c);
		c = cin.get();
		
	}while(!cin.eof());
	
	
	
	return 0;
}
