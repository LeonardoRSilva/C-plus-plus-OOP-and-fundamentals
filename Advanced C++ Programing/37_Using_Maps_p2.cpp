#include<iostream>
#include<map>

using namespace std;

int main() {
	
	map<string, int> objs;
	objs["Jones"] = 78;
	objs["Smith"] = 83;
	objs["Green"] = 92;
	
	string name;
	cout << "Enter a name to find: ";
	cin >> name;
	
	if(objs.find(name) != objs.end()) {
		cout << name << ": " << objs[name] << endl;
	}else {
		cout << name << " not found." << endl;
	}
	
	double value = 0.0;
	int sum = 0;
	map<string, int>::iterator it = objs.begin();
	
	while(it != objs.end()) {
		cout << it->second << endl;
		sum += it->second;
		++it;
	}
	cout << endl;
	
	value = sum / objs.size();
	cout << "The value is: " << value << endl;
	return 0;
}
