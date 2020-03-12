#include <stdio.h>
#include <string.h>  //string_s
#include "exam.h"
#include <stdlib.h>  //system
#include <conio.h>  //_getch

//p29 3 ��������
//�л��� �̸�, �г�(1-4), ��������, ��������, ��������, �׸��� ����� ���� �� �ִ� ����ü��
//�����ϰ� ����ڷκ��� �̸��� �г�, 3������ ������ �Է� �޴� �Լ��� ����ü�� �Ű�������
//�޾Ƽ� ����� ����Ͽ� �����ϴ� �Լ��� �����Ͻÿ�. �̶�, �л��� �̸��� ���� 20�ڸ��� ���� �迭�� �����Ѵ�.

//����ü ����
struct student
{
	char name[20];
	int grad;
	int kor;
	int eng;
	int mat;
	float aver;
};

void fun_insert(struct student *pstu);
void input_basicdata(struct student *pstu, char* name, int grad);
void fun_selectall(struct student stu);
void fun_insertjumsu(struct student *pstu);
void input_jumsudata(struct student *pstu, int kor, int eng, int mat);
void fun_setaverage(struct student *stu);
void input_average(float *result, int kor, int eng, int mat);


int main()
{
	struct student stu = { 0 };

	while (1)
	{
		system("cls");
		fun_selectall(stu);
		printf("===============================\n");
		printf("[0] ���� [1] ȸ�������Է� [2] �����Է�\n");
		printf("[3] ���\n");
		printf("===============================\n");
		char ch = _getch();
		switch (ch)
		{
		case '0': return;
		case '1': fun_insert(&stu);		break;   //&stu�� struct student�� 1��
		case '2': fun_insertjumsu(&stu); break;
		case '3': fun_setaverage(&stu); break;
		}
		system("pause");
	}

	return 0;
}

void fun_insert(struct student *pstu)
{
	//�ӽú����� �̸�, �г� �Է�
	char name[20];
	int grad;
	printf("�̸� : "); gets_s(name, sizeof(name));
	printf("�г� : "); scanf_s("%d", &grad);

	//�Է¹��� ������ ���޵� pstu�� �ּҸ� �����Ͽ�
	//ó���ϴ� �Լ��� ȣ��
	input_basicdata(pstu, name, grad);
}

void input_basicdata(struct student *pstu, char* name, int grad)
{
	strcpy_s(pstu->name, sizeof(pstu->name), name);
	pstu->grad = grad;
}

void fun_selectall(struct student stu)
{
	printf("=========================================\n");
	printf("�̸�\t�г�\t����\t����\t����\t���\n");
	printf("-----------------------------------------\n");
	printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
		stu.name, stu.grad, stu.kor, stu.eng, stu.mat, stu.aver);
	printf("=========================================\n");
	printf("\n");
}

void fun_insertjumsu(struct student *pstu)
{
	//�ӽú����� �̸�, �г� �Է�
	int kor, eng, mat;
	printf("���� : "); scanf_s("%d", &kor);
	printf("���� : "); scanf_s("%d", &eng);
	printf("���� : "); scanf_s("%d", &mat);

	//�Է¹��� ������ ���޵� pstu�� �ּҸ� �����Ͽ�
	//ó���ϴ� �Լ��� ȣ��
	input_jumsudata(pstu, kor, eng, mat);
}

void input_jumsudata(struct student *pstu, int kor, int eng, int mat)
{
	pstu->kor = kor;
	pstu->eng = eng;
	pstu->mat = mat;
}
void fun_setaverage(struct student *stu)
{
	input_average(&stu->aver, stu->kor, stu->eng, stu->mat);
}

void input_average(float *result, int kor, int eng, int mat)
{
	*result = (kor + eng + mat) / 3.0f;
}
