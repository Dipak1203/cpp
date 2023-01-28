#include<iostream>
using namespace std;
class Base1{
	public:
		void say(){
			cout<<"Hello world "<<endl;
		}
};
class Base2:public Base1{
	// if eni function navako vasi base 1 ko function inheritance huntheo
	public:
		void say(){
			Base2::say() ;
			cout<<"Hello DK Styles "<<endl;
		}
};
int main(){
	Base1 obj;
	Base2 obj1;
//	obj.say();
	obj1.say();
	return 0;
}
