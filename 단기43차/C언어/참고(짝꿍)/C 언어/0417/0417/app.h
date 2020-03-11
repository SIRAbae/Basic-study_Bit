//app.h
#pragma once


class bank;	//클래스 전방참조(함수의 선언부와 유사한 개념)

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

