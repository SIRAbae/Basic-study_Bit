//exam.c
#include <stdio.h>
#include "exam.h"

//if
//����ڷκ��� ������ �Է�(���ڷ�)
//����ڰ� m�� �Է��ϸ� "����"�� ���
//f�� �Է��ϸ� "����"
//Ư������ ���ϴ� ����
void exam1()
{
	char gender;
	printf("�����Է� : ");
	scanf_s("%c", &gender, sizeof(gender));
	/*
	if (gender == 'm')
		printf("����\n");		// ;�� �ϰ� �����ϸ� if���� ������ ������ ��
	
	if (gender == 'f')
		printf("����\n");		
	*/
	if (gender == 'm')
		printf("����\n");
	else
		printf("����\n");    //�� �ڵ尡 �� �´� �����̴�

}

//if Ư������ ���ϴ� ����
//����ڷκ��� �ǿ����� 2���� ������ 1���� �Է�
//��� ���
void exam2()
{
	int num1, num2;
	char oper;
	double result;

	printf("�����Է� : ");
	scanf_s("%d", &num1);

	printf("�����Է� : ");
	scanf_s("%d", &num2);

	getchar();  //?

	printf("�����Է� : ");
	scanf_s("%c", &oper, sizeof(char));    //sizeof(char)??

	if (oper == '+')
		result = num1 + num2;
	else if (oper == '-')
		result = num1 - num2;
	else if (oper == '*')
		result = num1 * num2;
	else if (oper == '/')
		result = (double)num1 / num2;

	printf("%5d %c %5d = %.1lf\n",
		num1, oper, num2, result);

}

//if ���� �� ����
//����ڷκ��� ������ �ϳ� �Է¹ް�, �ش� ������ ����Ͻÿ�.
void exam3()
{
	int jumsu;
	char grade;

	printf("���� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90 && jumsu <= 100)
		grade = 'A';
	else if (jumsu >= 80 && jumsu <= 89)
		grade = 'B';
	else if (jumsu >= 70 && jumsu <= 79)
		grade = 'C';
	else if (jumsu >= 60 && jumsu <= 69)
		grade = 'D';
	else
		grade = 'F';

	printf("%d������ ==> %c\n", jumsu, grade);
}

//�б⹮�� ���� ó��, �ϳ��� �б⹮�� {}�� ������ if�������� ó����
void exam4()
{
	if (100)
	{
		printf("����1\n");
		printf("����2\n");
		printf("����3\n");
	}
	

}

//switch�� �⺻ ����
void exam5()
{
	int num = 2;

	switch (num)
	{
	case 1 : 
		printf("1\n");
		break;
	case 2 :
		printf("2\n");
		printf("3\n");
		break;
	case 4 :
		printf("4\n");
		break;
	}
}

//switch�� ǥ���� ���� ��, ����3��
void exam6()
{
	int jumsu;
	char grade;

	printf("���� : ");
	scanf_s("%d", &jumsu);

	switch (jumsu)
	{
	case 100 : case 99 : case 98 : case 97 : 
		grade = 'A';
	}
	
	printf("%d������ ==> %c\n", jumsu, grade);
}

//�ݺ��� ex) �ٳѱ�
/*
�ʱⰪ�� ����, ���� ������ ����, ���� ������ ����
����� F9(break point : ���ߴ� ��ġ) F5(����� ���� ���) F10 or F11(�ڵ� ����)
*/
//������ 10�� �����ض�
void exam7()
{
	int i = 0; //�ʱⰪ

	while (i<10)    // ��������
	{
		printf("Hellow World!\n");  // �� ���ڸ� 5�� ����ϰ� �;�
		i++;   // ������ ���� ����
	}
}

//�������� 1���� 10���� ����ض�
void exam8()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;
	}
	printf("\n");
}

//1���� 100������ ������ ¦���� ����ض�
void exam9()
{
	int i = 1;
	while (i <= 100)
	{
		if(i % 2 == 0) //2�� �������� �� �������� 0 =��==�� ������
		printf("%d ", i);
		i++;
	}
	printf("\n");
}

void exam10()
{
	int i = 2;
	while (i <= 100)
	{
		printf("%d ", i);
		i=i+2;
	}
	printf("\n");
}

//for�� : �ʱⰪ�� ����, ���� ������ ����, ���� ������ ������ �ȿ� �� �ִ�
void exam11()
{
	for (int i = 0; i < 10; i++)
	{
		printf("Hellow World!\n");
	}
	//1~100 Ȧ����
	for (int i = 1; i <= 100; i = i + 2)
	{
		printf("%d ", i);
	}
}

/*�ݺ��� Ƚ���� ������ ���� ���� ���
����ڷκ��� -1�� �Է��Ҷ����� ������ �ݺ��ؼ� �Է¹޾ƶ�
�Է��� ���� ����ض�*/
void exam12()
{
	int num;
	int sum=0; //sum���� �ʱ�ȭ�� �ʿ��ϴ�
	while (1)
	{
		printf("�����Է� : ");
		scanf_s("%d", &num);
		if (num == -1)
			break;    		//�ݺ������� ���������� Ű����, �ݺ����� switch������ ����
		sum = sum + num;	
	}
	printf("�� : %d\n", sum);
}

//����ڷκ��� ���ڸ� �Է� �޾� �� ����ŭ Hello World! �� ��� (Ƚ�� �ִ� ��)
void exam13()
{
	int i = 0;

	while (i<10)
	{
		printf("Hellow World!\n");
		i++;
	}
}

//���ĺ� �ҹ��ڸ� ��� ��� �Ͻÿ� (Ƚ�� �ִ� ��)
void exam14()
{
	char i = 97;
	while (i <= 122)
	{
		printf("%c\n", i);
		i++;
	}
	printf("\n");
}

//���� 'x'�� �Է��� ������ ����ؼ� ���� �Է��� �޾� ȭ�鿡 ���(��, ���Ṯ�� 'x'�� ��ҹ��� ���� ����.)
void exam15()
{
	char word;
	while (1)
	{
		printf("���� �Է� : ");
		scanf_s("%c", &word, sizeof(word));

		getchar();

		if (word == 'x')
			break;
	}
}

//������ �� 5���� ��� (Ƚ�� �ִ� ��)
void exam16()
{
	int i = 5;
	int a=0;
	int result;
	while (a <= 9)
	{
		result = i * a;
		
		printf("%d x %d = %d ", i, a, result);
		a++;

		//if (i * a)
		//printf("%d ", a);
		//a++;
	}
	
}
