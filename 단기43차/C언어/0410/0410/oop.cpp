//oop.��..
/*
oop?(Object Oriented Programming, ��ü�������α׷���)
 - �����Ϳ� �Լ��� ��� ���α׷��� �ϴ� ���
1) ĸ��ȭ : �����Ϳ� �Լ��� ������� ��(������ <--- �Լ�)
			�����Ϳ� �Լ��� ��� �����ϴ� ��
			��, ���� �������� �־����
2) ��Ӽ�
3) ������
*/


#include <iostream>
using namespace std;

//step1) c������ ����ü Ȱ��
/*
struct wbdate
{
	int year;
	int month;
	int day;
};

void initdate(wbdate *pdate)
{
	pdate->year = 2019;
	pdate->month = 4;
	pdate->day = 10;
}

void printdate(const wbdate *pdate)
{
	cout << pdate->year << "/";
	cout << pdate->month << "/";
	cout << pdate->day << endl;
}

int main()
{
	wbdate date;
	initdate(&date);
	printdate(&date);

	return 0;
}


//step2) c++������ ����ü Ȱ�� -> ĸ��ȭ

struct wbdate
{
	int year;
	int month;
	int day;
	
	void initdate()
	{
		year = 2019;
		month = 4;
		day = 10;
	}

	void initdate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}

	void printdate()
	{
		cout << year << "/";
		cout << month << "/";
		cout << day << endl;
	}

	void nextday()
	{
		day = day + 1;  // or day++;
	}
};

int main()
{
	wbdate date;
	date.initdate();			//initdate(&date);
	date.printdate();			//2019/4/10 printdate(&date);
	date.nextday();				
	date.printdate();			//2019/4/11

	wbdate date1;
	date1.initdate(1974, 2, 11);
	date1.printdate();

	return 0;
}
*/