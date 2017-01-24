#include <iostream>
#include<deque>
using namespace std;

void display(deque<string> l) {
	for(int i = 0; i < l.size(); i++) {
		cout << l[i] << endl;
	}
	cout << endl;
}

int main() {
	
	deque<string> line;
	line.push_back("Customer 1");
	line.push_front("Customer 2");
	line.push_back("Customer 3");
	
	display(line);
	
	
	line.pop_back();
	line.pop_front();
	
	display(line);
	
	cout << "size of lines: " << line.size() << endl;
	
	
	
	return 0;
}
