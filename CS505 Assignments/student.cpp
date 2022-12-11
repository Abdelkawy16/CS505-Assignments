#include "student.h"
student::student() {
	grade = 10;
}
student::student(float g)
{
	grade = g;
}
student::student(float g, int i)
{
	grade = g;
	id = i;
}
void student::set_id(int i) {
	id = i;
}
void student::set_name(string s) {
	name = s;
}
void student::set_grade(float g) {
	grade = g;
}
int student::get_id() {
	return id;
}
float student::get_grade() {
	return grade;
}
string student::get_name() {
	return name;
}