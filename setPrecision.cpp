#include<iostream>
#include<iomanip>
using namespace std;
/*
syntax
cout<<setprecision(number)<<variable
*/
int main(){
	
	float a=455.4534;
	int b=43898;
	cout<<setprecision(4)<<a<<endl;
	cout<<setprecision(3)<<b;//Not working
	
	return 0;
}
