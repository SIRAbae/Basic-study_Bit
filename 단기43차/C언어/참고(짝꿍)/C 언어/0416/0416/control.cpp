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
	//1. �ʿ��� ������ �Է� �޴´�.
	int id;
	char name[20], subject [20];
	cout << "�й� : ";	cin >> id;
	cout << "�̸� : ";	cin >> name;
	cout << "�а� : ";	cin >> subject;

	//2. ���� ��ü �����Ѵ�.
	student* stu = new student(id, name, subject);

	//3. wbarray�� ���� ��û�Ѵ�.
	stulist->push_back(stu);

	cout << "����Ǿ����ϴ�." << endl;
}


void control::printallstudent()
{
	//��ȸ
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
		//1. �˻�Ű ���
		char name[20];
		cout << "�˻��� �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
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
		//1. �˻�Ű ���
		char name[20];
		cout << "������ �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
		student *stu = (student*)stulist->getdata(idx);
		char major[20];
		cout << "������ �а� �Է� ";	cin >> major;
		stu->setmajor(major);

		cout << "�����Ǿ����ϴ�." << endl;
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
		//1. ����Ű ���
		char name[20];
		cout << "������ �̸� �Է� : ";	cin >> name;

		//2. �˻� �˰���
		int idx = nametoidx(name);

		//3. ��� ���
		stulist->erase(idx);

		cout << "�����Ǿ����ϴ�." << endl;
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
	throw "����.";
}
