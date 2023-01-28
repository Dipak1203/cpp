#include<iostream>
using namespace std;
/*
Case1:
class B:public A{
     // The order of execution of constructor is A() and B()
}

Case2:
class C:public B,public A{
// The order of execution of constructor is B(),A() and C()
}
Case3:
class c :public B,virtual public A{
// The order of execution of constructor is A(),B() and C() 

*/


class Base1{
	int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"The Base1 contructor called "<<endl;
		}
		void printData1(void){
			cout<<"The value of data1 is "<<data1<<endl;
		}
};
class Base2{
	int data2;
	public:
		Base2(int i){
			data2=i;
			cout<<"The  Base2 constructor called "<<endl;
		}
		void printData2(void){
			cout<<"The value of data2 is "<<data2<<endl;
		}
};
class Derived:public Base1,public Base2{
	int data3,data4;
	public:
		Derived(int a,int b,int c,int d) : Base1(a),Base2(b){
			data3=c;
			data4=d;
			cout<<"The Derived constructor is called "<<endl;
		}
		void printData3(void){
			cout<<"The value of data3 is "<<data3<<endl;
			cout<<"The value of data4 is "<<data4<<endl;
		}
};
int main(){
	Derived dipak(4,5,6,7);
	dipak.printData1();
	dipak.printData2();
	dipak.printData3();
	return 0;
}
