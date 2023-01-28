#include<iostream>
using namespace std;
class Sum{
	int data1;
	public:
		int data2;
		void setData1(int a){
			data1=a;
		}
		void setData2(){
			data2=5;
		}
		void show(){
			cout<<"The sum is "<<data1+data2;
		}
		};
int main(){
	
	Sum s;
	s.setData1(4);
	s.setData2();
	s.show();
	return 0;
}
