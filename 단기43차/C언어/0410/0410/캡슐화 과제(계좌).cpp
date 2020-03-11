//캡슐화 실습.cpp
#include <iostream>
using namespace std;
#include <conio.h>

struct account
{
	bool ischeck;		
	int accountnumber;		
	char name[20];
	int balance;	

	void makeaccount(int a, char* n, int b)
	{
		ischeck = true;
		accountnumber = a;
		strcpy_s(name, sizeof(name), n);
		balance = b;
		
	}

	void deleteaccount()
	{
		ischeck = false;
		accountnumber = 0;
		strcpy_s(name, sizeof(name), "");
		balance = 0;
	}

	void depositaccount(int money)
	{
		balance = balance + money;
	}

	void withdrawaccount(int money)
	{
		if (balance >= money)
		{
			balance = balance - money;
		}
		else
		{
			cout << "잔액이 부족합니다." << endl;
		}
	}

	void printaccount()
	{
		if (ischeck == true)
		{
			cout << "====================================================================" << endl;
			cout << " 계좌번호 : " << accountnumber << endl;
			cout << " 이   름 : " << name << endl;
			cout << " 잔   액 : " << balance << endl;
			cout << "====================================================================" << endl;
		}
		else 
		{
			return;
		}
	}
};

int main()
{
	account bank = {0};	

	while (true)
	{
		system("cls"); //화면을 지워
		bank.printaccount();
		cout << "====================================================================" << endl;
		cout << "[1] 계좌번호 [2] 계좌삭제 [3] 입금 [4] 출금" << endl;
		cout << "====================================================================" << endl;

		char idx;
		idx = _getch(); //<conio.h>
		switch (idx)
		{
		case '1':
		{
			int bal;
			int ac;
			char name[20];
			cout << " 이름 : ";
			cin >> name;
			cout << " 계좌번호 : ";
			cin >> ac;
			cout << " 잔액 : ";
			cin >> bal;

			bank.makeaccount(ac, name, bal); break;
		}
		case '2': bank.deleteaccount();	break;
		case '3':
		{
			int money;
			cout << "입금액 : ";
			cin >> money;		//cin :입력받은 값(입금액)을 변수에 넣어준다.

			bank.depositaccount(money); break;
		}
		case '4':
		{
			int money;
			cout << "출금액 : ";
			cin >> money;

			bank.withdrawaccount(money); break;
		}
		}
	}
	return 0;
}