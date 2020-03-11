//control.h
#include <iostream>
using namespace std;
#pragma once

#include "wbarray.h"

class control
{
private:
	wbarray * stulist;

public:
	control(int max);
	~control();

public:
	void insertstudent();
	void printallstudent();
	void selectstudent();
	void updatestudent();
	void deletestudent();

private:
	int nametoidx(string name);
};
                                   
