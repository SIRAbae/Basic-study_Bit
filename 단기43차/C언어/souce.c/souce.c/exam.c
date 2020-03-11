//exam.c
#include <stdio.h>
#include "exam.h"
#include <stdlib.h>
#include <time.h>

/*
배열     arr를 +1만큼 이동한 역참조다 => arr[1]
*/
void exam1()
{
	//1. 정수 3개를 저장할 수 있는 배열 선언
	int arr[3]; //배열변수 선언

	//2. 초기화(대입)
	arr[0] = 10;
	scanf_s("%d", &arr[1]);
	arr[2] = arr[0] + arr[1];

	//3. 연산(배열의 모든 요소의 합) sum변수
	int sum = 0;
	sum = arr[0] + arr[1] + arr[2];

	//4. 결과 출력
	printf("%d\n", sum);
}

//배열과 반복문
//난수 : 0~9 사이의 값을 발생시키고 싶어
void exam2()
{
	//난수 발생 초기화
	srand((unsigned int)time(0));

	int arr[100];
	
	//난수 : 0~9 사이의 값
	for(int i=0; i<10; i++)
	{
		printf("%d\n", rand()%10);
	}

	//난수 : 1~10 사이의 값

	for (int i = 0; i<10; i++)
	{
		printf("%d\n", (rand() % 10) + 1);
	}
}

//배열과 반복문
void exam3()
{
	srand((unsigned int)time(0));
	
	int arr[100];

	//배열 변수를 난수로 초기화
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 10;
	}

	//배열 변수를 출력, 배열 순회 코드
	for (int i = 0; i < 100; i++)
	{
		//arr[i];
		printf("arr[%02d] = %d\n", i, arr[i]);
	}
}

/*
1. 문자를 100개 저장할 배열 변수를 선언
2. 배열에 대문자를 랜덤하게 저장
3. 저장된 모든 문자를 화면에 출력을 하는데
   한 줄에 10개씩 출력
   ex) A C D E A E Z ...
       T Q ...
*/
void exam4()
{
	srand((unsigned int)time(0));

	char arr[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 26 + 'A';
	}

	for (int i = 0; i < 100; i++)
	{
		printf("%c ", arr[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}

/*문자 1000개를 저장할 수 있는 배열 선언
소문자로 랜덤 초기화
한 줄에 20개씩 출력
사용자로부터 문자 한개를 입력 받아라
배열에 저장된 문자 중 해당 문자의 개수를 출력*/
void exam5()
{
	srand((unsigned int)time(0));

	char arr[1000];

	for (int i = 0; i < 1000; i++)
	{
		arr[i] = rand() % 26 + 'a';
	}

	for (int i = 0; i < 1000; i++)
	{
		printf("%c ", arr[i]);
		if ((i + 1) % 20 == 0)
			printf("\n");
	}

	char a;
	printf("문자 하나 입력 : ");
	scanf_s("%c", &a, sizeof(char));

	int count = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}

	printf("%c 문자는 총 %d개\n", a, count);
}

void exam6()
{
	int arr[3] = { 1, 2, 3 };

	//arr를 +1만큼 이동한 역참조 100 + 1 => 104, +2 => 108 
	arr[1];

	//arr주소 출력
	printf("%d\n", arr); //1703452 => 배열의 시작주소

	//arr+1
	printf("%d\n", arr + 1); //1703456 4바이트

	//arr를 +1만큼 이동한 역참조
	printf("%d\n", arr[1]); //2

	printf("%d\n", *(arr + 1)); //arr를 +1 한뒤 역참조  2
}

void exam7()
{
	int arr[5] = { 1,2,3,4,5 }; //100이라 가정
	int *parr;

	parr = arr; //????? L value 와 R value는 1차로 같다 대괄호와 *

	printf("%d\n", parr + 2); //차수의 변환이 없으므로 parr + 2 는 주소값의 연산    108이 나온다
	printf("%d\n", (*parr) + 2); //0차이므로 값이 나온다  1 + 2 = 3이 나온다
	printf("%d, %d\n", arr[2], *(arr + 2)); //arr를 +2만큼 이동한 역참조    3이 나온다.
	//===============================================
	int *parr1;
	parr1 = arr + 2; //둘다 1차 이므로 맞는 문법  108을 저장

	printf("%d\n", parr1[0]);   //3
	printf("%d\n", parr1[-2]);   //?  -2는 이동의 개념이고 갯수의 개념이 아님, -2만큼 이동      1이 나옴
}