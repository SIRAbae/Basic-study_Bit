//캡슐화 실습.cpp
#include <iostream>
using namespace std;
#include <conio.h>
/*
struct tv
{
	bool ison;		//on(true) off(false) 변수  on일 경우에만 실행 off면 종료(return)
	int volume;		//volume up down 기능을 만들어보자 0~100
	int channel;	//tv 구성 요소들 ison volume channel 0~20

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

	void channelrandom(int value)		//채널 변경, 인자전달이 필요
	{
		if (ison == false)
			return;
		if (value < 0 || value > 20)		//채널의 범위가 넘어가면 0으로
			channel = 0;
		else
		channel = value;
	}

	void onoff()	//전원을 키고 끌 수 있는 함수
	{
		ison = !ison; //토글연산자
	}

	void print()
	{
		if (ison == true)
		{
			cout << "====================================================================" << endl;
			cout << " 전 원 : " << (ison ? "ON" : "OFF") << endl;
			cout << " 볼 륨 : " << volume << endl;
			cout << " 채 널 : " << channel << endl;
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
	tv tv1 = { false, 6, 2 };		//tv 하나 삼 1,4,4바이트 총 3개의 공간을 가짐

	while (true)
	{
		system("cls"); //화면을 지워
		tv1.print();
		cout << "====================================================================" << endl;
		cout << "[1] onoff [2] 볼륨UP [3] 볼륨DOWN [4] 채널UP [5] 채널DOWN" << endl;
		cout << "[6] 채널random" << endl;
		cout << "[0] 프로그램 종료" << endl;
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
			cout << "채널 : ";
			cin >> value;
			tv1.channelrandom(value); break;
			}
		}

		//system("pause");
	}
	return 0;
}
*/