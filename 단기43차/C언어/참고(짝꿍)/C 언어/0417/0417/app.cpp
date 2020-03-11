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
	cout << "단기 43차 c++언어 과정" << endl;
	cout << "계좌관리프로그램" << endl;
	cout << "2019.04.17" << endl;
	cout << "박노현" << endl;
	cout << "===================================================================" << endl;
	
	system("pause");
}


void app::ending()
{
	system("cls");

	cout << "===================================================================" << endl;
	cout << "프로그램을 종료합니다." << endl;
	cout << "===================================================================" << endl;
}


void app::menuprint()
{
	cout << "===================================================================" << endl;
	cout << "[1]계좌개설" << endl;
	cout << "[2]계좌검색" << endl;
	cout << "[3]계좌입금" << endl;
	cout << "[4]계좌출금" << endl;
	cout << "[5]계좌삭제" << endl;
	cout << "[6]프로그램종료" << endl;
	cout << "===================================================================" << endl;

}
