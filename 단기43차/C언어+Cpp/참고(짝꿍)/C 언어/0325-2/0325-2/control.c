//���α׷� �ô� ������/����

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
	printf("�Է�\n");
	//1. ���� ����
	int number;
	int idx;

	//2. �ʱ�ȭ
	printf(">> ���� ���� �Է� : ");
	scanf_s("%d", &number);

	printf(">> ���� �ε��� �Է�(0~%d) : ",
		DATA_MAX - 1);
	scanf_s("%d", &idx);


	//3. ����
	g_datalist[idx] = number;

	//4. ���
	printf("����Ǿ����ϴ�.\n");
}

void control_select()
{
	printf("�˻�\n");
}

void control_update()
{
	printf("����\n");
}

void control_delete()
{
	printf("����\n");
}

