#include<iostream>
#include<deque>
using namespace std;

int find(deque<string> d, string value) {
	for(int i = 0; i < d.size(); ++i) {
		if(d.at(i) == value) {
			return i;
		}
	}
	
	return -1;
}

void display(deque<string>::iterator it, deque<string> l){
	for(it = l.begin(); it < l.end(); ++it) {
		cout << *it << endl;
	}
	cout << endl;
}

int main() {
	
	deque<string> line;
	line.push_back("Carlos");
	line.push_back("Joao");
	line.push_back("Maria");
	line.push_back("Pedro");
	line.push_back("Ana");
	
	string name;
	cout << "Name to find: ";
	cin >> name;
	int pos = find(line, name);
	
	if(pos > -1) {
		cout << name << " found at position " << pos << endl;
	}else {
		cout << name << "not found." << endl;
	}
	
	deque<string>::iterator it= line.begin();
	++it;
	line.insert(it,"Mara");
	display(it,line);
	
	return 0;
}
