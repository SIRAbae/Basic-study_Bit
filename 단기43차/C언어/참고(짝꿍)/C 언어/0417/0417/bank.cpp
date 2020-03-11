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
		//1. �ʿ��� ������ �Է� �޴´�.
		int accid, balance;
		char name[20], date[20];

		cout << "�̸� : ";	cin >> name;
		cout << "���¹�ȣ : ";	cin >> accid;
		cout << "�Աݾ� : ";	cin >> balance;
		cout << "������ : ";	cin >> date;

		//2. ���� ��ü �����Ѵ�.
		account *acc = new account(name, accid, balance, date);

		//3. wbarray�� ���� ��û�Ѵ�.
		acclist->push_back(acc);

		cout << "����Ǿ����ϴ�." << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}


void bank::printallaccount()
{
	//��ȸ
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
		//1. �˻�Ű ���
		char name[20];
		cout << "�˻��� �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
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
		//1. �˻�Ű ���
		char name[20];
		cout << "�˻��� �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
		account *acc = (account*)acclist->getdata(idx);
		acc->print();

		int money;
		cout << "�Աݾ� : ";		cin >> money;
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
		//1. �˻�Ű ���
		char name[20];
		cout << "�˻��� �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
		account *acc = (account*)acclist->getdata(idx);
		acc->print();

		int money;
		cout << "��ݾ� : ";		cin >> money;
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
		//1. ����Ű ���
		char name[20];
		cout << "������ �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
		acclist->erase(idx);

		cout << "�����Ǿ����ϴ�." << endl;
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
	throw "�����Ͱ� �������� �ʽ��ϴ�.";
}
