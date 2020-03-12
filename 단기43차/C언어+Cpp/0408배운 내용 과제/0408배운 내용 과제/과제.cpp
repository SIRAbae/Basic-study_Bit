//과제.cpp
//namespace
//구문을 추가하여 아래 코드가 실행되도록 할 것
#include <iostream>
using namespace std;
/*
void foo()
{
	printf("global foo()\n");
}
namespace one
{
	void foo() { printf("namespace one::foo()\n"); }
}

namespace two
{
	void foo() { printf("namespace two::foo()\n"); }
}


int main()
{
	foo();			//global foo()
	one::foo();		//namespace one::foo()
	two::foo();		//namespace two::foo()

	return 0;
}
*/

//정수값 2개를 교환하는 swap 함수를 레퍼런스를 사용해서 구현하시오
/*
void swap(int& n1, int& n2);

int main()
{
	int num = 10, num1 = 20;

	swap(num, num1);
	cout << num << " " << num1 << endl;
	return 0;
}

void swap(int& n1, int& n2)
{
	n1 = 20;
	n2 = 10;
}
*/


//function overloading
//아래 코드가 정상적으로 동작할 수 있도록 함수 오버로딩을 이용하여 구현하시오
/*
int foo(int n1, int n2, int n3, int n4)
{
	cout << n1 << ":" << n2 << ":" << n3 << ":" << n4 << endl;

	return 0;
}
int foo(int n1, int n2, int n3)
{
	cout << n1 << ":" << n2 << ":" << n3 << endl;

	return 0;
}
int foo(int n1, int n2)
{
	cout << n1 << ":" << n2 << endl;

	return 0;
}
int foo(int n1)
{
	cout << n1 << endl;

	return 0;
}
int main()
{
	foo(10, 20, 30, 40); //10 : 20 : 30 : 40
	foo(10, 20, 30); //10 : 20 : 30
	foo(10, 20); //10 : 20
	foo(10); //10

	return 0;
}
*/



//default parameter
//아래 코드가 정상적으로 동작할 수 있도록 기본값을 이용하여 구현하시오
/*
void foo(int n1 = 0, int n2 = 1, int n3 = 2, int n4 = 3)
{
cout << n1 << ":" << n2 << ":" << n3 << ":" << n4 << endl;
}

int main()
{
foo(10, 20, 30, 40);	//10 : 20 : 30 : 40
foo(10, 20, 30);		//10 : 20 : 30 : 3
foo(10, 20);			 //10 : 20 : 2 : 3
foo(10);				//10 : 1 : 2 : 3

return 0;
}
*/

//키보드로부터 소문자를 입력 받아 대문자로 변환하여 출력하세요
//입력(소문자)a => 변환(대문자)A

/*
char change(char ch);

int main()
{
	char ch;

	cout << "입력(소문자) : ";
	cin >> ch;

	char result = change(ch);

	cout << "변환(대문자) : " << result << endl;
	return 0;
}
char change(char ch)
{
	return ch - ('a' - 'A');
}
*/

//정수 5개를 입력 배열에 입력 받고, 그 합을 구하는 기능
//배열을 전달 받아 그 합의 결과를 반환하는 함수
// 입력1 : 10 입력2 : 3 입력3 : 20 입력4 : 5 입력5 : 7
// >>합의 결과 : 45

char change(char ch);

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	cout << "입력1 : ";
	cin >> num1;

	cout << "입력2 : ";
	cin >> num2;

	cout << "입력3 : ";
	cin >> num3;

	cout << "입력4 : ";
	cin >> num4;

	cout << "입력5 : ";
	cin >> num5;

	char result = change(ch);

	cout << "변환(대문자) : " << result << endl;
	return 0;
}
char change(char ch)
{
	return ch - ('a' - 'A');
}