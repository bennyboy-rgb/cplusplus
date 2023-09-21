#include <iostream>
#include "cgpaCalculator.h"
using namespace std;

int main()
{
	int grades=0;
	double calculate = 0;
	double gpa;
	int no_of_courses;
	int course =1;

	cout << "How many courses do you offer : ";
	cin >> no_of_courses;
	int times = no_of_courses;

	while (no_of_courses != 0)
	{
		cout << "Enter grade for COURSE (" << course << ") :";
		cin >> grades;
		calculate = calculate + grades;
		course++;
		no_of_courses--;

	}
	double percentage = calculate / times;
	gpa = percentage / 9.5;
	cout <<"Your Percentage is " << percentage << '%' << endl;
	cout << "Your GPA is " << gpa <<" out of 10!!" << endl;
	system("pause");
}

