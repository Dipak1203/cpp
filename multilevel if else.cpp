#include<iostream>
using namespace std;

int main(){
int a;
int b;
cout<<"Enter the value of a and b "<<endl;
cin>>a>>b;
if(a==b)
{
	cout<<"The value of a and b is equal "<<endl;
}
else if (a>b)
{
	cout<<"The value of a is greeter "<<endl;
}
else
{
	cout<<"The value of b is greater then a "<<endl;
}
	return 0;
}
