#include<iostream>
using namespace std;
int main(){
	
	int x;
	cout<<"Insira um valor: ";
	cin>>x;
	
	try{
		
		if(x == 1){
			
			throw(23);
		}else if(x == 2){
			
			throw('B');
		}else if(x == 3){
			
			throw(123.32f);
		}else{
			
			throw(123.32);
		}
		
	}catch(int e){
		
		cout << "Valor inteiro";
	}
	catch(char e){
		cout << "Caracter";
	}
	catch(float e){
		cout << "Valor float";
	}
	catch(double e){
		cout << "Valor double";
	}

	
	return 0;
}
