//ĸ��ȭ �ǽ�.cpp
#include <iostream>
using namespace std;
#include <conio.h>
/*
struct tv
{
	bool ison;		//on(true) off(false) ����  on�� ��쿡�� ���� off�� ����(return)
	int volume;		//volume up down ����� ������ 0~100
	int channel;	//tv ���� ��ҵ� ison volume channel 0~20

	void volumeup()
	{
		if (ison == false)
			return;
		if (volume >= 100)
			return;
		volume++;
	}

	void volumedown()
	{
		if (ison == false)
			return;
		if (volume >= 0)
			return;
		volume--;
	}

	void channelup()
	{
		if (ison == false)
			return;
		if (channel >= 20)
			channel = 0;
		else
		channel++;
	}

	void channeldown()
	{
		if (ison == false)
			return;
		if (channel <= 0)
			channel = 20;
		else
		channel--;
	}

	void channelrandom(int value)		//ä�� ����, ���������� �ʿ�
	{
		if (ison == false)
			return;
		if (value < 0 || value > 20)		//ä���� ������ �Ѿ�� 0����
			channel = 0;
		else
		channel = value;
	}

	void onoff()	//������ Ű�� �� �� �ִ� �Լ�
	{
		ison = !ison; //��ۿ�����
	}

	void print()
	{
		if (ison == true)
		{
			cout << "====================================================================" << endl;
			cout << " �� �� : " << (ison ? "ON" : "OFF") << endl;
			cout << " �� �� : " << volume << endl;
			cout << " ä �� : " << channel << endl;
			cout << "====================================================================" << endl;
		}
		else
		{
			cout << "====================================================================" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "====================================================================" << endl;
		}
	}
};

int main()
{
	tv tv1 = { false, 6, 2 };		//tv �ϳ� �� 1,4,4����Ʈ �� 3���� ������ ����

	while (true)
	{
		system("cls"); //ȭ���� ����
		tv1.print();
		cout << "====================================================================" << endl;
		cout << "[1] onoff [2] ����UP [3] ����DOWN [4] ä��UP [5] ä��DOWN" << endl;
		cout << "[6] ä��random" << endl;
		cout << "[0] ���α׷� ����" << endl;
		cout << "====================================================================" << endl;

		char idx;
		idx = _getch(); //<conio.h>

		switch (idx)
		{
		case '0': return 0;
		case '1': tv1.onoff();	break;
		case '2': tv1.volumeup();	break;
		case '3': tv1.volumedown();	break;
		case '4': tv1.channelup(); break;
		case '5': tv1.channeldown(); break;
		case '6': 
			{
			int value;
			cout << "ä�� : ";
			cin >> value;
			tv1.channelrandom(value); break;
			}
		}

		//system("pause");
	}
	return 0;
}
*/