#include<iostream>
using namespace std;
// parameterize constructor is a contructor ma argument pathaunu nai parameterize contructor
class Cube{
	public:
		int side;
		Cube(int x){
			side=x;
			side=side*side*side;
		}
		void show(){
			cout<<"The value of side is "<<side<<endl;
		}
};
int main(){
	
	Cube c(5);
	c.side;
	c.show();
	return 0;
}
