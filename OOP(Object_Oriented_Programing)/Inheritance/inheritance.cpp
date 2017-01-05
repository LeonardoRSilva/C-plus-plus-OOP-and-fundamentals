#include<iostream>
using namespace std;

//Base Class
class Shape{

	public:
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
	protected:
		int width;
		int height;	
};

//Derived class
class Retangle: public Shape{
	
	public:
		int getArea(){
			
			return (width * height);
		}
};

int main(void){
	
	Retangle rect;
	
	rect.setWidth(5);
	rect.setHeight(7);
	
	//print the area of the object.
	cout << "Total area: " << rect.getArea() << endl; 
	
	return 0;
}









