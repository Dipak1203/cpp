#include<iostream>
using namespace std;
class Complex{
	int data1;
	int data2;
	public:
		void setData(int a,int b){
			data1=a;
			data2=b;
		}
		void getData(void){
			cout<<"The value of data1 is "<<data1<<endl;
			cout<<"The value of data2 is "<<data2<<endl;
		}
		
};
int main(){
//	Complex *ptr=new Complex;
//	(*ptr).setData(4,5);
//	(*ptr).getData();

Complex *ptr=new Complex;
ptr->setData(2,1);
ptr->getData();
	
	return 0;
}
