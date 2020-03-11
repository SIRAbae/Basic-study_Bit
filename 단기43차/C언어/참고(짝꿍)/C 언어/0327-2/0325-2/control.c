//프로그램 시능 시작점/관리

#include "std.h"

#define DATA_MAX	5
char g_name[DATA_MAX][20];
char g_phone[DATA_MAX][20];
int g_age[DATA_MAX];

/*
[0] 홍길동 010-1111-1111 10
[1] 이길동 010-2222-2222 20
...
[N]
*/
void control_selectall() //배열 순회 역할
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		printf("[%d] ", i);
		printf("%s\t", g_name[i]);
		printf("%s\t", g_phone[i]);
		printf("%d\t", g_age[i]);
	}
	printf("\n");

}

void control_insert()
{
	printf("입력\n");
	//1. 변수 선언
	char name[20], phone[20];
	int age;
	int idx;

	//2. 초기화
	printf(">> 이름 : ");
	gets_s(name, sizeof(name));

	printf(">> 전화번호 : ");
	gets_s(phone, sizeof(phone));

	printf(">> 나이 : ");
	scanf_s("%d", &age);

	printf(">> 저장 인덱스 입력(0~%d) : ",
		DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();


	//3. 연산 : 저장
	strcpy_s(g_name[idx], sizeof(g_name[idx]), name);
	strcpy_s(g_phone[idx], sizeof(g_phone[idx]), phone);
	g_age[idx] = age;

	//4. 결과
	printf("저장되었습니다.\n");
}

void control_select()
{
	printf("검색\n");

	//1. 변수 선언
	char name[20];

	//2. 초기화
	printf(">> 이름 : ");
	gets_s(name, sizeof(name));

	//3. 연산
	int idx = nametoidx(name);
	if (idx == -1)
	{
		printf("해당 정보는 없습니다.\n");
		return;
	}
	//4. 결과 출력
	printf(" [이   름] %s\n", g_name[idx]);
	printf(" [전화번호] %s\n", g_phone[idx]);
	printf(" [나   이] %d\n", g_age[idx]);

}

void control_update()
{
	printf("수정\n");
}

void control_delete()
{
	printf("삭제\n");
}

int nametoidx(char *name)
{
	for (int i = 0; i < DATA_MAX; i++)
	{
		if (strcmp(g_name[i], name) == 0);
		{
			return i;
		}
	}
	return -1;
}

