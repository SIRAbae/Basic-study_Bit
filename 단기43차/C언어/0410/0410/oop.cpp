//oop.란..
/*
oop?(Object Oriented Programming, 개체지향프로그래밍)
 - 데이터와 함수를 묶어서 프로그래밍 하는 방식
1) 캡슐화 : 데이터와 함수를 묶어놓은 것(데이터 <--- 함수)
			데이터와 함수를 묶어서 정의하는 것
			단, 서로 연관성이 있어야함
2) 상속성
3) 다형성
*/


#include <iostream>
using namespace std;

//step1) c언어에서의 구조체 활용
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


//step2) c++언어에서의 구조체 활용 -> 캡슐화

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