#include<iostream>
using namespace std;
class Sum{
	public:
		int a,b;
		int sum; 
		void setData(){
			a=5;
			b=3;
			sum=a+b;
		}
		
		void show(){
			cout<<"The sum is "<<sum;
		}
};
int main(){
	Sum s;
	s.setData();
	s.show();
	return 0;
}
