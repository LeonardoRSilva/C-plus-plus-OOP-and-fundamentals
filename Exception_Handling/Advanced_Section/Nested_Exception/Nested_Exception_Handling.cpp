#include<iostream>
using namespace std;
int main(){
	
	int x = 0,y = 0;
	
	try{
		
		if(x == 0){
			
			try{
				
				if(y == 0){
					throw(y);
				}
				
			}catch(int e_y){
				
				cout << "y tradado = 0" << endl;
				
			}
			throw(x);
		}
		
	}cath(int e_x){
		
		cout << "x tratado = 0" << endl;
	}
	
	return 0;
}
