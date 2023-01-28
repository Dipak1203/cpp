#include<iostream>
using namespace std;
class Base{
    public:
    void show(void){
        cout<<"This is parat class "<<endl;
    }
};
class Derived:public Base{
    public:
    void show(void){
        cout<<"This is child class "<<endl;
    }
};
int main(){
  Derived obj = Derived();
  obj.show();
    return 0;
}
