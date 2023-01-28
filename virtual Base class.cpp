#include <iostream>
using namespace std;
/*

Student-->Text
Student-->sport
Text-->Result
Sport-->Result

*/
class Student
{
protected:
	float  roll_number;

public:
	void set_roll_number(float  r)
	{
		roll_number = r;
	}
	void print_roll_number()
	{
		cout << "Your roll number is " << roll_number << endl;
	}
};
class Text : virtual public Student
{
protected:
	float maths;
	float physics;

public:
	void set_marks(float m1, float m2)
	{
		maths = m1;
		physics = m2;
	}
	void print_marks(void)
	{
		cout << "Your result is here " << endl
			 << "Maths :: " << maths << endl
			 << "Pysices :: " << physics << endl;
	}
};
class Sport : virtual public Student
{
protected:
	float score;

public:
	void set_score(float sc)
	{
		score = sc;
	}
	void print_score(void)
	{
		cout << "Your Pt is here " << score << endl;
	}
};
class Result : public Text, public Sport
{
private:
	float total;

public:
	void display(void)
	{
		total = maths + physics + score;
		print_roll_number();
		print_marks();
		print_score();
		cout << "Your total score is " << total << endl;
	}
};
int main()
{

	system("Color 2");

	Result dk;
	dk.set_roll_number(2129323);
	dk.set_marks(70, 60);
	dk.set_score(9);
	dk.display();
	return 0;
}
