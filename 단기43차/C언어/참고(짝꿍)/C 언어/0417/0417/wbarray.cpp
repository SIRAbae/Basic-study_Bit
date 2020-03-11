//wbarray.cpp

#include <iostream>
using namespace std;

#include "wbarray.h"


wbarray::wbarray()
{
	capacity = 10;
	size = 0;
}


wbarray::~wbarray()
{
}


int wbarray::getcapacity()
{
	return capacity;
}


int wbarray::getsize()
{
	return size;
}


void* wbarray::getdata(int idx)
{
	if (idx < 0 || idx > size)
		throw "�߸��� �ε����Դϴ�.";

	return base[idx];
}


void wbarray::push_back(void* value)
{
	//��������� �ִ��� ���� �˻�(isOverflow), is�� ���� true or false�� �ǹ̸� ����, overflow�� true�� ��������� ���� false�� ����
	if (size >= capacity)
		throw "���� ������ ����.";

	//����
	base[size] = value;

	//���� ���� ����
	size++;
}


void wbarray::erase(int idx)
{
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε����Դϴ�.";

	for (int i = idx; i < size - 1; i++)
	{
		base[i] = base[i + 1];
	}
	size--;
}
