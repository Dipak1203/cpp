#include<iostream>
using namespace std;

int main()
{ 
int arr[5],sum;
int count;
int i;
for(i=0;i<5;i++)
{	
cout<<"Enter the number "<<endl;
cin>>arr[i];
}
for(i=0;i<5;i++){
	if(arr[i]>10000 && arr[i]<30000)
	{
		count++;
	}
}
cout<<"salary man is "<<count;
return 0;	
}
