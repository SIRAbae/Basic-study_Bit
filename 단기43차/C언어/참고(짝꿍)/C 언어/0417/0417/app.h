//app.h
#pragma once


class bank;	//Ŭ���� ��������(�Լ��� ����ο� ������ ����)

class app
{
private:
	bank* bank1;

public:
	app();
	~app();

public:
	void init();
	void run();
	void exit();

public:
	void logo();
	void ending();
	void menuprint();
};

