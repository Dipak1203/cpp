#include<iostream>
using namespace std;
// default argument in function
// jaha jaha default value hunxa teha value lai define garni lai default argument vanxa
int func(int a=0,int b=4,int c=0,int d=0)
{
	return (a+b+c+d);
}
int main()
{
	cout<<"The default value is "<<func(4,6)<<endl;
	cout<<"The default value is "<<func(6,8,8);
	
	return 0;
}
