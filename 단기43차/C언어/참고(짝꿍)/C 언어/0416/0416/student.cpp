//student.cpp

#include <iostream>
using namespace std;

#include "student.h"

student::student(int _number, string _name, string _major)
{
	number = _number;
	name = _name;
	major = _major;
}


student::~student()
{
}


int student::getnumber()
{
	return number;
}


string student::getname()
{
	return name;
}


string student::getmajor()
{
	return major;
}


void student::setmajor(string value)
{
	major = value;
}


void student::printline()
{
	cout << number << "\t";
	cout << name.c_str() << "\t";
	cout << major.c_str() << endl;
}


void student::print()
{
	cout << "�й� : " << number << endl;
	cout << "�̸� : " << name.c_str() << endl;
	cout << "�а� : " << major.c_str() << endl;
}
