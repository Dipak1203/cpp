#include<iostream>
using namespace std;

int main(){
    time_t now=time(0);//current data or time based current system
    char*dt=ctime(&now);// convert now to string form
    cout<<"The current time is "<<dt<<endl;
    
	return 0;
}
