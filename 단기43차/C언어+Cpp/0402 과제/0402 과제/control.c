//프로그램 시능 시작점/관리

#include "std.h"
#include "account.h"
#include <stdio.h>
#include <string.h>


#define DATA_MAX 5
struct  account g_acc [DATA_MAX] = { 0 };


void control_selectall() //배열 순회 역할
{
	int idx;
	printf("=========================================\n");
	printf("이름\t계좌번호\t잔액\t 거래횟수\n");
	printf("-----------------------------------------\n");
	printf(" %s\t  %s\t %d\t %d\n",
		g_acc[idx].name, g_acc[idx].accountnumber, g_acc[idx].balance, g_acc[idx].num1);
	printf("=========================================\n");
	printf("\n");

}

void control_produceaccount()
{
	printf("계좌생성\n");
	//1. 변수 선언
	char name[20];
	char accountnumber[20];
	int balance;
	int idx;

	//2. 초기화
	printf("저장 위치(0~%d) : ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	if (g_acc[idx].flag == 1 ||
		(idx < 0 || idx >= DATA_MAX))//  데이터가 존재한다.
	{
		printf("잘못된 인덱스 입니다.\n");
		return;
	}
	printf(">> 이름 : ");	gets_s(name, sizeof(name));

	printf(">> 계좌번호 : ");	gets_s(accountnumber, sizeof(accountnumber));

	printf(">> 잔액 : ");	scanf_s("%d", &balance);

	getchar();


	//3. 연산 : 저장
	strcpy_s(g_acc[idx].name, sizeof(name), name);
	strcpy_s(g_acc[idx].accountnumber, sizeof(accountnumber),accountnumber);
	g_acc[idx].balance = balance;

	//4. 결과
	printf("저장되었습니다.\n");
}

void control_deposit()
{


	//1. 변수 선언
	int deposit;
	int idx;

	//2. 초기화
	printf("입금 금액: ");
	scanf_s("%d", &deposit);

	//3. 연산
	
	g_acc[idx].balance = g_acc[idx].balance + deposit;
		
	//4. 결과 출력
	
	printf(" %d원이 입금되었습니다.\n", deposit);

}

void control_withdraw()
{

	//1. 변수 선언
	int withdraw;
	int idx;

	//2. 초기화
	printf("출금 금액: ");
	scanf_s("%d", &withdraw);

	//3. 연산
	if (g_acc[idx].balance >= withdraw)
	{
		g_acc[idx].balance = g_acc[idx].balance - withdraw;
		printf(" %d원이 출금되었습니다.\n", withdraw);
		return;
	}
	else
	{
		printf("잔액이 부족합니다.\n");
		return;
	}
	//4. 결과 출력

	printf(" 거래가 종료됩니다.\n");
}
