#include <iostream>
#include <set>

using namespace std;

void primeGen(int n) {
	set<int> primes;
	int count;
	for(int nums = 2; nums <= n; ++nums) {
		primes.insert(nums);
	}
	
	set<int>::iterator it;
	for(int mults = 2; mults*mults <= n; ++mults) {
		it = primes.find(mults);
		if(it != primes.end()) {
			for(int k = 2*mults; k<= n; k += mults) {
				it = primes.find(k);
				if(it != primes.end()) {
					primes.erase(*it);
				}
			}
		}
	}
	
	int cont = 1;
	for(set<int>::iterator it2 = primes.begin();
		it2 != primes.end(); ++it2) {
			cout << *it2 << " ";
			if(cont++ % 10 == 0) {
				cout << endl;
			}
		}
}

int main() {
	
	int n;
	cout << "Enter n: ";
	cin >> n;
	primeGen(n);
	
	return 0;
}
