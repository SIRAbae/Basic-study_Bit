#include <iostream>
using namespace std;
#include <conio.h>
#include "wbglobal.h"



wbglobal::wbglobal()
{
}


wbglobal::~wbglobal()
{
}

void wbglobal::clrscr()
{
	system("cls");
}

int wbglobal::getnum(string msg)
{
	cout << msg << " : ";
	int num;				//cin >> mum; �̷��� © ���� ����
	char buf[255 + 1];
	cin.getline(buf, 255);	//cin >> buf; �̷��� © ���� ����, gets
	cin.clear();			//���� ����
	sscanf_s(buf, "%d", &num);
	return num;
}

string wbglobal::getstr(string msg)
{
	cout << msg << " : ";
	char buf[255 + 1];
	cin.getline(buf, 255);	//cin >> buf; �̷��� © ���� ����, gets
	cin.clear();			//���� ����
	return buf;
}

keydata wbglobal::getkey()
{
	int key = _getch();		//conio.h

	if (key == 27)			//ESC�� ������ Ű��
		return ESC;
	
	if (key == 0)			//���Ű�� ������ ��
	{
		key = _getch();
		switch (key)
		{
		case 59: return F1;
		case 60: return F2;
		case 61: return F3;
		case 62: return F4;
		case 63: return F5;
		case 64: return F6;
		case 65: return F7;
		}
	}
	return NO_DEFINED;
}
