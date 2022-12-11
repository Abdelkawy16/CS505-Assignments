#include <iostream>
#include <sstream>
#include "student.h"

float get_grade_avarage(student* students, int size)
{
	float total = 0;
	for (int i = 0; i < size; i++)
	{
		total += students[i].get_grade();
	}
	return total / size;
}

int main()
{
	int size, id;
	float grade;
	string name;
	cout << "enter size: ";
	cin >> size;
	student* s = new student[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Student " + to_string(i + 1) << endl;
		cout << "name: ";
		cin >> name;
		s[i].set_name(name);
		cout << "id: ";
		cin >> id;
		s[i].set_id(id);
		cout << "grade: ";
		cin >> grade;
		s[i].set_grade(grade);
	}
	cout << "Avrage Grade = " + to_string(get_grade_avarage(s, size));
	return 0;
}
