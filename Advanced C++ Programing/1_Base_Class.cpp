#include<iostream>
#include<sstream>
using namespace std;

class Employee {
	private:
		string name;
		double pay;
	public:
		Employee() {
			name = "";
			pay = 0;
		}
		Employee(string empName, double payRate) {
			name = empName;
			pay = payRate;
		}
		string getName(){
			return name;
		}
		void setName(string empName){
			name = empName;
		}
		double getPay(){
			return pay;
		}
		void setPay(double payRate) {
			pay = payRate;
		}
		string toString() {
			stringstream stm;
			stm << name << ": " << pay;
			return stm.str();
			
			//return name + ": " pay;
		}
		
};

int main() {
	
	Employee obj1("Jame Smith", 36000);
	Employee obj2("Bill Brown", 32003);
	
	cout << obj1.toString() << endl;
	cout << obj2.toString() << endl;
	
	return 0;
}
