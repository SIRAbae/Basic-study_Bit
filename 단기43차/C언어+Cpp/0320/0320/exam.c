//exam.c
#include <stdio.h>
#include "exam.h"

//if
//사용자로부터 성별을 입력(문자로)
//사용자가 m을 입력하면 "남자"로 출력
//f를 입력하면 "여자"
//특정값을 비교하는 예제
void exam1()
{
	char gender;
	printf("성별입력 : ");
	scanf_s("%c", &gender, sizeof(gender));
	/*
	if (gender == 'm')
		printf("남자\n");		// ;을 하고 엔터하면 if절과 독립된 문장이 됨
	
	if (gender == 'f')
		printf("여자\n");		
	*/
	if (gender == 'm')
		printf("남자\n");
	else
		printf("여자\n");    //이 코드가 더 맞는 로직이다

}

//if 특정값을 비교하는 예제
//사용자로부터 피연산자 2개를 연산자 1개를 입력
//결과 출력
void exam2()
{
	int num1, num2;
	char oper;
	double result;

	printf("정수입력 : ");
	scanf_s("%d", &num1);

	printf("정수입력 : ");
	scanf_s("%d", &num2);

	getchar();  //?

	printf("정수입력 : ");
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

//if 범위 비교 예제
//사용자로부터 점수를 하나 입력받고, 해당 학점을 출력하시오.
void exam3()
{
	int jumsu;
	char grade;

	printf("점수 : ");
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

	printf("%d점수는 ==> %c\n", jumsu, grade);
}

//분기문의 영역 처리, 하나의 분기문에 {}로 묶으면 if영역으로 처리됨
void exam4()
{
	if (100)
	{
		printf("문장1\n");
		printf("문장2\n");
		printf("문장3\n");
	}
	

}

//switch의 기본 성질
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

//switch로 표현이 힘든 예, 예제3번
void exam6()
{
	int jumsu;
	char grade;

	printf("점수 : ");
	scanf_s("%d", &jumsu);

	switch (jumsu)
	{
	case 100 : case 99 : case 98 : case 97 : 
		grade = 'A';
	}
	
	printf("%d점수는 ==> %c\n", jumsu, grade);
}

//반복문 ex) 줄넘기
/*
초기값의 개념, 증가 감소의 개념, 종료 조건의 개념
디버깅 F9(break point : 멈추는 위치) F5(디버그 실행 명령) F10 or F11(코드 진행)
*/
//문장을 10번 실행해라
void exam7()
{
	int i = 0; //초기값

	while (i<10)    // 실행조건
	{
		printf("Hellow World!\n");  // 이 문자를 5번 출력하고 싶어
		i++;   // 증감의 대한 개념
	}
}

//정수값을 1부터 10까지 출력해라
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

//1부터 100까지의 숫자중 짝수만 출력해라
void exam9()
{
	int i = 1;
	while (i <= 100)
	{
		if(i % 2 == 0) //2로 나누었을 때 나머지가 0 =과==의 차이점
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

//for문 : 초기값의 개념, 증가 감소의 개념, 종료 조건의 개념이 안에 다 있다
void exam11()
{
	for (int i = 0; i < 10; i++)
	{
		printf("Hellow World!\n");
	}
	//1~100 홀수만
	for (int i = 1; i <= 100; i = i + 2)
	{
		printf("%d ", i);
	}
}

/*반복의 횟수가 정해져 있지 않은 경우
사용자로부터 -1을 입력할때까지 정수를 반복해서 입력받아라
입력의 합을 출력해라*/
void exam12()
{
	int num;
	int sum=0; //sum에서 초기화가 필요하다
	while (1)
	{
		printf("정수입력 : ");
		scanf_s("%d", &num);
		if (num == -1)
			break;    		//반복문에서 빠져나오는 키워드, 반복문과 switch문에만 영향
		sum = sum + num;	
	}
	printf("합 : %d\n", sum);
}

//사용자로부터 숫자를 입력 받아 그 수만큼 Hello World! 를 출력 (횟수 있는 것)
void exam13()
{
	int i = 0;

	while (i<10)
	{
		printf("Hellow World!\n");
		i++;
	}
}

//알파벳 소문자를 모두 출력 하시오 (횟수 있는 것)
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

//문자 'x'를 입력할 때까지 계속해서 문자 입력을 받아 화면에 출력(단, 종료문자 'x'는 대소문자 구분 없다.)
void exam15()
{
	char word;
	while (1)
	{
		printf("문자 입력 : ");
		scanf_s("%c", &word, sizeof(word));

		getchar();

		if (word == 'x')
			break;
	}
}

//구구단 중 5단을 출력 (횟수 있는 것)
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
