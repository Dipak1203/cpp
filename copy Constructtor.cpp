#include<iostream>
using namespace std;
// copy contructor is a auta contructor ma vayako data lai copy huni nai copy contructor ho

class Student{
	int roll;
	string name;
	float marks;
	public:
		Student(int r,string n,float m){
			roll=r;
			name=n;
			marks=m;
		}
		// creating copy constructor
		Student(Student &s){
			roll=s.roll;
			name=s.name;
			marks=s.marks;
		}
		void show(){
			cout<<"id is "<<roll<<endl;
			cout<<"name is "<<name<<endl;
			cout<<"marks is "<<marks<<endl;
		}
}; 
int main(){
	
	Student s1(5,"Dkstyles",99);
	Student s2(s1);//copied 
     cout<<"This is pure contructor "<<endl;
     
	 s1.show();
	 
	 cout<<"\n--------This is copy constructor "<<endl;
	 s2.show();
	 	
	return 0;
}
