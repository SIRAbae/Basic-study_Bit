#include <iostream>
#include <algorithm>
using namespace std;
#include "wbglobal.h"
#include "StuManager.h"



StuManager::StuManager()
{
	
}

StuManager::~StuManager()
{
}

void StuManager::Run()
{
	int key = 0;
	while (true)
	{
		wbglobal::clrscr();
		key = SelectMenu();
		switch(key)
		{
			case F1: AddStu();			break;
			case F2: RemoveStu(); break;
			case F3: SearchStuByNum(); break;
			case F4: SearchStuByName(); break;
			case F5: ListAll();			break;
			case F6: UpdateStu(); break;
			case ESC: return;
			default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
		}
		cout << "�ƹ�Ű�� ��������" << endl;
		wbglobal::getkey();
	}
}

keydata StuManager::SelectMenu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "[F1] �л� �߰�" << endl;
	cout << "[F2] �л� ����" << endl;
	cout << "[F3] �л� ��ȣ�� �˻�" << endl;
	cout << "[F4] �л� �̸����� �˻�" << endl;
	cout << "[F5] ��ü ����" << endl;
	cout << "[F6] �л� ��ȣ�� �˻� �� ��ȭ��ȣ ����" << endl;
	cout << "[ESC] ���α׷� ����" << endl;
	cout << "-------------------------------------------------" << endl;

	return wbglobal::getkey();
}

bool StuManager::Exist(int num)
{
	/*
	vector<stu*>::iterator begin = base.begin();
	vector<stu*>::iterator end = base.end();
	for (; begin != end; begin++)
	{
		stu *pstu = *begin;
		if (pstu->getNum() == num)
			return true;
	}
	return false;
	*/
	for (int i= 0; i< base.size(); i++)
	{
		stu *pstu = base[i];
		return true;
	}
	return false;
}

void StuManager::AddStu()
{
	//1. �л� ��ȣ
	int num = wbglobal::getnum("�߰��� �л� ��ȣ�� �Է��ϼ���.");


	if (Exist(num) == true)
	{
		cout << "�̹� ������ �л��� �ֽ��ϴ�." << endl;
		return;
	}

	//2. �̸�, ��ȭ��ȣ�� �Է¹޾�
	string name = wbglobal::getstr("�̸��� �Է��ϼ���");
	string phone = wbglobal::getstr("��ȭ��ȣ�� �Է��ϼ���");

	//3. ��ü ����
	stu *pstu = new stu(num, name, phone);

	//4. ����
	base.push_back(pstu);
	cout << "����Ǿ����ϴ�" << endl;
}
//��ȸ
void StuManager::ListAll()	//page 107����
{
	/*
	vector<stu*>::iterator begin = base.begin();
	vector<stu*>::iterator end = base.end();

	for (; begin != end; begin++)
	{
		stu* pstu = *begin;
		if (pstu != NULL)
			pstu->print();
	}
	*/

	//iterator�� ������� �ʰ� ���� �ڵ�
	for (int i = 0; i < (int)base.size(); i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL)
			pstu->print();
	}
}

void StuManager::SearchStuByNum()	//page 119����
{
	int num = wbglobal::getnum("�߰��� �л� ��ȣ�� �Է��ϼ���.");

	//�˻�(�����ۼ�)
	/*
	for (int i = 0; i < base.size(); i++)
	{
		stu*pstu = base[i];
		if (pstu->getNum() == num)
		{
			pstu->print();
			return;
		}
	}
	cout << "����." << endl;
	*/
	//STL find_if �Լ��� Ȱ��
	CompareByNum sbn(num);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << num << " �� �л� �ڷ�� �������� �ʾҽ��ϴ�." << endl;
		return;
	}
	stu *pstu = *itr;
	pstu->print();
}
//�̸����� �˻�
void StuManager::SearchStuByName()
{
	string name = wbglobal::getstr("�˻��� �л� �̸��� �Է��ϼ���");

		//�˻�
	/*
	for (int i = 0; i < base.size; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL && pstu ->getName()==name)
		{
			/*if (pstu ->getName()==name){}
			pstu->print();
			return;
		}
	}
	cout << name << "�л��� �������� �ʾҽ��ϴ�." << endl;
	*/
	
	//STL find_if �Լ��� Ȱ��
	CompareByName sbn(name);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << name << " �� �л� �ڷ�� �������� �ʾҽ��ϴ�." << endl;
		return;
	}
	stu *pstu = *itr;
	pstu->print();
}

//����
void StuManager::RemoveStu() //page 119
{
	int num = wbglobal::getnum("������ �л� ��ȣ�� �Է��ϼ���.");

	CompareByNum sbn(num);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << num << " �� �л� �ڷ�� �������� �ʾҽ��ϴ�." << endl;
		return;
	}
	stu *stu = *itr;
	delete stu;
	base.erase(itr); //��ġ��
	cout << "����Ǿ����ϴ�." << endl;

}
// ��ȭ��ȣ ����
void StuManager::UpdateStu()
{
	string name = wbglobal::getstr("������ �л� �̸��� �Է��ϼ���");

	CompareByName sbn(name);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << name << "�̸��� �����ϴ�." << endl;
		return;
	}

	
	stu *pstu = *itr;
		/*if (pstu ->getName()==name){} */
	//��ȭ��ȣ�� �Է¹޾�		
		string phone = wbglobal::getstr("������ ��ȭ��ȣ�� �Է��ϼ���");
		pstu->setPhone(phone);
	cout << "����Ǿ����ϴ�." << endl;
}

