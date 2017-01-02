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
		
	}catch(...){
		
		cout << "Todas as execoes tratadas aqui";
	}
	

	
	return 0;
}
