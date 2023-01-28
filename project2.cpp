#include<iostream>
using namespace std;
class Class9{
	string name[4];
	int roll_number[4];
	float marks[4];
	public:
		int i;
		void setData1(){
			for(int i=0;i<4;i++){
				cout<<"Enter the student name "<<endl;
				cin>>name[i];
			}
			for(int i=0;i<4;i++){
				cout<<"Enter the student roll_number "<<endl;
				cin>>roll_number[i];
			}
			for(int i=0;i<4;i++){
				cout<<"Enter the student marks "<<endl;
				cin>>marks[i];
			}
			
		}
		void showData1(void){
			cout<<"Student Data is here "<<endl;
			for(i=0;i<4;i++){
			cout<<"Name is :: "<<name[i]<<endl;
			cout<<"Roll number is "<<roll_number[i]<<endl;
			cout<<"Marks is "<<marks[i]<<endl<<endl;
			}
			
		}
	
};

class Class10{
	string name[2];
	int roll_number[2];
	float marks[2];
	public:
		int i;
		void setData2(){
			for(int i=0;i<2;i++){
				cout<<"Enter the student name "<<endl;
				cin>>name[i];
			}
			for(int i=0;i<2;i++){
				cout<<"Enter the student roll_number "<<endl;
				cin>>roll_number[i];
			}
			for(int i=0;i<2;i++){
				cout<<"Enter the student marks "<<endl;
				cin>>marks[i];
			}
			
		}
		void showData2(void){
			cout<<"Student Data is here "<<endl;
			for(i=0;i<2;i++){
			cout<<"Name is :: "<<name[i]<<endl;
			cout<<"Roll number is "<<roll_number[i]<<endl;
			cout<<"Marks is "<<marks[i]<<endl<<endl;
			}
			
		}
	
};


class Class11{
	string name[3];
	int roll_number[3];
	float marks[3];
	public:
		int i;
		void setData3(){
			for(int i=0;i<3;i++){
				cout<<"Enter the student name "<<endl;
				cin>>name[i];
			}
			for(int i=0;i<3;i++){
				cout<<"Enter the student roll_number "<<endl;
				cin>>roll_number[i];
			}
			for(int i=0;i<3;i++){
				cout<<"Enter the student marks "<<endl;
				cin>>marks[i];
			}
			
		}
		void showData3(void){
			cout<<"Student Data is here "<<endl;
			for(i=0;i<3;i++){
			cout<<"Name is :: "<<name[i]<<endl;
			cout<<"Roll number is "<<roll_number[i]<<endl;
			cout<<"Marks is "<<marks[i]<<endl<<endl;
			}
			
		}
	
};


class Class12{
	string name[5];
	int roll_number[5];
	float marks[5];
	public:
		int i;
		void setData5(){
			for(int i=0;i<5;i++){
				cout<<"Enter the student name "<<endl;
				cin>>name[i];
			}
			for(int i=0;i<5;i++){
				cout<<"Enter the student roll_number "<<endl;
				cin>>roll_number[i];
			}
			for(int i=0;i<5;i++){
				cout<<"Enter the student marks "<<endl;
				cin>>marks[i];
			}
			
		}
		void showData5(void){
			cout<<"Student Data is here "<<endl;
			for(i=0;i<5;i++){
			cout<<"Name is :: "<<name[i]<<endl;
			cout<<"Roll number is "<<roll_number[i]<<endl;
			cout<<"Marks is "<<marks[i]<<endl<<endl;
			}
			
		}
	
};

int main(){
	system("Color 2");
	string name,grade;
	string password,pass;
	Class9 nine;
	Class10 ten;
	Class11 eleven;
	Class12 twovel;
cout<<"Enter the set your name please "<<endl;
cin>>name;
cout<<"Enter the set password "<<endl;
cin>>password;
cout<<"Congrats your name and password is set "<<name<<endl<<endl;

cout<<"Which class do you want to setData "<<endl;
cin>>grade;
if(grade=="class9"){
	cout<<"Enter your password "<<endl;
	cin>>pass;
	if(pass==password){
	nine.setData1();
	nine.showData1();	
	}
	else{
		cout<<"Oops your password is wrong "<<endl<<endl;
		cout<<"Enter the password again "<<endl;
		cin>>pass;
		if(pass==password){
	      nine.setData1();
		  nine.showData1();	
		}
	}
	
}
    
	else if (grade=="class10"  || grade=="10" || grade=="class 10"){
		cout<<"enter your password "<<endl;
		cin>>pass;
		if(pass==password){
			ten.setData2();
	        ten.showData2();
		}
	}
	else if (grade=="class11"){
	eleven.setData3();
	eleven.showData3();
	}

else if (grade=="class12"){
	twovel.setData5();
	twovel.showData5();	
}


	return 0;
}
