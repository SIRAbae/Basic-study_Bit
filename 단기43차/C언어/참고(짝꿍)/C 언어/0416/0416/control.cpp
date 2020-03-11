//control.cpp

#include <iostream>
using namespace std;

#include "student.h"
#include "control.h"

control::control(int max)
{
	stulist = new wbarray;
}


control::~control()
{
	delete stulist;
}


void control::insertstudent()
{
	//1. 필요한 정보를 입력 받는다.
	int id;
	char name[20], subject [20];
	cout << "학번 : ";	cin >> id;
	cout << "이름 : ";	cin >> name;
	cout << "학과 : ";	cin >> subject;

	//2. 저장 객체 생성한다.
	student* stu = new student(id, name, subject);

	//3. wbarray에 저장 요청한다.
	stulist->push_back(stu);

	cout << "저장되었습니다." << endl;
}


void control::printallstudent()
{
	//순회
	for (int i = 0; i < stulist->getsize(); i++)
	{
		student *stu = (student*)stulist->getdata(i);
		stu->printline();
	}
}


void control::selectstudent()
{
	try
	{
		//1. 검색키 얻기
		char name[20];
		cout << "검색할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		student *stu = (student*)stulist->getdata(idx);
		stu->print();
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}


void control::updatestudent()
{
	try
	{
		//1. 검색키 얻기
		char name[20];
		cout << "수정할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		student *stu = (student*)stulist->getdata(idx);
		char major[20];
		cout << "수정할 학과 입력 ";	cin >> major;
		stu->setmajor(major);

		cout << "수정되었습니다." << endl;
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}


void control::deletestudent()
{
	try
	{
		//1. 삭제키 얻기
		char name[20];
		cout << "삭제할 이름 입력 : ";	cin >> name;

		//2. 검색 알고리즘
		int idx = nametoidx(name);

		//3. 결과 출력
		stulist->erase(idx);

		cout << "삭제되었습니다." << endl;
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}


int control::nametoidx(string name)
{
	for (int i = 0; i < stulist->getsize(); i++)
	{
		student *stu = (student*)stulist->getdata(i);
		if (stu->getname() == name)
			return i;
	}
	throw "없다.";
}
