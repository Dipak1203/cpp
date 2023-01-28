#include<iostream>
using namespace std;
class Const{
	int a;
	public:
		void Const(int b){
			a=b;
		}
		void show(){
			cout<<"The value of a is "<<a<<endl;
		}
};
int main(){
	Const obj(5);
	onj.show();
	return 0;
}
