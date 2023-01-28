#include<iostream>
using namespace std;
// default contructor is a by defualt value assign huni lai nai default contructor
class Cube{
	public:
		int side;
		Cube(){
			side=3;
			side=side*side*side;
		}
		void show(){
			cout<<"The value of cube is "<<side<<endl;
		}
};
int main(){
	Cube c;
	c.side;
	c.show();
	
	return 0;
}
