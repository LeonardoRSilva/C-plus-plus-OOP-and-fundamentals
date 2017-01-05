#include<iostream>
using namespace std;

class Student{
	public:
		char name[20];
		int age;
		float percent;
		void enter(){
			cout << "Enter the name, age and percentage: \n";
			cin >> name >> age >> percent;
		}
		void display(){
			cout << "\nname\tage\tpercentage"; 
			cout << "\n" << name << "\t" << age << "\t" << percent << endl;
		}
};

int main(){
	
	class Student s;
	
	s.enter();
	s.display();
	
	return 0;
}
