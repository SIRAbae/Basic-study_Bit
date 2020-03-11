//app.cpp
#include <iostream>
using namespace std;
#include <conio.h>
#include "wbarray.h"
#include "bank.h"
#include "app.h"



app::app()
{
	bank1 = new bank;
}


app::~app()
{
	delete bank1;
}


void app::init()
{
	logo();
}


void app::run()
{
	while (true)
	{
		system("cls");
		bank1->printallaccount();
		menuprint();
		switch (_getch())
		{
		case '1': bank1->makeaccount(); break;
		case '2': bank1->selectaccount(); break;
		case '3': bank1->addmoney(); break;
		case '4': bank1->minmoney(); break;
		case '5': bank1->deleteaccount(); break;
		case '6': return;
		}
		system("pause");
	}
}


void app::exit()
{
	ending();
}


void app::logo()
{
	system("cls");

	cout << "===================================================================" << endl;
	cout << "�ܱ� 43�� c++��� ����" << endl;
	cout << "���°������α׷�" << endl;
	cout << "2019.04.17" << endl;
	cout << "�ڳ���" << endl;
	cout << "===================================================================" << endl;
	
	system("pause");
}


void app::ending()
{
	system("cls");

	cout << "===================================================================" << endl;
	cout << "���α׷��� �����մϴ�." << endl;
	cout << "===================================================================" << endl;
}


void app::menuprint()
{
	cout << "===================================================================" << endl;
	cout << "[1]���°���" << endl;
	cout << "[2]���°˻�" << endl;
	cout << "[3]�����Ա�" << endl;
	cout << "[4]�������" << endl;
	cout << "[5]���»���" << endl;
	cout << "[6]���α׷�����" << endl;
	cout << "===================================================================" << endl;

}
