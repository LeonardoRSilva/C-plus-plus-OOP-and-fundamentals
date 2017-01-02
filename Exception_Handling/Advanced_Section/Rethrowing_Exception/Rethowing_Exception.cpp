#include<iostream>
using namespace std;

void divisao(int a, int b){
	
	try{
		
		if(b == 0){
			
			throw(b);
		}else{
			cout << "The division is: " << a/b << endl;
		}
	}catch(int e_b){
		
		cout << "Nao e possivel dividir por 0" << endl;
		throw;
	}
}
int main(){
	
	try{
		
		divisao(20,0);
	}catch(int e){
		
		cout << "funcao tratada dentro da main: " << e << endl;
	}
	return 0;
}
