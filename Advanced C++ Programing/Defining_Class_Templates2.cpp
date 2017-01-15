#include<iostream>
#include<string>
using namespace std;


template <typename T>
class Stack {
	private:
		T datastore[100];
		int top;
	public:
		Stack() {
			top = -1;
		}
		T push(T num) {
			++top;
			datastore[top] = num;
		}
		
		T pop() {
			int val = datastore[top];
			--top;
			return val;
		}
		
		int peek() {
			return datastore[top];
		}
		
				
};

int main() {
	Stack<int> numbers;
	
	numbers.push(12);
	numbers.push(22);
	cout << numbers.peek() << endl;
	
	int value = numbers.pop();
	cout << numbers.peek() << endl;
	
	
	return 0;
	
}
