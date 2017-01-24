#include<iostream>
#include<list>
using namespace std;

void display(list<string> l) {
	list<string>::iterator it = l.begin();
	while(it != l.end()) {
		cout << *it << endl;
		++it;
	}
}

int main() {

	list<string> names;
	
	names.push_back("George");
	names.push_back("Mary");
	names.push_back("Maycon");
	
	display(names);
	
	cout << "first item: " << names.front() << endl;
	cout << "last item: " << names.back() << endl << endl;
 	
	 //reverse	
	names.reverse();
	display(names);
	cout << endl;
	
	//sort
	names.sort();
	display(names);	
	cout << endl;
	
	//push_front
	names.push_front("Carry");
	display(names);
	cout << endl;
	
	//size list
	cout << "size of list: " << names.size() << endl << endl;
	
	//remove
	names.remove("George");
	display(names);
	cout << endl;
	
	//pop_front/ pop_back
	names.pop_front();
	names.pop_back();
	display(names);
	cout << endl;
	
	//clear / empty
	names.clear();
	if(names.empty()) {
		cout << "list empty" << endl;
	}else {
		cout << "list not empty" << endl;
	}
	
	
	return 0;
}
