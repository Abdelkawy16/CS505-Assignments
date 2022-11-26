#include <iostream>
#include <sstream>

using namespace std;
class student
{
private: //data members
	int id;
	string name;
	float grade;
public: //functions
	student() {
		grade = 10;
	}
	student(float g)
	{
		grade = g;
	}
	student(float g, int i)
	{
		grade = g;
		id = i;
	}
	void set_id(int i) {
		id = i;
	}
	void set_name(string s) {
		name = s;
	}
	void set_grade(float g) {
		grade = g;
	}
	int get_id() {
		return id;
	}
	float get_grade() {
		return grade;
	}
	string get_name() {
		return name;
	}
};

float get_grade_avarage(student* students, int size);
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

float get_grade_avarage(student* students, int size)
{
	float total = 0;
	for (int i = 0; i < size; i++)
	{
		total += students[i].get_grade();
	}
	return total / size;
}