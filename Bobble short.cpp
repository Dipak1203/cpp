#include<iostream>
using namespace std;

int main()
{
	int temp,i,j,arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number"<<endl;
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
	for(j=0;j<i;j++)
	{
	    if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}	
	}
	}
	cout<<"Ascceding order is "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<arr[i];
	}
	return 0;
}
