#include<iostream>
using namespace std;
int main() {
	
	int x, y, z;
	
	x = 10;
	y = 20;
	
	int k = y - 20;
	
	try{
		if(k == 0){
			
			throw(k);	
		}else{
			
			z = x / k;
			cout <<"O valor de z e: "<<z;
		}	
	}
	catch(int e){
		cout << "Valor de z ou e: " << e << endl;
		cout << "exception handled sucessfull.";
	}
	return 0;
}
