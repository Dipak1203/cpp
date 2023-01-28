#include<iostream>
using namespace std;
class Simple{
	public:
		int p,t,r;
		int si;
		void setData(){
			cout<<"Enter the principal time and rate "<<endl;
			cin>>p>>r>>t;
			si=(p*t*r)/100;
		}
		void show(){
			cout<<"Simple interest is "<<si;
		}
};
int main(){
	Simple s;
	s.setData();
	s.show();
	 return 0;
}
