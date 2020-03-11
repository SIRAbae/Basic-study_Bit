//exam.c
#include <stdio.h>
#include "exam.h"

void exam1()
{
	char name[20];

	printf("이름 :  ");
	gets_s(name, sizeof(name));

	printf("<< 입력된 이름 : %s\n", name);
}

void exam2()
{

}

void exam3()
{
	int num1;
	float num2;
	char num3;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	printf("출력 결과 : 10진수  %d 8진수  %#o 16진수  %#x\n", num1, num1, num1);

	printf("실수 입력 : ");
	scanf_s("%f", &num2);

	printf("출력 결과 : %.2f", num2);

	printf("문자 입력 : ");
	scanf_s("%c", &num3, sizeof(num2));

	printf("출력 결과 : %c , %d", num3, num3);
}

void exam4()
{
	float num1, num2;

	printf("섭씨 온도 : ");
	scanf_s("%f", &num1);

	printf("화씨 온도 : ");
	scanf_s("%f", &num2);

	num1 = (float)5 / 9 * (num2 - 32);

	printf("%.1f = 5 / 9 * (%.0f - 32)", num1, num2);
}

void exam5()
{
	int num1, num2, num3, result1, result2;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	printf("정수 입력 : ");
	scanf_s("%d", &num2);

	printf("정수 입력 : ");
	scanf_s("%d", &num3);

	result1 = (num1 + num2 + num3);
	result2 = (num1 + num2 + num3) / 3;

	printf("(%d + %d + %d) = %d\n", num1, num2, num3, result1);
	printf("(%d + %d + %d) / 3 = %d\n", num1, num2, num3, result2);

}

void exam6()
{
	char num1;

	printf("대문자로 영문자 입력 : ");
	scanf_s("%c", num1);


}

/*
비트켜기: 
비트끄기:
비트마스크:
*/

void exam100()
{
	int attend = 0; //0000 0000
	//출석체크 : 비트 켜기의 개념 (원본 변경) 1,4,7
	attend = attend | 2;
	attend = attend | 16;
	attend = attend | 128;
	//=----------------------------------
	//출석확인 => 비트 마스크의 개념 (원본 변경x)
	//7번학생 출석여부
	int result;
	result = attend & 128; //AND 연산
	printf("7번 학생은 %s\n", (result > 0) ? "출석" : "결석"); //참이면 출석변환 거짓이면 결석변환

	//5번 학생
	result = attend & 32;
	printf("5번 학생은 %s\n", (result > 0) ? "출석" : "결석");
}

void exam101()
{
	int x = 5, y = 10;
	int xy = 0;    //1010 0101

	//1. y값을 저장(비트 켜기의 개념)
	xy = xy | y;      //xy : 0000 0000
					  // y : 0000 1010
					  //xy : 0000 1010 왼쪽으로 4칸 이동시 1010 0000
	xy = xy << 4;	  //xy : 1010 0000
	
	//2. x값을 저장(비트 켜기)
	xy = xy | x;	// xy : 1010 0000
					//  x : 0000 0101
					// xy : 1010 0101
	printf("xy = %d\n", xy); //165
}

void exam102()
{
	int xy = 165; //xy : 1010 0101
	int x, y;

	//x값 얻기
	x = xy & 15; // xy : 1010 0101
				 // 15 : 0000 1111 비트마스크를 해보면?
	//y값 얻기
	y = xy & 0xf0; // xy : 1010 0101
				  //480 : 1111 0000 ; 0xf0 16진수로 표현
				  //  y : 1010 0000
	y = y >> 4;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

void exam103()
{
	int num1, num2, num3;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	num2 = num1 / 5;
	num3 = num1 % 5;

	printf("몫 = %d\n", num2);
	printf("나머지 = %d\n", num3);
}

void exam104()
{
	float num1, result;

	printf("달러 입력 : ");
	scanf_s("%f", &num1);

	result = num1 * 1250;

	printf("원화 = %.0f", result);
}

void exam105()
{
	int num1, num2, result;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	result = num1 * 30 + num2;

	printf("%d");
}

void exam106()
{
	char a, b;

	printf("소문자 : ");
	scanf_s("%c", &a);

	b = a - 32;

	printf("대문자 = %c", b);

}
