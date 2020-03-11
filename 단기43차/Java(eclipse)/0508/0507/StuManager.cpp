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
			default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
		}
		cout << "아무키나 누르세요" << endl;
		wbglobal::getkey();
	}
}

keydata StuManager::SelectMenu()
{
	cout << "-------------------------------------------------" << endl;
	cout << "[F1] 학생 추가" << endl;
	cout << "[F2] 학생 삭제" << endl;
	cout << "[F3] 학생 번호로 검색" << endl;
	cout << "[F4] 학생 이름으로 검색" << endl;
	cout << "[F5] 전체 보기" << endl;
	cout << "[F6] 학생 번호로 검색 후 전화번호 변경" << endl;
	cout << "[ESC] 프로그램 종료" << endl;
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
	//1. 학생 번호
	int num = wbglobal::getnum("추가할 학생 번호를 입력하세요.");


	if (Exist(num) == true)
	{
		cout << "이미 보관된 학생이 있습니다." << endl;
		return;
	}

	//2. 이름, 전화번호를 입력받아
	string name = wbglobal::getstr("이름을 입력하세요");
	string phone = wbglobal::getstr("전화번호를 입력하세요");

	//3. 객체 생성
	stu *pstu = new stu(num, name, phone);

	//4. 저장
	base.push_back(pstu);
	cout << "저장되었습니다" << endl;
}
//순회
void StuManager::ListAll()	//page 107내용
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

	//iterator을 사용하지 않고 만든 코드
	for (int i = 0; i < (int)base.size(); i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL)
			pstu->print();
	}
}

void StuManager::SearchStuByNum()	//page 119내용
{
	int num = wbglobal::getnum("추가할 학생 번호를 입력하세요.");

	//검색(직접작성)
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
	cout << "없다." << endl;
	*/
	//STL find_if 함수를 활용
	CompareByNum sbn(num);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << num << " 번 학생 자료는 보관되지 않았습니다." << endl;
		return;
	}
	stu *pstu = *itr;
	pstu->print();
}
//이름으로 검색
void StuManager::SearchStuByName()
{
	string name = wbglobal::getstr("검색할 학생 이름을 입력하세요");

		//검색
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
	cout << name << "학생은 보관되지 않았습니다." << endl;
	*/
	
	//STL find_if 함수를 활용
	CompareByName sbn(name);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << name << " 번 학생 자료는 보관되지 않았습니다." << endl;
		return;
	}
	stu *pstu = *itr;
	pstu->print();
}

//삭재
void StuManager::RemoveStu() //page 119
{
	int num = wbglobal::getnum("삭재할 학생 번호를 입력하세요.");

	CompareByNum sbn(num);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << num << " 번 학생 자료는 보관되지 않았습니다." << endl;
		return;
	}
	stu *stu = *itr;
	delete stu;
	base.erase(itr); //위치값
	cout << "삭재되었습니다." << endl;

}
// 전화번호 수정
void StuManager::UpdateStu()
{
	string name = wbglobal::getstr("수정할 학생 이름을 입력하세요");

	CompareByName sbn(name);
	vector<stu*>::iterator itr =
		find_if(base.begin(), base.end(), sbn);
	if (itr == base.end())
	{
		cout << name << "이름이 없습니다." << endl;
		return;
	}

	
	stu *pstu = *itr;
		/*if (pstu ->getName()==name){} */
	//전화번호를 입력받아		
		string phone = wbglobal::getstr("수정할 전화번호를 입력하세요");
		pstu->setPhone(phone);
	cout << "변경되었습니다." << endl;
}

