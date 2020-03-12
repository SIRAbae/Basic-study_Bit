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
	cout << balance << "\t";
	cout << date.c_str() << endl;


}


void account::print()
{
	cout << "ÀÌ ¸§ : " << name.c_str() << "\t";
	cout << "°èÁÂ¹øÈ£ : " << accid << "\t";
	cout << "ÀÜ ¾× : " << balance << "¿ø\t";
	cout << "" << date.c_str() << endl;
}
