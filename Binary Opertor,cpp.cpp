#include<iostream>
using namespace std;
// Creating Binary Operator Overloading 
class Complex{
	
	float a;		// This is Real part
	float b;
	
	public:
		Complex(){	} 		 // Constructor 2
		Complex(float real,float imaginary){
			a = real;
			b = imaginary;
		}
		Complex operator+(Complex);
		void showData(void);
};
Complex Complex::operator+(Complex c){
	Complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return(temp);
}
void Complex::showData(void){
	cout<<"Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
}
int main(){
	
	Complex c1,c2,c3;
	c1=Complex(2.4,5.2);
	c1.showData();
	c2=Complex(3.3,8.3);
	c2.showData();
	c3=c1+c2;
	c3.showData();
	return 0;
}
