//account.cpp
#include "account.h"



account::account(string _n, int _a, int _b, string d)
{
	name = _n;
	accid = _a;
	balance = _b;
	date = d;
}

account::account(string _n, int _a)
{
	name = _n;
	accid = _a;
	balance = 0;
	date = "2019-04-17";
}


account::~account()
{
}

string account::getname()
{
	return name;
}


int account::getaccid()
{
	return accid;
}


int account::getbalance()
{

	return balance;
}

string account::getdate()
{
	return date;
}



bool account::inputmoney(int money)
{
	if (money <= 0)
		return false;

	balance += money;
	return true;
}


bool account::outputmoney(int money)
{
	if (money <= 0 || money > balance)
		return false;

	balance -= money;
	return true;
}


void account::printline()
{
	cout << name.c_str() << "\t";
	cout << accid << "\t";
	cout << balance << "원\t";
	cout << date.c_str() << endl;


}


void account::print()
{
	cout << "이름 : " << name.c_str() << "\t";
	cout << "계좌번호 : " << accid << "\t";
	cout << "잔액 : " << balance << "원\t";
	cout << "개설일" << date.c_str() << endl;
}
