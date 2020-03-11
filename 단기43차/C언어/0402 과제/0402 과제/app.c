/*���α׷� �帧
�ʱ�ȭ�� ����(���� �ѹ���) - app_init
�ݺ��帧�� ����(����, �ʿ�� ���ѹݺ�) - app_run
����ó��(����� �ѹ���) - app_exit
*/

#include "std.h"

void app_init()
{
	logo();
}

void app_run()
{
	char idx;
	while (1)
	{
		system("cls");
		control_selectall();
		menuprint();
		idx = _getch(); //���Ͱ� �ʿ����, getchar() ���Ͱ� �ʿ���
		switch (idx)
		{
		case '1': control_produceaccount(); break;
		case '2': control_deposit(); break;
		case '3': control_withdraw(); break;
		case '4': control_delete(); break;
		case '5': return; //�Լ��� �����Ű�� Ű����

		}
		system("pause");
	}
}

void app_exit()
{
	ending();
}

void logo()
{
	system("cls"); //�ܼ�ȭ���� �����

	printf("*********************************************\n");
	printf(" 2019�г⵵ 1�б� ��ۺ�Ʈ �ܱ����\n");
	printf(" [�ټ��� ���°������α׷�]\n");
	printf(" 2019.04.02\n");
	printf(" �����\n");
	printf("*********************************************\n");

	system("pause"); //��� ����
}

void ending()
{
	system("cls"); //�ܼ�ȭ���� �����

	printf("******************************************\n");
	printf("���°��� ���α׷��� �����մϴ�.\n");
	printf("******************************************\n");

	//system("pause"); //��� ����

}

void menuprint()
{
	printf("******************************************\n");
	printf(" [1] ���»������(insert)\n");
	printf(" [2] �Աݱ��(select)\n");
	printf(" [3] ��ݱ��(update)\n");
	printf(" [4] ���� ���� ���(delete)\n");
	printf(" [5] ���α׷�����(exit)\n");
	printf("******************************************\n");

}