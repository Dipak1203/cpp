#include<iostream>
using namespace std;
// pointer
// A pointer is a address that store the one variable to another variable
// auta variable ko address ra value arko varible ma store garnu nai pointer ho
// it's symbol is & and *
int main()
{
	int a=10;
	int *b;
	b=&a;
	cout<<"The value of a is "<<a<<endl;
	cout<<"It show address of a "<<b<<endl;
	cout<<"The value of b is "<<*b;
	return 0;
}
