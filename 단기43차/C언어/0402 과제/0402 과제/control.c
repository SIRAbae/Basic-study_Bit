//���α׷� �ô� ������/����

#include "std.h"
#include "account.h"
#include <stdio.h>
#include <string.h>


#define DATA_MAX 5
struct  account g_acc [DATA_MAX] = { 0 };


void control_selectall() //�迭 ��ȸ ����
{
	int idx;
	printf("=========================================\n");
	printf("�̸�\t���¹�ȣ\t�ܾ�\t �ŷ�Ƚ��\n");
	printf("-----------------------------------------\n");
	printf(" %s\t  %s\t %d\t %d\n",
		g_acc[idx].name, g_acc[idx].accountnumber, g_acc[idx].balance, g_acc[idx].num1);
	printf("=========================================\n");
	printf("\n");

}

void control_produceaccount()
{
	printf("���»���\n");
	//1. ���� ����
	char name[20];
	char accountnumber[20];
	int balance;
	int idx;

	//2. �ʱ�ȭ
	printf("���� ��ġ(0~%d) : ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	if (g_acc[idx].flag == 1 ||
		(idx < 0 || idx >= DATA_MAX))//  �����Ͱ� �����Ѵ�.
	{
		printf("�߸��� �ε��� �Դϴ�.\n");
		return;
	}
	printf(">> �̸� : ");	gets_s(name, sizeof(name));

	printf(">> ���¹�ȣ : ");	gets_s(accountnumber, sizeof(accountnumber));

	printf(">> �ܾ� : ");	scanf_s("%d", &balance);

	getchar();


	//3. ���� : ����
	strcpy_s(g_acc[idx].name, sizeof(name), name);
	strcpy_s(g_acc[idx].accountnumber, sizeof(accountnumber),accountnumber);
	g_acc[idx].balance = balance;

	//4. ���
	printf("����Ǿ����ϴ�.\n");
}

void control_deposit()
{


	//1. ���� ����
	int deposit;
	int idx;

	//2. �ʱ�ȭ
	printf("�Ա� �ݾ�: ");
	scanf_s("%d", &deposit);

	//3. ����
	
	g_acc[idx].balance = g_acc[idx].balance + deposit;
		
	//4. ��� ���
	
	printf(" %d���� �ԱݵǾ����ϴ�.\n", deposit);

}

void control_withdraw()
{

	//1. ���� ����
	int withdraw;
	int idx;

	//2. �ʱ�ȭ
	printf("��� �ݾ�: ");
	scanf_s("%d", &withdraw);

	//3. ����
	if (g_acc[idx].balance >= withdraw)
	{
		g_acc[idx].balance = g_acc[idx].balance - withdraw;
		printf(" %d���� ��ݵǾ����ϴ�.\n", withdraw);
		return;
	}
	else
	{
		printf("�ܾ��� �����մϴ�.\n");
		return;
	}
	//4. ��� ���

	printf(" �ŷ��� ����˴ϴ�.\n");
}
