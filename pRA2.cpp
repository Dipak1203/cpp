#include<iostream>
using namespace std;
class test{
	static int count;
	int code;
	public:
		void setCode(int a){
			code = a;
			count++;
		}
		void showCode(void){
			cout<<"The number is "<<code<<endl;
		}
		static void showCount(void){
			cout<<"The object number is "<<count<<endl;
		}
		
};
int test::count;
int main(){
test t1,t2;
t1.setCode();
t2.setCode();

test::showCount();
test t3;
t3.setCode();

test::showCount();

t1.showCode();
t2.showCode();
t3.showCode();
    return 0;
}
