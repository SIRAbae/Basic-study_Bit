#pragma once
#include <string>
using namespace std;

enum keydata
{
	NO_DEFINED, F1, F2, F3, F4, F5, F6, F7, ESC //���� 0,1,2 ... �� ������ ����
};

//page87~89
class wbglobal
{
public:
	//static�̶�� Ű���� : ��ü���� ���� ����, Ŭ������ �̸����� ����
	static void clrscr();
	static int getnum(string msg);
	static string getstr(string msg);
	static keydata getkey();

	//�����ڰ� private�̸� ��ü�����Ұ� 
private:
	wbglobal();
	~wbglobal();
};

