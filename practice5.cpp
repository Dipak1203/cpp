#include<iostream>
using namespace std;
class Base1{
	int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"The base1 constructor is called "<<endl;
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
			cout<<"The base2 construtor is called "<<endl;
		}
		void printData2(void){
			cout<<"The value of data2 is "<<data2<<endl;
		}
};
class Derived:public Base1,public Base2{
	int derived1,derived2;
	public:
		int total;
		
		Derived(int a,int b,int c,int d) : Base1(a),Base2(b){
			derived1=c;
			derived2=d;
			cout<<"The Derived constructor is invoked "<<endl;
		}
		void printDerived(void){
			
			printData1();
			printData2();
			cout<<"The value of derived1 is "<<derived1<<endl;
			cout<<"The value of derived2 is "<<derived2<<endl;
			cout<<"The sum of total number is "<<endl;
		}
};
int main(){
	system("Color 2");
	Derived dk(3,4,5,6);
	dk.printDerived();
	return 0;
}
