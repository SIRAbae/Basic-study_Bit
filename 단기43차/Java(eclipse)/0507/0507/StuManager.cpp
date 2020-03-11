#include <iostream>
using namespace std;
#include "wbglobal.h"
#include "StuManager.h"



StuManager::StuManager()
	:max_stu(SetMaxStu()) //page 103내용
{
	base.resize(max_stu, 0);	//max_stu갯수를 저장할수 있는 배열 공간이 생긴다
								//base는 벡터 컨테이너, resize하면 집어넣은만큼 공간이 만들어짐
								//0은 NULL을 초기화한 값이다.
}


StuManager::~StuManager()
{
}

int StuManager::SetMaxStu()
{
	return wbglobal::getnum("최대 관리할 학생수를 입력하세요");
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

void StuManager::AddStu()
{
	//1. 학생 번호 -1 = 저장할 인덱스
	char temp[50];
	sprintf_s(temp, "추가할 학생 번호를 입력하세요.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//1-1. 입력 후 체크
	if ((num <= 0) || (num > max_stu))
	{
		cout << "범위를 벗어났습니다." << endl;
		return;
	}

	if (base[num - 1] != NULL)
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
	base[num - 1] = pstu;		//vector 접근시 배열처럼 사용가능
	cout << "저장되었습니다" << endl;
}

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
	for (int i = 0; i < max_stu; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL)
			pstu->print();
	}
}

void StuManager::SearchStuByNum()	//page 106내용
{
	char temp[50];
	sprintf_s(temp, "추가할 학생 번호를 입력하세요.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//잘못 입력했을 경우
	if ((num <= 0) || (num > max_stu))
	{
		cout << "범위를 벗어났습니다." << endl;
		return;
	}

	//실제 보관 여부 체크
	if (base[num - 1] == NULL)
	{
		cout << num << "번 학생은 보관되지 않았습니다." << endl;
		return;
	}

	stu *pstu = base[num - 1];
	pstu->print();


}
//이름으로 검색
void StuManager::SearchStuByName()
{
	string name = wbglobal::getstr("검색할 학생 이름을 입력하세요");

		//검색
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
	cout << name << "학생은 보관되지 않았습니다." << endl;
}

//삭재
void StuManager::RemoveStu() //page 105
{
	char temp[50];
	sprintf_s(temp, "삭재할 학생 번호를 입력하세요.(1~%d)", max_stu);
	int num = wbglobal::getnum(temp);

	//잘못 입력했을 경우
	if ((num <= 0) || (num > max_stu))
	{
		cout << "범위를 벗어났습니다." << endl;
		return;
	}

	//실제 보관 여부 체크
	if (base[num - 1] == NULL)
	{
		cout << num << "번 학생은 보관되지 않았습니다." << endl;
		return;
	}

	stu *pstu = base[num - 1];
	base[num - 1] = NULL; // #define NULL 0



}
// 전화번호 수정
void StuManager::UpdateStu()
{
	string name = wbglobal::getstr("수정할 학생 이름을 입력하세요");

	//검색
	for (int i = 0; i < max_stu; i++)
	{
		stu *pstu = base[i];
		if (pstu != NULL && pstu->getName() == name)/*if (pstu ->getName()==name){}을 if문 안에 안쓰고 같이 쓸 수 있다. */
		{
			/*if (pstu ->getName()==name){} */
			string phone = wbglobal::getstr("수정할 전화번호를 입력하세요");

			pstu->setPhone(phone);
			cout << "변경되었습니다." << endl;
			return;
		}
	}
	cout << name << "학생은 보관되지 않았습니다." << endl;
}

