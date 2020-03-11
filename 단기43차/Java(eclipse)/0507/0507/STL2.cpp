#include <iostream>
using namespace std;
//#include "wbglobal.h"
#include "StuManager.h"

int main()
{
	StuManager *sm = new StuManager;
	sm->Run();
	delete sm;
	/*
	int num = wbglobal::getnum("정수 입력");
	cout << num << endl;

	keydata key = wbglobal::getkey();
	if (key == F1)
		cout << "F1" << endl;
	else if (key == ESC)
		cout << "ESC" << endl;
	*/
	return 0;
}