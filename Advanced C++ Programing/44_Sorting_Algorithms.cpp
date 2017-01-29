#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template <typename T>
void display(vector<T> v) {
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	
	const int sizeNumbers = 10;
	int numbers[] = {10,1,9,2,8,3,5,4,6,7};
	vector<int> nums(numbers, numbers + sizeNumbers);
	display(nums);
	
	sort(nums.begin(), nums.end());
	display(nums);
	
	const int size = 16;
	string texts[] = {"now","is","the","time","for","all",
					"good","people","to","come","to",
					"the","aid","of","their","party"};
	
	vector<string> sentence(texts, texts + size);
	display(sentence);
	
	sort(sentence.begin(), sentence.end());
	display(sentence);
	
	
	
	return 0;
}
