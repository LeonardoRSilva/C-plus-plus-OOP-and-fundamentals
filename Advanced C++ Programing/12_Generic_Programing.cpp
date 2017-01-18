#include<iostream>
#include<string>
using namespace std;

void display(int arr[], int size) {
	for(int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void displayString(string arr[], int size) {
	for(int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	
	const int size = 10;
	int numbers[size];
	
	for(int i = 0; i < size; ++i){
		numbers[i] = i+1;
	}
	
	display(numbers, size);
	
	string names[] = {"Jim", "Fred", "Jane", "Bob", "Mary",
					"Mike", "Terry", "Allison", "Mason", "Ana"};
	
	displayString(names, size);
	
	return 0;
}
