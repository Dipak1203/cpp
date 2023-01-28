#include<iostream>

using namespace std;
int sum(int,int);//function parameter
int main()
{
	int a,b;
	cout<<"Enter the number a and b "<<endl;
	cin>>a>>b;
	sum(a,b);//function call 
	return 0;
}
 
 int sum(int a,int b)//function definition 
 {
 	int add;
 	add=a+b;
 	cout<<"The sum is two number is "<<add;
 }
