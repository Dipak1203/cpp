#include<iostream>
using namespace std;

int main()
{
	int n,r,s=0;
	cout<<"Enter the number "<<endl;
	cin>>n;
	
	// condition 
	while(n>0)
	{
		r=n%10;
		s=s*r+10;
		n=int (n/10);
	}
	cout<<"Reverse number is "<<s;
	return 0;
}
