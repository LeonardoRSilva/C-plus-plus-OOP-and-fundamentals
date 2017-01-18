#include<iostream>
#include<stdexcept>
using namespace std;

class DivideByZero: public runtime_error {
	public:
		DivideByZero() : runtime_error("Divide by zero exception"){}
		
};

double quotient(double numerator, double denominator){
	if(denominator == 0) {
		throw DivideByZero();
	}else {
		return numerator / denominator;
	}
}

int main() {
	double number1, number2, number3;
	
	cout << "Enter a numerator: ";
	cin >> number1;
	
	cout << "Enter a denominator: ";
	cin >> number2;
	
	try {
		number3 = quotient(number1, number2);
		cout << "Result is: " << number3 << endl;
		
	}catch (DivideByZero &except) {
		cout << except.what() << endl;
	}
	
	
	return 0;
}
