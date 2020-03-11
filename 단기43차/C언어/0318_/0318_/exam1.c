//exam1.c
#include <stdio.h>

void exam2()
{
	printf("***********\n");
	printf("이 름 : 홍길동\n");
	printf("%s : %d\n","나 이", 23);
	printf("전화번호 : %s-%s-%s\n", "010", "1111", "5555");
	printf("성 별 : %s\n", "m");
	printf("***********\n");
}
void exam3()
{
	printf("***********\n");
	printf("이 름 : %s\n", "홍길동" );
	printf("나 이 : %d\n", 23);
	printf("전화번호 : %s-%s-%s\n", "010","1111","1111");
	printf("성 별 : %c\n", 'm');
	printf("몸 무 게 : %.1f\n", 10.1);
	printf("***********\n");
}
void exam4()
{
	printf("%s\t\t%s\n", "type", "size");
	printf("____________\n");
	printf("char\t\t%d바이트\n", sizeof(char));
}
void exam5()
{
	printf("문자\t\t아스키코드값\n");
	printf("--------------\n");
	printf("'%c'\t\t%d\n", '0', '0');
	printf("'%c'\t\t%d\n", '1', '1');
	printf("'%c'\t\t%d\n", '8', '8');
	printf("'%c'\t\t%d\n", '9', '9');
}
void exam6()
{
	//1. 변수 선언
	char name[20];
	int age;
	char gender;
	float weight;

	//2. 초기화
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	printf("나이: ");
	scanf_s("%d", &age);

	printf("몸무게: ");
	scanf_s("%f", &weight);

	getchar();

	printf("성별(m or f) : ");
	scanf_s("%c", &gender, sizeof(gender));

	//3. 연산(x)

	//4. 결과 출력
	printf(">> 이름 : %s\n", name);
	printf(">> 나이 : %d\n", age);
	printf(">> 몸무게 : %.1f\n", weight);
	printf(">> 성별 : %c\n", gender);
}

//사용자로부터 2개의 정수를 입력받아 덧셈 결과를 출력해라.
void exam7()
{
	int num1, num2, result;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	printf("정수 입력 : ");
	scanf_s("%d", &num2);

	result = num1 + num2;

	printf("%d + %d = %d\n", num1, num2, result);
}

//exam8 : 정수 2개를 입력받아 첫번째 수를 두 번째 수로 나눈 결과값(단, 소숫점 1자리까지)과 나머지값을 출력할 것
void exam8()
{
	int num1, num2, result;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	printf("정수 입력 : ");
	scanf_s("%d", &num2);

	result = num1 / num2;

	printf("%d / %d = %d\n", num1, num2, result);
}

//exam9 : 사용자로부터 정수 3개를 입력받아 총 합과 평균을 출력할 것(단, 평균은 정수의 합 / 정수의 갯수)
void exam9()
{
	int num1, num2, num3, result;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	printf("정수 입력 : ");
	scanf_s("%d", &num2);

	printf("정수 입력 : ");
	scanf_s("%d", &num3);

	result = (num1 + num2 + num3) / 3;

	printf("(%d + %d + %d) / 3 = %d\n", num1, num2, num3, result);

}