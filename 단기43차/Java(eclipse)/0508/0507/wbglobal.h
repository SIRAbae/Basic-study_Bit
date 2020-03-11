#pragma once
#include <string>
using namespace std;

enum keydata
{
	NO_DEFINED, F1, F2, F3, F4, F5, F6, F7, ESC //숫자 0,1,2 ... 의 성질을 가짐
};

//page87~89
class wbglobal
{
public:
	//static이라는 키워드 : 객체없이 접근 가능, 클래스의 이름으로 접근
	static void clrscr();
	static int getnum(string msg);
	static string getstr(string msg);
	static keydata getkey();

	//생성자가 private이면 객체생성불가 
private:
	wbglobal();
	~wbglobal();
};

