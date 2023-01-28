#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cout<<"Enter the number a and b = ";
    cin>>a>>b;
    x = a - b;
    try{
        if(x != 0){
            cout<<"The value of a / x = "<<a/x<<endl;
        }else{
            throw(x);
        }
    }
    catch(int i){

        cout<<"The can't divided by Zero : "<<endl;
    }
    cout<<"End"<<endl;
    return 0;
}