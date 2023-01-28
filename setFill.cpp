#include<iostream>
#include<iomanip>// input out manipulation
using namespace std;
/*
syntax
cout<<setfill('character')<<variable
*/

int main(){
	
	int a=3;
	cout<<setw(9);
	cout<<setfill('*')<<a<<endl;
	return 0;
}
