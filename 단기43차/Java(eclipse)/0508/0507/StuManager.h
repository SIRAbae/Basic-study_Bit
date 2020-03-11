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
	void AddStu(); //page 105 ����
	void ListAll();
	void SearchStuByNum(); //page 106����
	void SearchStuByName();
	void RemoveStu();
	void UpdateStu();
};

