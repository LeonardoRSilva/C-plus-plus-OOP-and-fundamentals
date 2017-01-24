#include<iostream>
#include<map>
using namespace std;

int main() {
	
	map<string, string> numbers;
	numbers["Jones"] = "364";
	numbers["Smith"] = "465";
	numbers["Brown"] = "222";
	
	cout << "Jones: " << numbers["Jones"] << endl;
	cout << "Numbers of numbers: " << numbers.size() << endl;
	
	numbers.erase("Smith");
	cout << "number of numbers: " << numbers.size() << endl;
	
	return 0;
}
