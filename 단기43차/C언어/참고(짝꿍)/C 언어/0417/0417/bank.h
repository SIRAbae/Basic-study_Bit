//bank.h
#include <iostream>
using namespace std;
#pragma once

#include "wbarray.h"

class bank
{
private:
	wbarray * acclist;

public:
	bank();
	~bank();

public:
	void makeaccount();
	void printallaccount();
	void selectaccount();
	void addmoney();
	void minmoney();
	void deleteaccount();
	
private:
	int nametoidx(string name);

};

