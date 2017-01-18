#include<iostream>
using namespace std;

const int DivideByZero = 1;



int main() {
	
	try {
		int number1 = 12;
		int number2 = 0;
		
		if(number2 == 0) {
			throw DivideByZero;
		}else {
			cout << number1 / number2;
		}
			
	}catch (int e) {
		if (e == DivideByZero) {
			cout << "Can't divide by zero";
		}
	}
	

	
	
	
	return 0;
}
