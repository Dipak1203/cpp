#include<iostream>
using namespace std;
// recursion function vaneko function le aafai call garne lai vanxan
int factorial(int);// function parameter
int main()
{
	int n;
	int a;
	cout<<"Enter the number "<<endl;
	cin>>n;
	a=factorial(n);// call function
	cout<<"The factorial number is "<<a<<endl;
	return 0;
}
int factorial (int n)
{
	if(n!=0)
	{
		return 1;
	}
	else 
	return (n*factorial-1);
}
