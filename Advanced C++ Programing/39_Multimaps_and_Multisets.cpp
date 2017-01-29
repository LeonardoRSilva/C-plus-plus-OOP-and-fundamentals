#include<iostream>
#include<map>
#include<utility>
using namespace std;

int main() {
	
	multimap<string, string> numbers;
	numbers.insert(pair<string, string>("Jones", "123"));
	numbers.insert(pair<string, string>("Smith", "432"));
	numbers.insert(pair<string, string>("Ana", "222"));
	numbers.insert(pair<string, string>("Jones","333"));
	numbers.insert(pair<string, string>("Leonard", "223"));
	numbers.insert(pair<string, string>("Jones", "643"));
	string searchName = "Jones";
	
	multimap<string, string>::iterator it = 
		numbers.find(searchName);
		
	multimap<string, string>::iterator last = 
		numbers.upper_bound(searchName);
	
	for(;it != last; ++it){
		cout << it->first << ": " <<  it->second << endl;
	}
	
	return 0;
}
