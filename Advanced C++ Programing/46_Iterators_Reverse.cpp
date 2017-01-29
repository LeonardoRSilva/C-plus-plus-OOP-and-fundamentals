#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> numbers;
	for(int i = 1; i <= 10; ++i) {
		numbers.push_back(i);
		
	}
	
	for(vector<int>::iterator it = numbers.begin(); 
		it != numbers.end(); ++it) {
		cout << *it << " ";		
	}
	cout << endl;
	for(vector<int>::reverse_iterator rit = numbers.rbegin();
		rit != numbers.rend(); ++rit) {
			cout << *rit << " ";
	}
	
	
	return 0;
}
