#include<iostream>
#include<string>
using namespace std;

template <typename T>
bool equals(T value1, T value2) {
	if( value1 == value2) {
		return true;
	}else {
		return false;
	}
	
}

int main() {
	int a, b;
	a = 1, b = 2;
	
	if(equals(a,b)) {
		cout << a << " and " << b << " are equal." << endl; 
	}else {
		cout << a << " and " << b << " are not equal." << endl;
	}
	
	string text1, text2;
	text1 = text2 = "hello";
	
	if(equals(text1,text2)) {
		cout << text1 << " and " << text2 << " are equal." << endl; 
	}else {
		cout << text1 << " and " << text2 << " are not equal." << endl;
	}
	
	return 0;
}
