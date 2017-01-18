#include<iostream>
using namespace std;

class Stack {
	private:
		int datastore[100];
		int top;
	public:
		Stack() {
			top = -1;
		}
		void push(int num) {
			++top;
			datastore[top] = num;
		}
		
		int pop() {
			int val = datastore[top];
			--top;
			return val;
		}
		
		int peek() {
			return datastore[top];
		}
		
				
};

int main() {
	Stack numbers;
	
	numbers.push(12);
	numbers.push(22);
	cout << numbers.peek() << endl;
	
	int value = numbers.pop();
	cout << numbers.peek() << endl;
	
	return 0;
	
}
