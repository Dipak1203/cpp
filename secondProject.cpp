#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	// decaration part 
	string full_name;
	int age,result;
	string favorite;
	string bestSong;
	string artist;
	float num1,num2;
	system("Color A");
	cout<<"\tWelcome My second project :) "<<endl<<endl<<endl<<endl;
	
	system("Coloe B");
	cout<<"Enter your full name "<<endl;
	cin>>full_name;
	
	cout<<"Enter your age "<<endl;
	cin>>age;
	result = 2021-age;
	system("Color C");
	if(result>16 && result<60){
		cout<<"Hello Mr "<<full_name<<" ! "<<"Your age is "<<age<<" . You are young person"<<endl;
	}
	else
	{
		cout<<"Hello Mr "<<full_name<<" ! "<<"Your age is "<<age<<" . You are Old person"<<endl;
	}
	
	
	return 0;
}
