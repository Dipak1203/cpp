#include<iostream>
using namespace std;
class Text{
int code;
static int count;
public:
void setCode(void){
    code = ++count;
}
void showCode(void){
    cout<<"Object number : "<<code<<endl;
}
static void showCount(void){
    cout<<"Count = "<<count<<endl;
}
};
int Text :: count;
int main(){
Text t1,t2;
t1.setCode();
t2.setCode();
Text :: showCount();
Text t3;
t3.setCode();
Text :: showCount();
t1.showCode();
t2.showCode();
t3.showCode();
    return 0;
}
