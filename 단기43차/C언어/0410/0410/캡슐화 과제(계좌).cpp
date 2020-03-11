//ĸ��ȭ �ǽ�.cpp
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
			cout << "�ܾ��� �����մϴ�." << endl;
		}
	}

	void printaccount()
	{
		if (ischeck == true)
		{
			cout << "====================================================================" << endl;
			cout << " ���¹�ȣ : " << accountnumber << endl;
			cout << " ��   �� : " << name << endl;
			cout << " ��   �� : " << balance << endl;
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
		system("cls"); //ȭ���� ����
		bank.printaccount();
		cout << "====================================================================" << endl;
		cout << "[1] ���¹�ȣ [2] ���»��� [3] �Ա� [4] ���" << endl;
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
			cout << " �̸� : ";
			cin >> name;
			cout << " ���¹�ȣ : ";
			cin >> ac;
			cout << " �ܾ� : ";
			cin >> bal;

			bank.makeaccount(ac, name, bal); break;
		}
		case '2': bank.deleteaccount();	break;
		case '3':
		{
			int money;
			cout << "�Աݾ� : ";
			cin >> money;		//cin :�Է¹��� ��(�Աݾ�)�� ������ �־��ش�.

			bank.depositaccount(money); break;
		}
		case '4':
		{
			int money;
			cout << "��ݾ� : ";
			cin >> money;

			bank.withdrawaccount(money); break;
		}
		}
	}
	return 0;
}