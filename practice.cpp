#include<iostream>
using namespace std;
class Complex {
	int a, b;
	public:
		void setData(int n1,int n2){
			a=n1;
			b=n2;
		}
		void showData(){
			cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
		friend Complex add(Complex o1,Complex o2);
};
Complex add(Complex o1,Complex o2){
	Complex o3;
	o3.setData((o1.a+o2.a),(o1.b+o2.b));
	
	return o3;
}
int main()
{
	Complex obj1,obj2,sum;
	
	obj1.setData(5,9);
	obj1.showData();
	
	obj2.setData(7,8);
	obj2.showData();
	
	sum=add(obj1,obj2);
	
	sum.showData();
	return 0;
}
