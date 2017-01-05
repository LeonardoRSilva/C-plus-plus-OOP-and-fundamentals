#include<iostream>
using namespace std;

class Box{
public:
	int length;
	int	breadth;
	int height;
};

int main(){
	int volume;
	Box box1;
	Box box2;
	
	box1.length = 1;
	box1.breadth = 2;
	box1.height = 3;
	
	box2.length = 2;
	box2.breadth = 3;
	box2.height = 4;
	
	volume = box1.length * box1.breadth * box1.height;	
	cout << volume << endl;
	
	volume = box2.length * box2.breadth * box2.height;
	cout << volume << endl;
	
	return 0;
}

