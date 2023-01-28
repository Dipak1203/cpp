#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int *p;
	int *q;
	int *r;
	
	cout<<"Enter the value of a b and c "<<endl;
	cin>>a>>b>>c;
	
	p=&a;
	q=&b;
	r=&c;
	
	if (*p>*q && *q>*r)
	
	return 0;
}
