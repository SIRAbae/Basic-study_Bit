//exam.c
#include <stdio.h>
#include "exam.h"

void exam1()
{
	char name[20];

	printf("�̸� :  ");
	gets_s(name, sizeof(name));

	printf("<< �Էµ� �̸� : %s\n", name);
}

void exam2()
{

}

void exam3()
{
	int num1;
	float num2;
	char num3;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	printf("��� ��� : 10����  %d 8����  %#o 16����  %#x\n", num1, num1, num1);

	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &num2);

	printf("��� ��� : %.2f", num2);

	printf("���� �Է� : ");
	scanf_s("%c", &num3, sizeof(num2));

	printf("��� ��� : %c , %d", num3, num3);
}

void exam4()
{
	float num1, num2;

	printf("���� �µ� : ");
	scanf_s("%f", &num1);

	printf("ȭ�� �µ� : ");
	scanf_s("%f", &num2);

	num1 = (float)5 / 9 * (num2 - 32);

	printf("%.1f = 5 / 9 * (%.0f - 32)", num1, num2);
}

void exam5()
{
	int num1, num2, num3, result1, result2;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	printf("���� �Է� : ");
	scanf_s("%d", &num3);

	result1 = (num1 + num2 + num3);
	result2 = (num1 + num2 + num3) / 3;

	printf("(%d + %d + %d) = %d\n", num1, num2, num3, result1);
	printf("(%d + %d + %d) / 3 = %d\n", num1, num2, num3, result2);

}

void exam6()
{
	char num1;

	printf("�빮�ڷ� ������ �Է� : ");
	scanf_s("%c", num1);


}

/*
��Ʈ�ѱ�: 
��Ʈ����:
��Ʈ����ũ:
*/

void exam100()
{
	int attend = 0; //0000 0000
	//�⼮üũ : ��Ʈ �ѱ��� ���� (���� ����) 1,4,7
	attend = attend | 2;
	attend = attend | 16;
	attend = attend | 128;
	//=----------------------------------
	//�⼮Ȯ�� => ��Ʈ ����ũ�� ���� (���� ����x)
	//7���л� �⼮����
	int result;
	result = attend & 128; //AND ����
	printf("7�� �л��� %s\n", (result > 0) ? "�⼮" : "�Ἦ"); //���̸� �⼮��ȯ �����̸� �Ἦ��ȯ

	//5�� �л�
	result = attend & 32;
	printf("5�� �л��� %s\n", (result > 0) ? "�⼮" : "�Ἦ");
}

void exam101()
{
	int x = 5, y = 10;
	int xy = 0;    //1010 0101

	//1. y���� ����(��Ʈ �ѱ��� ����)
	xy = xy | y;      //xy : 0000 0000
					  // y : 0000 1010
					  //xy : 0000 1010 �������� 4ĭ �̵��� 1010 0000
	xy = xy << 4;	  //xy : 1010 0000
	
	//2. x���� ����(��Ʈ �ѱ�)
	xy = xy | x;	// xy : 1010 0000
					//  x : 0000 0101
					// xy : 1010 0101
	printf("xy = %d\n", xy); //165
}

void exam102()
{
	int xy = 165; //xy : 1010 0101
	int x, y;

	//x�� ���
	x = xy & 15; // xy : 1010 0101
				 // 15 : 0000 1111 ��Ʈ����ũ�� �غ���?
	//y�� ���
	y = xy & 0xf0; // xy : 1010 0101
				  //480 : 1111 0000 ; 0xf0 16������ ǥ��
				  //  y : 1010 0000
	y = y >> 4;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

void exam103()
{
	int num1, num2, num3;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	num2 = num1 / 5;
	num3 = num1 % 5;

	printf("�� = %d\n", num2);
	printf("������ = %d\n", num3);
}

void exam104()
{
	float num1, result;

	printf("�޷� �Է� : ");
	scanf_s("%f", &num1);

	result = num1 * 1250;

	printf("��ȭ = %.0f", result);
}

void exam105()
{
	int num1, num2, result;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	result = num1 * 30 + num2;

	printf("%d");
}

void exam106()
{
	char a, b;

	printf("�ҹ��� : ");
	scanf_s("%c", &a);

	b = a - 32;

	printf("�빮�� = %c", b);

}
