#include <iostream>
#include <string>
using namespace std;

int main()
{

	char grade = ' ';
	string result;

	cout << "Enter your letter grade so we can judge you: ";
	cin >> grade;

	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		result = "Excellent";
		break;
	case 'B':
		result = "Try harder";
		break;
	case 'C':
		result = "You're a failure in my eyes";
		break;
	case 'D':
	case 'F':
		result = "Are you a commie or something?";
	}
}