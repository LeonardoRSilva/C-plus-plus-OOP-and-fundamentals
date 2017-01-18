#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
	
	ifstream foodFile;
	stringstream stm;
	int food;
	int total = 0;
	foodFile.open("c:\\data\\cs.txt");
	string line;
	
	getline(foodFile, line);
	stm << line;
	foodFile.close();
	for(int i = 0; i < 5; ++i) {
		stm >> food;
		total += food;
	}
	
	double average = total / 5;
	cout << "average: " << average << endl;
	
	return 0;
}
