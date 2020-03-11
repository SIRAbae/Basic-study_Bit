#include <stdio.h>
#include <string.h>
#include "exam.h"

//구조체 정의 = 타입에 대한 정의
//1. 타입명 : struct person
//2. 크기 : 25Byte
//3. 저장 : 3개의 멤버로 구성되어 있음 문자열, 정수, 문자
struct person
{
	char name[20];
	int age;
	char gender;      //25바이트 멤버는 3개
};

void exam1()
{
	struct person   per1 = { "홍길동", 10, 'm' };
	struct person * per2;
	struct person per3[3];
	//===============================================
	printf("이름 : %s\n", per1.name);
	printf("나이 : %d\n", per1.age);
	printf("성별 : %c\n", per1.gender);
	//================================================
	//per1의 타입은? struct person 크기는? 25바이트
	//per1.name의 타입은? char* 20바이트
	//per1.age의 타입은? int 4바이트
	//per1.gender의 타입은? char 1바이트
	//=================================================

}
/*
struct person
{
	char name[20];			int age;		char gender;
};
void exam1()
{
	struct person	per1 = { "홍길동", 10, 'm' };
	struct person * per2; 
	struct person per3[3];
	
	int a = per1.age; =10 ok 
	int*pa = &per1.age; =120 ok
	*pa = 20;
	strcpy_s(per1.name, sizeof(per1.name), "김길동");
	====================================================
	struct person per4;
	per4 = per1;  //? => 가능하다 per4에 3가지의 멤버 데이터가 대입이 된다.
	printf("이름 : %s\n", per4.name);
	printf("나이 : %d\n", per4.age);
	printf("성별 : %c\n", per4.gender);
	==========================================================================================
	per2 = per1; //? => 1차와 0차이므로 안맞음 => &per1으로 바꿔 4바이트의 크기를 가짐
	*per2       타입 : struct person
	(*per2).age = 30;                   가방이라는 파일에 접근해서 멤버에 접근한다, 주소 바꾸기도 가능
	per2 -> age = 30; 위와 같음 ->는 연산자     값은 .으로 주소는 ->로 접근하면 됨
}
*/

/*
오늘 날짜를 저장하고 출력 그 다음날짜로 변경처리
그리고 날짜를 출력
*/

//기본입출력과 연산자까지 학습...
void exam2()
{
	int year, month, day;
	year = 2019;
	month = 4;
	day = 1;
	printf("%d-%02d-%02d\n", year, month, day);

	day = day + 1;
	printf("%d-%02d-%02d\n", year, month, day);

}

/*함수까지 학습...
void inputtoday(int *y, int *m, int *d) //address
{
	*y = 2019;
	*m = 4;
	*d = 1;
}
void printday(int y, int m, int d)  //value
{
	printf("%d-%02d-%02d\n", y, m, d);
}
void nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void exam3()
{
	int year, month, day;

	inputtoday(&year, &month, &day);     //inputtoday가 종료되면 다음날짜로 변경되게끔, call by address로 보내야 바꿀 수 있다.
	printday(year, month, day);				//바꿀 목적이 없으므로 call by value로 보낸다
	//printf("%d-%02d-%02d\n", year, month, day);
	nextday(&year, &month, &day);
	printday(year, month, day);

	//day = day + 1;
	//printf("%d-%02d-%02d\n", year, month, day);
}
*/

//구조체까지 학습...
//구조체 정의
struct mydate
{
	int year;
	int month;
	int day;
};

void inputtoday(struct mydate *pdate)
{
	pdate->year = 2019;
	pdate->month = 4;
	pdate->day = 1;
}
void printday(struct mydate date)
{
	printf("%d-%02d-%02d\n", date.year, date.month, date.day);
}
void nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void exam4()
{
	struct mydate date;
	inputtoday(&date); //값을 바꾸는 목적 call by address  &붙여야함
	printday(date);
	nextday(&date.year, &date.month, &date.day);  //nextday(&date);
	printday(date);
}

//1. exam5의 변수들을 멤버로 같는 struct oper 이름의 구조체 타입을 정의하고 그 타입의 변수를 선언하여 진행하여라
struct oper
{
	int num1;
	int num2;
	char oper;
	float result;
};
void inputnumber(int *num1, int *num2)
{
	printf("정수입력 : ");
	scanf_s("%d", num1);

	printf("정수입력 : ");
	scanf_s("%d", num2);
}
/*void inputnumber(int *num2)
{
	printf("정수입력 : ");
	scanf_s("%d", num2);
}*/

void inputoper(char *oper)
{
	getchar();
	printf("연산자입력 : ");
	scanf_s("%c", oper, sizeof(char));
	
}
void caloper(int num1, int num2, char oper, float *result)
{
	switch (oper)
	{
	case '+': *result = (float)num1 + num2; break;
	case '-': *result = (float)num1 + num2; break;
	case '*': *result = (float)num1 + num2; break;
	case '/': *result = (float)num1 + num2; break;

	}
}
void calprint(float result)
{
	printf(" 답 : %0.2f\n", result);
}
void exam5()
{
	
	struct oper oper1;

								//1. 정수입력함수 호출
	inputnumber(&oper1.num1,&oper1.num2);
												//2. 정수입력함수 호출
	//inputnumber(&oper1.num2);
														//3. 연산자 입력함수 호출
	inputoper(&oper1.oper);
																			//4. 결과값 얻는 함수
	caloper(oper1.num1,oper1.num2,oper1.oper,&oper1.result);
																					//5. 연산의 결과를 출력하는 함수 호출
	calprint(oper1.result);

}