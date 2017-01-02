#include<iostream>
using namespace std;
int main(){
	
	int x;
	cout << "Insira um valor:";
	cin >> x;
	
	try{
		
		if(x == 0){
			
			throw(x);
			
		}else{
			
			cout<<"O valor de x é:" << x << endl;
		}
		
		cout << "Teste de impressao." << endl;
		
		
	}catch(int e){
		
		cout<<"exception, valor igual a zero";
	}
	return 0;
}
