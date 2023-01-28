#include<iostream>
using namespace std;
 /* inline function eefmy name is dipak kumal.
  An inline function is a function that is expanding that line is when it is invoked .
 An inline function can increase the function size so much that may not fit in chache.
 syntax of inline function 
 function{
inline function_name
}
*/
inline int mul(int a,int b)
{
	return a*b;
}
inline float div(double m,double n)
{
	return float (m/n);
}
int main(){
  int a=20;
  int b=50;
  cout<<"The multipletion of two number is "<<mul(a,b)<<endl;
  cout<<"The divide is two number is "<<div(50.9,6.9);
	return 0;
}
