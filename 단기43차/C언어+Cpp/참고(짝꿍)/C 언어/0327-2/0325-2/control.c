//���α׷� �ô� ������/����

#include "std.h"

#define DATA_MAX	5
char g_name[DATA_MAX][20];
char g_phone[DATA_MAX][20];
int g_age[DATA_MAX];

/*
[0] ȫ�浿 010-1111-1111 10
[1] �̱浿 010-2222-2222 20
...
[N]
*/
void control_selectall() //�迭 ��ȸ ����
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
	printf("�Է�\n");
	//1. ���� ����
	char name[20], phone[20];
	int age;
	int idx;

	//2. �ʱ�ȭ
	printf(">> �̸� : ");
	gets_s(name, sizeof(name));

	printf(">> ��ȭ��ȣ : ");
	gets_s(phone, sizeof(phone));

	printf(">> ���� : ");
	scanf_s("%d", &age);

	printf(">> ���� �ε��� �Է�(0~%d) : ",
		DATA_MAX - 1);
	scanf_s("%d", &idx);
	getchar();


	//3. ���� : ����
	strcpy_s(g_name[idx], sizeof(g_name[idx]), name);
	strcpy_s(g_phone[idx], sizeof(g_phone[idx]), phone);
	g_age[idx] = age;

	//4. ���
	printf("����Ǿ����ϴ�.\n");
}

void control_select()
{
	printf("�˻�\n");

	//1. ���� ����
	char name[20];

	//2. �ʱ�ȭ
	printf(">> �̸� : ");
	gets_s(name, sizeof(name));

	//3. ����
	int idx = nametoidx(name);
	if (idx == -1)
	{
		printf("�ش� ������ �����ϴ�.\n");
		return;
	}
	//4. ��� ���
	printf(" [��   ��] %s\n", g_name[idx]);
	printf(" [��ȭ��ȣ] %s\n", g_phone[idx]);
	printf(" [��   ��] %d\n", g_age[idx]);

}

void control_update()
{
	printf("����\n");
}

void control_delete()
{
	printf("����\n");
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

