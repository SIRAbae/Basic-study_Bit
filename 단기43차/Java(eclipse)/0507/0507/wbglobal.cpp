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
	int num;				//cin >> mum; 이렇게 짤 수도 있음
	char buf[255 + 1];
	cin.getline(buf, 255);	//cin >> buf; 이렇게 짤 수도 있음, gets
	cin.clear();			//버퍼 비우기
	sscanf_s(buf, "%d", &num);
	return num;
}

string wbglobal::getstr(string msg)
{
	cout << msg << " : ";
	char buf[255 + 1];
	cin.getline(buf, 255);	//cin >> buf; 이렇게 짤 수도 있음, gets
	cin.clear();			//버퍼 비우기
	return buf;
}

keydata wbglobal::getkey()
{
	int key = _getch();		//conio.h

	if (key == 27)			//ESC를 누를때 키값
		return ESC;
	
	if (key == 0)			//기능키를 눌렀을 때
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
