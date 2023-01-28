#include<iostream>
using namespace std;
class Student{
	int roll_number;
	public:
		void set_roll_number(int r){
			roll_number=r;
		}
		void get_roll_number(){
			cout<<"Your roll number is "<<roll_number<<endl;
		}
};
class Exam{
	
	public:
		int math,digital;
		void setMarks(int m1,int m2){
			math=m1;
			digital=m2;
		}
};
class Result: public Student,public Exam{

	public:
		void show(){
			cout<<"The marks of math is "<<math<<endl;
			cout<<"The marks of digital is "<<digital<<endl;
			cout<<"Your total marks is "<<(math+digital)/2<<endl;
		}
};
int main(){
	Result obj;
	obj.set_roll_number(5);
	obj.get_roll_number();
	obj.setMarks(90,98);
	obj.show();
	return 0;
}
