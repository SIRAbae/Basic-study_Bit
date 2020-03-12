//wbarray.h

#pragma once

class wbarray
{
private:
	void* base[10];		//저장공간 생성
	int capacity;		//최대 저장 개수
	int size;			//현재 저장 개수 + 저장할 위치

public:
	wbarray();
	~wbarray();

public:
	int getcapacity();
	int getsize();
	void* getdata(int idx);

public:
	void push_back(void* value);
	void erase(int idx);
};

