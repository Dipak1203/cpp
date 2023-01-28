#include<iostream>
using namespace std;
int factorial(int);
int main(){
	int n,a;
	cout<<"Enter the number "<<endl;
	cin>>n;
	a=factorial(n);
	cout<<"The factorial number is "<<a<<endl;
	return 0;
}
int factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	else
	return (n*factorial(n-1));
}
