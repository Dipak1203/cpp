#include<iostream>

using namespace std;

int main()
{
	int m=1;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		m=m*i;
	}
	cout<<"The factorial number is "<<m<<endl;
	return 0;
}
