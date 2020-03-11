//프로그램 시능 시작점/관리

#include "std.h"

#define DATA_MAX	30
int g_datalist[DATA_MAX] = { 0 };

void control_selectall()
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		printf("%4d", g_datalist[i]);
		if ((i !=0) && (i+1) % 10 == 0)
			printf("\n");
	}
	printf("\n");

}

void control_insert()
{
	printf("입력\n");
	//1. 변수 선언
	int number;
	int idx;

	//2. 초기화
	printf(">> 저장 문자 입력 : ");
	scanf_s("%d", &number);

	printf(">> 저장 인덱스 입력(0~%d) : ",
		DATA_MAX - 1);
	scanf_s("%d", &idx);


	//3. 연산
	g_datalist[idx] = number;

	//4. 결과
	printf("저장되었습니다.\n");
}

void control_select()
{
	printf("검색\n");
}

void control_update()
{
	printf("수정\n");
}

void control_delete()
{
	printf("삭제\n");
}

