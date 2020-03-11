#pragma once
#include <vector>
using namespace std;
#include "wbglobal.h"
#include "stu.h"

class StuManager
{
private:
	vector<stu*> base;

public:
	StuManager();
	~StuManager();

public:
	void Run();

private:
	bool Exist(int num);

private:
	keydata SelectMenu();
	void AddStu(); //page 105 내용
	void ListAll();
	void SearchStuByNum(); //page 106내용
	void SearchStuByName();
	void RemoveStu();
	void UpdateStu();
};

