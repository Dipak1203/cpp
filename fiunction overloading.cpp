#include<iostream>
using namespace std;
// function overloading 
// function is a same function name but parameter is a different is called function overloading

int sum(int a,int b)
{
	return a+b;
} 
float sum(double a,double b)
{
	return float (a+b);
}

int main()
{
	cout<<"This is a integer value "<<sum(5,6)<<endl;
	cout<<"This is a floating value "<<sum(5.7,5.7);
	return 0;
}
