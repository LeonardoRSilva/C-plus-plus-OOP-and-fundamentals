#include<iostream>
using namespace std;
int main(){
	
	char ch = 'A';
	
	try{
		
		if(ch == 'A'){
			
			throw(2);
			
		}else{
			
			throw('C');
		}
		
	}catch(int num){
		
		cout << "Caracter igual a A" << endl;
	}
	catch(char num){
		
		cout << "Diferente de A" << endl;
	}
	
	return 0;
}
