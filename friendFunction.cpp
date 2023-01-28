#include<iostream>
using namespace std;
/*
   Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, 
it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names 
and need object_name.member_name to access any member.

*/

class Complex{
	int a,b;
	public:
		friend Complex add (Complex o1,Complex o2);
		void setData(int n1,int n2){
			a=n1;
			b=n2;
		}
		void show(){
			cout<<"Your value is "<<a<<"+"<<b<<"i"<<endl;
		}
};
Complex add(Complex o1,Complex o2){
	Complex o3;
	o3.setData((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
int main(){
	
	Complex obj;
	Complex obj1,sum;
	obj.setData(3,4);
	obj.show();
	
	obj1.setData(9,6);
	obj1.show();
	
	sum=add(obj,obj1);
	sum.show();
	return 0;
}
