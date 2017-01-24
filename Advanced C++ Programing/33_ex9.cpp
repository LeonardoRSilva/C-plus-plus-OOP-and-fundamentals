#include<iostream>
#include<list>
using namespace std;

void display(list<int> l) {
	list<int>::iterator it = l.begin();
	while(it != l.end()) {
		cout << *it << endl;
		++it;
	}
}

void insertMax(list<int> &l, int value) {
	l.sort();
	int max = l.back();
	if(value > max) {
		if(value > max) {
			l.push_back(value);
		}
	}
}

int main() {
	
	list<int> numbers;
	numbers.push_back(0);//solution problem max value
	int number;
	for(int i = 1;i <=10; i++) {
		cout << "Enter a number: ";
		cin >> number;
		insertMax(numbers, number);
	}
	display(numbers);
	return 0;
}
