#include<iostream>

using namespace std;

int main()
{
    int a=0,b=1,c=0;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"\t"<<a;
		c=a+b;
		a=b;
		b=c;
	
		
	}	
	return 0;
}
