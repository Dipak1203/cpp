#include<iostream>

using namespace std;

int main()
{
     /*  An arrary is a collection of data in same data type 
	 an arrary jasko data type same xa teslai arrary used garxan 
	 syntax of arrary
	arr[size];
	 
	 */
	 
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the value of arrary "<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
		cout<<"Index is "<<arr[i]<<endl;
		cout<<"the sum is "<<sum;
	}
	
	return 0;
}
