#include<isotream>
using namespace std:
class Base1{
	public:
		void show(){
			cout<<"I am a base1 class "<<endl;
		}
};
class Base2{
	public:
		void show(){
			cout<<"I am a base2 class "<<endl;
		}
};
class Derived: public Base1,public Base2{
	public:
		void show(){
			Base2::show();
		}
		
};
int main(){
	
	Derived dr;
	dr:show();
	return 0;
}
