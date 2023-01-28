#include<iostream>
using namespace std;
// class is a user defined data type
class Hello{
	public://Public specificer aslai jun le poni use garna pauxan
	void greet(){// method or function in Hello class 
		cout<<"Hello world !!"<<endl;
	}
};
int main(){
	// jab samma object create hudaina taba sammaa  program start hudaina
	
	Hello h;// Hello class le h object banako
	h.greet();// object le method lai call gareko
	
	return 0;
}
