#include <stdio.h>
#include <string.h>  //string_s
#include "exam.h"
#include <stdlib.h>  //system
#include <conio.h>  //_getch

//p29 3 연습문제
//학생의 이름, 학년(1-4), 국어점수, 영어점수, 수학점수, 그리고 평균을 가질 수 있는 구조체를
//선언하고 사용자로부터 이름과 학년, 3과목의 점수를 입력 받는 함수와 구조체를 매개변수로
//받아서 평균을 계산하여 저장하는 함수를 구현하시오. 이때, 학생의 이름은 문자 20자리를 갖는 배열로 선언한다.

//구조체 정의
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
		printf("[0] 종료 [1] 회원정보입력 [2] 점수입력\n");
		printf("[3] 평균\n");
		printf("===============================\n");
		char ch = _getch();
		switch (ch)
		{
		case '0': return;
		case '1': fun_insert(&stu);		break;   //&stu는 struct student의 1차
		case '2': fun_insertjumsu(&stu); break;
		case '3': fun_setaverage(&stu); break;
		}
		system("pause");
	}

	return 0;
}

void fun_insert(struct student *pstu)
{
	//임시변수에 이름, 학년 입력
	char name[20];
	int grad;
	printf("이름 : "); gets_s(name, sizeof(name));
	printf("학년 : "); scanf_s("%d", &grad);

	//입력받은 정보와 전달된 pstu의 주소를 전달하여
	//처리하는 함수를 호출
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
	printf("이름\t학년\t국어\t영어\t수학\t평균\n");
	printf("-----------------------------------------\n");
	printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
		stu.name, stu.grad, stu.kor, stu.eng, stu.mat, stu.aver);
	printf("=========================================\n");
	printf("\n");
}

void fun_insertjumsu(struct student *pstu)
{
	//임시변수에 이름, 학년 입력
	int kor, eng, mat;
	printf("국어 : "); scanf_s("%d", &kor);
	printf("영어 : "); scanf_s("%d", &eng);
	printf("수학 : "); scanf_s("%d", &mat);

	//입력받은 정보와 전달된 pstu의 주소를 전달하여
	//처리하는 함수를 호출
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
