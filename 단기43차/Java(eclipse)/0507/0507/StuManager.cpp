#include <iostream>
using namespace std;
#include "wbglobal.h"
#include "StuManager.h"



StuManager::StuManager()
	:max_stu(SetMaxStu()) //page 103����
{
	base.resize(max_stu, 0);	//max_stu������ �����Ҽ� �ִ� �迭 ������ �����
								//base�� ���� �����̳�, resize�ϸ� ���������ŭ ������ �������
								//0�� NULL�� �ʱ�ȭ�� ���̴�.
}


StuManager::~StuManager()
{
}

int StuManager::SetMaxStu()
{
	return wbglobal::getnum("�ִ� ������ �л����� �Է��ϼ���");
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

void StuManager::AddStu()
{
	//1. �л� ��ȣ -1 = ������ �ε���
	char temp[50];
	sprintf_s(temp, "�߰��� �л� ��ȣ�� �Է��ϼ���.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//1-1. �Է� �� üũ
	if ((num <= 0) || (num > max_stu))
	{
		cout << "������ ������ϴ�." << endl;
		return;
	}

	if (base[num - 1] != NULL)
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
	base[num - 1] = pstu;		//vector ���ٽ� �迭ó�� ��밡��
	cout << "����Ǿ����ϴ�" << endl;
}

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
	for (int i = 0; i < max_stu; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL)
			pstu->print();
	}
}

void StuManager::SearchStuByNum()	//page 106����
{
	char temp[50];
	sprintf_s(temp, "�߰��� �л� ��ȣ�� �Է��ϼ���.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//�߸� �Է����� ���
	if ((num <= 0) || (num > max_stu))
	{
		cout << "������ ������ϴ�." << endl;
		return;
	}

	//���� ���� ���� üũ
	if (base[num - 1] == NULL)
	{
		cout << num << "�� �л��� �������� �ʾҽ��ϴ�." << endl;
		return;
	}

	stu *pstu = base[num - 1];
	pstu->print();


}
//�̸����� �˻�
void StuManager::SearchStuByName()
{
	string name = wbglobal::getstr("�˻��� �л� �̸��� �Է��ϼ���");

		//�˻�
	for (int i = 0; i < max_stu; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL && pstu ->getName()==name)
		{
			/*if (pstu ->getName()==name){} */
			pstu->print();
			return;
		}
	}
	cout << name << "�л��� �������� �ʾҽ��ϴ�." << endl;
}

//����
void StuManager::RemoveStu() //page 105
{
	char temp[50];
	sprintf_s(temp, "������ �л� ��ȣ�� �Է��ϼ���.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//�߸� �Է����� ���
	if ((num <= 0) || (num > max_stu))
	{
		cout << "������ ������ϴ�." << endl;
		return;
	}

	//���� ���� ���� üũ
	if (base[num - 1] == NULL)
	{
		cout << num << "�� �л��� �������� �ʾҽ��ϴ�." << endl;
		return;
	}

	stu *pstu = base[num - 1];
	base[num - 1] = NULL; // #define NULL 0



}
// ��ȭ��ȣ ����
void StuManager::UpdateStu()
{
	string name = wbglobal::getstr("������ �л� �̸��� �Է��ϼ���");

	//�˻�
	for (int i = 0; i < max_stu; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL && pstu->getName() == name)/*if (pstu ->getName()==name){}�� if�� �ȿ� �Ⱦ��� ���� �� �� �ִ�. */
		{
			/*if (pstu ->getName()==name){} */
			string phone = wbglobal::getstr("������ ��ȭ��ȣ�� �Է��ϼ���");

			pstu->setPhone(phone);
			cout << "����Ǿ����ϴ�." << endl;
			return;
		}
	}
	cout << name << "�л��� �������� �ʾҽ��ϴ�." << endl;
}

