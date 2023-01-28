#include<iostream>
using namespace std;
class Number{
	int a;
	int b;
	public:
//		Number(int i,int j):a(i),b(i+j)
//        Number(int i,int j):a(i),b(2*j)
//		Number(int i,int j):a(i),b(a+j)
//		Number(int i,int j):b(j),a(i+b)--->Not working

		Number(int i,int j):a(i),b(j)
		{
			
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
		}
};
int main(){
	Number num(3,5);
	
	return 0;
}
