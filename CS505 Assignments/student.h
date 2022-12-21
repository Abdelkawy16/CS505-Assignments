#pragma once
#include <string>

using namespace std;

class student
{
private: //data members
	int id;
	string name;
	float grade;
public: //functions
	student();
	student(float g);
	student(float g, int i);
	void set_id(int i);
	void set_name(string s);
	void set_grade(float g);
	int get_id();
	float get_grade();
	string get_name();
};

