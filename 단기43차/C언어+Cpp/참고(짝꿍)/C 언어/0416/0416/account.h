//account.h

#include <iostream>
using namespace std;
#pragma once

class account
{
private:
	string name;	//이름
	int accid;		//계좌번호
	int balance;	//잔액
	string date;	//개설일("2019-04-17")

public:
	account(string _n, int _a, int _b, string d);
	account(string _n, int _a);
	~account();

public:
	string getname();
	int getaccid();
	int getbalance();
	string getdate();

public:
	bool inputmoney(int money);
	bool outputmoney(int money);
	void printline();
	void print();
};

