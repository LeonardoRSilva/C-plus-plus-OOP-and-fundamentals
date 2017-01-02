#include<iostream>
using namespace std;

void print_char(char ch){
	
	if(ch == 'A'){
		
		throw 'A';
	}else{
		
		cout<<"Caracter diferente de A" << endl;
	}
}

int main(){
	
	try{
		
		print_char('A');
			
	}catch(...){
		
		cout<<"Excecao tratada" << endl;
	}
	return 0;
}
