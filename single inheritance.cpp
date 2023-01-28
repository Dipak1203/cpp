#include<iostream>
using namespace std;
// single inheritance is a a-->b it means single inheritance only
class Base{
	int data1;
	public:
		int data2;
		void setData();
		int getData1();
		int getData2();
};
void Base :: setData(){
	data1=5;
	data2=6;
}
int Base :: getData1(){
	return data1;
}
 Base :: getData2(){
	return data2;
}
class Derived : public Base{
	public:
		int data3;
		void process();
		void showData();
};
 void Derived :: process(){
	data3=data2+getData1();
}
void Derived :: showData(){
	cout<<"The value of data1 is "<<getData1()<<endl;
	cout<<"The value  of data2 is "<<data2<<endl;
	cout<<"The value of data3 is "<<data3;
}
int main(){
	Derived dd;
	dd.setData();
	dd.process(); 
	dd.showData();
	return 0;
}
