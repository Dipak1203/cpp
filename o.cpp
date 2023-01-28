#include<iostream>
using namespace std;
class Number{
	public:
		int data1;
		int data2;
		
		void setData(){
			data1=4;
			data2=5;
			
		}
		void getData(){
			cout<<"The sum is two number is "<<data1+data2;
			
		}
};
int main(){
	
	Number n;
	n.setData();
	n.getData();
	return 0;
}
