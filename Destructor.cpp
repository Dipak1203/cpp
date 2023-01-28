#include<iostream>
using namespace std;
/*
Destructor is a special class function which is destroys the object as soon as the scope
of object ends. 
The destructor is called automatically by the compiler when the object goes out of scope

*/
class Emp{
	int id;
	string name;
	float salary;
	public:
		Emp(){
			id=4;
			name="kcoder";
			salary=90000.0;
			
		}
		void showData(void){
			cout<<"Employee BioData is here "<<endl
			    <<"Id is :: "<<id<<endl
			    <<"Name is "<<name<<endl
			    <<"Salary is "<<salary<<endl;
		}
		~Emp(){
			cout<<"End of program "<<endl;
		}
};
int main(){
	
	Emp e;
	e.showData();
	return 0;
}
