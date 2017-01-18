#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class List {
	private:
		vector<T> datastore;
	public:
		List() { }
		
		void add(T item) {
			datastore.push_back(item);
		}
		void display() {
			for ( int i = 0; i < datastore.size(); ++i) {
				cout << datastore[i] << endl;
			}
		}
};

int main() {
	
	List<string> foods;
	foods.add("milk");
	foods.add("eggs");
	foods.add("bread");
	foods.display();
	
	List<int> numbers;
	numbers.add(45);
	numbers.add(23);
	numbers.add(32);
	numbers.display();
	
	return 0;
}
