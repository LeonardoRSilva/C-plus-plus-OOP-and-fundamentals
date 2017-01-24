#include<iostream>
#include<set>
using namespace std;

int main() {
	
	set<string> texts;
	string text = "";
	
	do {
		cout << "Enter a text (quit to quit): ";
		cin >> text;
		texts.insert(text);	
	}while(text != "quit");
	
	set<string>::iterator it = texts.begin();
	while(it != texts.end()) {
		cout << *it << " ";
		++it;
	}
	
	return 0;
}
