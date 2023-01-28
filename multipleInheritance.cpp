#include<iostream>
using namespace std;
// multiple inheritance 
// multiple inheritance is a dherai bau bata auta xora
// a b c bata d banni inheritance ho
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
		int math;
		int science;
		void setData(int m1,int m2)
		{
			math=m1;
			science=m2;
			
		}
		
};
class Result: public Student,public Exam{
	public:
		void show(){
			get_roll_number();
			cout<<"Your math marks is "<<math<<endl;
			cout<<"Your science marks is "<<science<<endl;
			cout<<"Your total percentage is "<<(math+science)/2<<endl;
		}
};
int main(){
	system("Color 2");
	Result obj;
	obj.set_roll_number(9);
    obj.setData(90,94);
    obj.show();
	
	return 0;
}
