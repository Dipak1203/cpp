#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	int t;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the value of index "<<endl;
		cin>>arr[i];
	}
	t=arr[i];
	for(i=0;i<5;i++)
	{
	   if(arr[i]>t)
	   {
	   	t=arr[i];
	   }
	}
	cout<<"The greetest number is "<<t;

	return 0;
}
