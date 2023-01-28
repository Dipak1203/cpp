#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
	int a,b;
	public:
		void setData(){
			cout<<"Enter the value of a "<<endl;
			cin>>a;
			cout<<"Enter the value of b "<<endl;
			cin>>b;
			
		}
		void performOperator(void){
			cout<<"The value of a + b is "<<a+b<<endl;
			cout<<"The value of a - b is "<<a-b<<endl;
			cout<<"The value of a * b is "<<a*b<<endl;
			cout<<"The value of a / b is "<<a/b<<endl;
		}
};

class ScientificCalculator{
	int a,b;
	public:
		void setDataScientific(){
			cout<<"Enter the value of a "<<endl;
			cin>>a;
			cout<<"Enter the value of b "<<endl;
			cin>>b;
			
		}
		void performOperatorScientific(void){
			cout<<"The value of cos(a) is "<<cos(a)<<endl;
			cout<<"The value of cos(b) is "<<cos(b)<<endl;
			cout<<"The value of sin(a) is "<<sin(a)<<endl;
			cout<<"The value of exp(b) is "<<exp(b)<<endl;
		}
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{
	
};
int main(){
	HybridCalculator calc;
	calc.setData();
	calc.performOperator();
	calc.setDataScientific();
	calc.performOperatorScientific();
	return 0;
}
