//exam1.c
#include <stdio.h>

void exam2()
{
	printf("***********\n");
	printf("�� �� : ȫ�浿\n");
	printf("%s : %d\n","�� ��", 23);
	printf("��ȭ��ȣ : %s-%s-%s\n", "010", "1111", "5555");
	printf("�� �� : %s\n", "m");
	printf("***********\n");
}
void exam3()
{
	printf("***********\n");
	printf("�� �� : %s\n", "ȫ�浿" );
	printf("�� �� : %d\n", 23);
	printf("��ȭ��ȣ : %s-%s-%s\n", "010","1111","1111");
	printf("�� �� : %c\n", 'm');
	printf("�� �� �� : %.1f\n", 10.1);
	printf("***********\n");
}
void exam4()
{
	printf("%s\t\t%s\n", "type", "size");
	printf("____________\n");
	printf("char\t\t%d����Ʈ\n", sizeof(char));
}
void exam5()
{
	printf("����\t\t�ƽ�Ű�ڵ尪\n");
	printf("--------------\n");
	printf("'%c'\t\t%d\n", '0', '0');
	printf("'%c'\t\t%d\n", '1', '1');
	printf("'%c'\t\t%d\n", '8', '8');
	printf("'%c'\t\t%d\n", '9', '9');
}
void exam6()
{
	//1. ���� ����
	char name[20];
	int age;
	char gender;
	float weight;

	//2. �ʱ�ȭ
	printf("�̸� : ");
	scanf_s("%s", name, sizeof(name));

	printf("����: ");
	scanf_s("%d", &age);

	printf("������: ");
	scanf_s("%f", &weight);

	getchar();

	printf("����(m or f) : ");
	scanf_s("%c", &gender, sizeof(gender));

	//3. ����(x)

	//4. ��� ���
	printf(">> �̸� : %s\n", name);
	printf(">> ���� : %d\n", age);
	printf(">> ������ : %.1f\n", weight);
	printf(">> ���� : %c\n", gender);
}

//����ڷκ��� 2���� ������ �Է¹޾� ���� ����� ����ض�.
void exam7()
{
	int num1, num2, result;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	result = num1 + num2;

	printf("%d + %d = %d\n", num1, num2, result);
}

//exam8 : ���� 2���� �Է¹޾� ù��° ���� �� ��° ���� ���� �����(��, �Ҽ��� 1�ڸ�����)�� ���������� ����� ��
void exam8()
{
	int num1, num2, result;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	result = num1 / num2;

	printf("%d / %d = %d\n", num1, num2, result);
}

//exam9 : ����ڷκ��� ���� 3���� �Է¹޾� �� �հ� ����� ����� ��(��, ����� ������ �� / ������ ����)
void exam9()
{
	int num1, num2, num3, result;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	printf("���� �Է� : ");
	scanf_s("%d", &num3);

	result = (num1 + num2 + num3) / 3;

	printf("(%d + %d + %d) / 3 = %d\n", num1, num2, num3, result);

}