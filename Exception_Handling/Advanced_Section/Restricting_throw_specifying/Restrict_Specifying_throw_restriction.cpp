#include<iostream>
using namspace std;

void func(int num) throw(int, double){
	
	if(num == 1){
		
		throw(20);
	}else if(num == 2){
		
		throw(23.12);
	}	
}

int main(){
	
	try{
		func(1);
		func(2);
		func(3);//sem tratamento para caracter
		
	}catch(int e_int){
		
		cout << "Valor inteiro lancado" << endl;
	}catch(double e_double){
		
		cout << "Valor double lancado" << endl;
	}
	
	return 0;
}
