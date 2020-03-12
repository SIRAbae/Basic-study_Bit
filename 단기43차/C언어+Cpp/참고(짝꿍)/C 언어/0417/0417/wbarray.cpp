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
		throw "잘못된 인덱스입니다.";

	return base[idx];
}


void wbarray::push_back(void* value)
{
	//저장공간이 있는지 여부 검사(isOverflow), is가 들어가면 true or false의 의미를 가짐, overflow가 true면 저장공간이 없다 false면 있음
	if (size >= capacity)
		throw "저장 공간이 없다.";

	//저장
	base[size] = value;

	//저장 개수 증가
	size++;
}


void wbarray::erase(int idx)
{
	if (idx < 0 || idx >= size)
		throw "잘못된 인덱스입니다.";

	for (int i = idx; i < size - 1; i++)
	{
		base[i] = base[i + 1];
	}
	size--;
}
