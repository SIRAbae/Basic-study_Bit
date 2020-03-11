#include <stdio.h>
#include <string.h>
#include "exam.h"

//����ü ���� = Ÿ�Կ� ���� ����
//1. Ÿ�Ը� : struct person
//2. ũ�� : 25Byte
//3. ���� : 3���� ����� �����Ǿ� ���� ���ڿ�, ����, ����
struct person
{
	char name[20];
	int age;
	char gender;      //25����Ʈ ����� 3��
};

void exam1()
{
	struct person   per1 = { "ȫ�浿", 10, 'm' };
	struct person * per2;
	struct person per3[3];
	//===============================================
	printf("�̸� : %s\n", per1.name);
	printf("���� : %d\n", per1.age);
	printf("���� : %c\n", per1.gender);
	//================================================
	//per1�� Ÿ����? struct person ũ���? 25����Ʈ
	//per1.name�� Ÿ����? char* 20����Ʈ
	//per1.age�� Ÿ����? int 4����Ʈ
	//per1.gender�� Ÿ����? char 1����Ʈ
	//=================================================

}
/*
struct person
{
	char name[20];			int age;		char gender;
};
void exam1()
{
	struct person	per1 = { "ȫ�浿", 10, 'm' };
	struct person * per2; 
	struct person per3[3];
	
	int a = per1.age; =10 ok 
	int*pa = &per1.age; =120 ok
	*pa = 20;
	strcpy_s(per1.name, sizeof(per1.name), "��浿");
	====================================================
	struct person per4;
	per4 = per1;  //? => �����ϴ� per4�� 3������ ��� �����Ͱ� ������ �ȴ�.
	printf("�̸� : %s\n", per4.name);
	printf("���� : %d\n", per4.age);
	printf("���� : %c\n", per4.gender);
	==========================================================================================
	per2 = per1; //? => 1���� 0���̹Ƿ� �ȸ��� => &per1���� �ٲ� 4����Ʈ�� ũ�⸦ ����
	*per2       Ÿ�� : struct person
	(*per2).age = 30;                   �����̶�� ���Ͽ� �����ؼ� ����� �����Ѵ�, �ּ� �ٲٱ⵵ ����
	per2 -> age = 30; ���� ���� ->�� ������     ���� .���� �ּҴ� ->�� �����ϸ� ��
}
*/

/*
���� ��¥�� �����ϰ� ��� �� ������¥�� ����ó��
�׸��� ��¥�� ���
*/

//�⺻����°� �����ڱ��� �н�...
void exam2()
{
	int year, month, day;
	year = 2019;
	month = 4;
	day = 1;
	printf("%d-%02d-%02d\n", year, month, day);

	day = day + 1;
	printf("%d-%02d-%02d\n", year, month, day);

}

/*�Լ����� �н�...
void inputtoday(int *y, int *m, int *d) //address
{
	*y = 2019;
	*m = 4;
	*d = 1;
}
void printday(int y, int m, int d)  //value
{
	printf("%d-%02d-%02d\n", y, m, d);
}
void nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void exam3()
{
	int year, month, day;

	inputtoday(&year, &month, &day);     //inputtoday�� ����Ǹ� ������¥�� ����ǰԲ�, call by address�� ������ �ٲ� �� �ִ�.
	printday(year, month, day);				//�ٲ� ������ �����Ƿ� call by value�� ������
	//printf("%d-%02d-%02d\n", year, month, day);
	nextday(&year, &month, &day);
	printday(year, month, day);

	//day = day + 1;
	//printf("%d-%02d-%02d\n", year, month, day);
}
*/

//����ü���� �н�...
//����ü ����
struct mydate
{
	int year;
	int month;
	int day;
};

void inputtoday(struct mydate *pdate)
{
	pdate->year = 2019;
	pdate->month = 4;
	pdate->day = 1;
}
void printday(struct mydate date)
{
	printf("%d-%02d-%02d\n", date.year, date.month, date.day);
}
void nextday(int *y, int *m, int *d)
{
	*d = *d + 1;
}
void exam4()
{
	struct mydate date;
	inputtoday(&date); //���� �ٲٴ� ���� call by address  &�ٿ�����
	printday(date);
	nextday(&date.year, &date.month, &date.day);  //nextday(&date);
	printday(date);
}

//1. exam5�� �������� ����� ���� struct oper �̸��� ����ü Ÿ���� �����ϰ� �� Ÿ���� ������ �����Ͽ� �����Ͽ���
struct oper
{
	int num1;
	int num2;
	char oper;
	float result;
};
void inputnumber(int *num1, int *num2)
{
	printf("�����Է� : ");
	scanf_s("%d", num1);

	printf("�����Է� : ");
	scanf_s("%d", num2);
}
/*void inputnumber(int *num2)
{
	printf("�����Է� : ");
	scanf_s("%d", num2);
}*/

void inputoper(char *oper)
{
	getchar();
	printf("�������Է� : ");
	scanf_s("%c", oper, sizeof(char));
	
}
void caloper(int num1, int num2, char oper, float *result)
{
	switch (oper)
	{
	case '+': *result = (float)num1 + num2; break;
	case '-': *result = (float)num1 + num2; break;
	case '*': *result = (float)num1 + num2; break;
	case '/': *result = (float)num1 + num2; break;

	}
}
void calprint(float result)
{
	printf(" �� : %0.2f\n", result);
}
void exam5()
{
	
	struct oper oper1;

								//1. �����Է��Լ� ȣ��
	inputnumber(&oper1.num1,&oper1.num2);
												//2. �����Է��Լ� ȣ��
	//inputnumber(&oper1.num2);
														//3. ������ �Է��Լ� ȣ��
	inputoper(&oper1.oper);
																			//4. ����� ��� �Լ�
	caloper(oper1.num1,oper1.num2,oper1.oper,&oper1.result);
																					//5. ������ ����� ����ϴ� �Լ� ȣ��
	calprint(oper1.result);

}