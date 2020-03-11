#pragma once
#include <iostream>
#include <string>
using namespace std;

//데이터 클래스
class stu
{
	//멤버변수의 은닉
private:
	const int num;		//상수 멤버, 상수는 무조건 초기화가 이뤄져야함, 초기화되면 바뀌지 않음
	string name;
	string phone;

	//생성자 소멸자 만들기
public:
	stu(int _num, string _name, string _phone);
	~stu();

	//get set 메서드 만들기
public:
	int getNum() const		{ return num;	}
	string getName() const	{ return name;	}
	string getPhone() const	{ return phone; }
	void setPhone(string value) { phone = value; }

	//일반적인 메서드 만들기
public:
	void print() const
	{
		cout << num << "\t";
		cout << name.c_str() << "\t";
		cout << phone.c_str() << endl;
	}
};

