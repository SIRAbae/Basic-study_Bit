//bank.cpp
#include <iostream>
using namespace std;
#include "account.h"
#include "wbarray.h"
#include "bank.h"



bank::bank()
{
	acclist = new wbarray;
}


bank::~bank()
{
	delete acclist;
}


void bank::makeaccount()		//insert
{
	try
	{
		//1. 필요한 정보를 입력 받는다.
		int accid, balance;
		char name[20], date[20];

		cout << "이름 : ";	cin >> name;
		cout << "계좌번호 : ";	cin >> accid;
		cout << "입금액 : ";	cin >> balance;
		cout << "개설일 : ";	cin >> date;

		//2. 저장 객체 생성한다.
		account *acc = new account(name, accid, balance, date);

		//3. wbarray에 저장 요청한다.
		acclist->push_back(acc);

		cout << "저장되었습니다." << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


void bank::printallaccount()
{
	//순회
	for (int i = 0; i < acclist->getsize(); i++)
	{
		account *acc = (account*)acclist->getdata(i);
		acc->printline();
	}
}


void bank::selectaccount()
{
	try
	{
		//1. 검색키 얻기
		char name[20];
		cout << "검색할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		account *acc = (account*)acclist->getdata(idx);
		acc->print();
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


void bank::addmoney()		//update
{
	try
	{
		//1. 검색키 얻기
		char name[20];
		cout << "검색할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		account *acc = (account*)acclist->getdata(idx);
		acc->print();

		int money;
		cout << "입금액 : ";		cin >> money;
		acc->inputmoney(money);
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


void bank::minmoney()		//update
{
	try
	{
		//1. 검색키 얻기
		char name[20];
		cout << "검색할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		account *acc = (account*)acclist->getdata(idx);
		acc->print();

		int money;
		cout << "출금액 : ";		cin >> money;
		acc->outputmoney(money);
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


void bank::deleteaccount()
{
	try
	{
		//1. 삭제키 얻기
		char name[20];
		cout << "삭제할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		acclist->erase(idx);

		cout << "삭제되었습니다." << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


int bank::nametoidx(string name)
{
	for (int i = 0; i < acclist->getsize(); i++)
	{
		account *acc = (account*)acclist->getdata(i);
		if (acc->getname() == name)
			return i;
	}
	throw "데이터가 존재하지 않습니다.";
}
