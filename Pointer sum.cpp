#include<iostream>

using namespace std;
int main()
{
	int a,b,c;
	int *p,*q,*r;
	cout<<"Enter the three number "<<endl;
	cin>>a>>b>>c;
	p=&a;
	q=&b;
	r=&c;
	int sum=*p+*q+*r;
	
	cout<<"The sum is three number is "<<sum;
	
	return 0;
}
