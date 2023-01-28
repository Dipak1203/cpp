#include<iostream>
using namespace std;
int simple (int p,int t,int r)
{
	int si;
	si=(p*t*r)/100;
	
	return si;
}
int main()
{	cout<<"The simple interest is "<<simple(40000,5,4);
	return 0;
}
