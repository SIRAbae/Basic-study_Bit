//wbarray.h

#pragma once

class wbarray
{
private:
	void* base[10];		//������� ����
	int capacity;		//�ִ� ���� ����
	int size;			//���� ���� ���� + ������ ��ġ

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

