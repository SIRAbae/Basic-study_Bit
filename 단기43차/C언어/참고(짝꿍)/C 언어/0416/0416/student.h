//student.h
#include <iostream>
using namespace std;
#pragma once

class student
{
private:
	int number;
	string name;
	string major;

public:
	student(int _number, string _name, string _major);
	~student();

public:
	int getnumber();
	string getname();
	string getmajor();
	void setmajor(string value);

public:
	void printline();
	void print();
};

