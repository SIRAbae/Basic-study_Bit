#include <iostream>
using namespace std;

class wbdate
{
	int year;
	int month;
	int day;

public:
	wbdate(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	wbdate(int y, int m)
	{
		year = y;
		month = m;
		day = 1;
	}
	void Print()
	{
		cout << year << "/" << month << "/" << day << endl;
	}
	int DayGap(wbdate to)
	{
		int gab = day - to.day;
		return gab;
	}
};
int main()
{
	wbdate today(2019, 4, 11);
	today.Print();					//2019/4/11

	wbdate today1(2019,4);			
	today1.Print();					//2019/4/1

	int gab = today.DayGap(today1);	//�ڽŰ�(today) ���޵� today1�� �� �������� ��ȯ

	cout << gab << endl;

	return 0;
}