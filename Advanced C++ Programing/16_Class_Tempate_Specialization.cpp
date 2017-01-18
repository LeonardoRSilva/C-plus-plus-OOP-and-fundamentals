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

template<>
class Stack<string> {
	private:
		string datastore[100];
		int top;
	public:
		Stack() {
			top = -1;
		}
		void push(string val) {
			++top;
			datastore[top] = val;
		}
		
		string pop() {
			string val = datastore[top];
			datastore[top] = "";
			--top;
			return val;
		}
		
		string peek() {
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
	
	Stack<string> objs;
	
	objs.push("Joao");
	objs.push("Maria");
	cout << objs.peek() << endl;
	
	string valueStr = objs.pop();
	cout << objs.peek() << endl;
	
	
	return 0;
	
}
