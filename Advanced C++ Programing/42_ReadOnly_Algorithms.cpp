#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
	
	vector<int> numbers;
	for(int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}	
	
	int sum = 0;
	for(int i = 0; i < numbers.size(); ++i) {
		sum += numbers[i];
	}
	cout << "The summ is: " << sum << endl;
	
	int sum1 = accumulate(numbers.begin(), numbers.end(), 0);
	cout << "The sum is: " << sum << endl;
	
	vector<string> texts;
	texts.push_back("a");
	texts.push_back("man");
	texts.push_back("a");
	texts.push_back("plan");
	texts.push_back("a");
	texts.push_back("panama");
	
	string palindrome = accumulate(texts.begin(), texts.end(), string(""));
	cout << palindrome <<  endl;
	return 0;
}
