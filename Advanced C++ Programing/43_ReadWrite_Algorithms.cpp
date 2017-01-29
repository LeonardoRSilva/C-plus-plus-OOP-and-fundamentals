#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void display(vector<T> v) {
	for (int i = 0; i < v.size();++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> numbers;
	for(int i = 1; i <= 10; ++i) {
		numbers.push_back(i);
	}
	display(numbers);
	
	replace(numbers.begin(), numbers.end(), 5, 10);
	display(numbers);
	
	fill(numbers.begin(), numbers.end(), 0);
	display(numbers);
	
	vector<string> names;
	names.push_back("Smith");
	names.push_back("James");
	names.push_back("Ane");
	display(names);
	fill(names.begin(), names.end(),string(""));
	display(names);
	
	vector<string> texts;
	texts.push_back("Heloo");
	texts.push_back("Ane");
	display(texts);
	
	replace(texts.begin(), texts.end(), "Heloo", "Hello");// equals size
	display(texts);
	
	
	return 0;
}
