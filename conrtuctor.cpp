#include<iostream>
using namespace std;
class Number{
    int data1;
    public:
    int sum;
    int data2;
    Number(int a)
    {
        data1=a;
        cout<<"Hello world "<<endl;
    }
    void setData(){
        sum=data1+data2;
    }
    void show(){
        cout<<"The sum is "<<sum;
    }
};
int  main(){
Number o;

    return 0;
}
