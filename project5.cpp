using namespace std;
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<fstream>

char un[30];
class Admin{
    char name[30];
    int totsub;
    char subject[10][10];// declare two dimention arrary
    char mobile[20],mail[30],fname[30];
    char password[14],rpassword[30];
    
    public:// public specifier 
    char rollno[15];
    // This function is used to get the student data entry from the Admin portal... 
    // all the records entries are made by this methods 
    void getstdata(){
        cout<<"\nEnter the student Name : "<<endl;
        gets(name);
        cout<<"Enter the student ID/Roll number : "<<endl;
        cin>>rollno;
        cout<<"Enter the student's father name :"<<endl;
        gets(fname);
        cout<<"Enter the your mobile number :"<<endl;
        gets(mobile);
        cout<<"Enter the your email address :"<<endl;
        gets(mail);
        cout<<"Enter the your total subject "<<endl;
        cin>>totsub;
        
        for(int i = 0; i<totsub; i++){
            cout<<"Enter the subject "<<i+1<<" Name : "<<endl;
            cin>>subject[i];

        }
        cout<<endl<<"Create your login password "<<endl;
        cin>>password;
        cout<<"Enter the Unique Keyword to recover password : "<<endl;
        cin>>rpassword;
        cout<<"Please note your username is ID/Roll no . "<<endl;

    }

// This function aunthenticates the login of both the student & faculties .
// with their reference to their unique ID / password login is provided 
 
    int login(){
        if ((strcmp( :: un,rollno)) ==0){
            
        }
    }
};

int main(){
	
}
