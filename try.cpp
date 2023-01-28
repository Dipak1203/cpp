#include<iostream>
using namespace std;
class Base{
	public:// access specifier
		int data1;
		int data2;
		void setData(void){// method 
			data1=5;
			data2=data1;
		}
		void process(){
			data1=data1*data2;
		}
		void show(void)
		{
			cout<<"The value of data1 is "<<data1<<endl;
			cout<<"The value of data2 is "<<data2<<endl;
		}
};
int main(){
	Base d;// creating object with the help of Base class 
	d.setData();// d object call setData method
	d.process();
	d.show();
	return 0;
}
