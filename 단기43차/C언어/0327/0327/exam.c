#include <stdio.h>
#include "exam.h"
#include <string.h>

#define DATA_MAX 10   //배열선언시 일반적인 상수보다는 치환하여 넣는 것이 편하다
//전처리다(#때문에) : 컴파일 전에 수행하는 구문
//DATA_MAX를 10으로 치환해주는 것이 #define

void exam1()
{
	//변수선언
	int arr[DATA_MAX];

	//초기화
	for (int i = 0; i < DATA_MAX; i++)
	{
		arr[i] = i + 1;
	}

	//출력
	for (int i = 0; i < DATA_MAX; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
}

#define EXAM2_BEGIN  void exam2() {
#define EXAM2_END	}
#define PRINT_HELLO printf("Hello World!\n");

EXAM2_BEGIN // >> void exam2() {  로 치환
PRINT_HELLO // >> printf("Hello World!\n");  로 치환
EXAM2_END // >>    }  로 치환

//문자열 선언 및 초기화
void exam3()
{
	//문자열배열
	char arr1[] = "hello";  //6바이트
	char arr2[] = { "hello" };  //6바이트
	char arr3[] = { 'h','e','l','l','o', '\0' };  //6바이트
	//==========================================================
	//문자배열
	char arr4[] = { 'h','e','l','l','o' };  //5바이트 %s로 출력하면 안됨 널문자가 존재하지 않기 때문

	//문자열은 1차원의 형태로 다루어진다
	printf("%s\n", arr1);  //%s 문자열 출력 서식 arr1은 1차  문자열은 무조건 1차이다.
	printf("%c\n", arr1[0]);  //%c 문자 출력 서식 arr1[0]은 0차

}

void exam4()
{
	char msg1[] = "Hello";
	char *msg2 = "Hello"; //둘다 exam4의 스텍에 저장된다, 6바이트의 공간 생성, char * >> char의 주소를 저장
	//================================================================
	msg1[1] = 'E';
	printf("%s\n", msg1);
	msg2[1] = 'E';  //error
	printf("%s\n", msg2);

}

//문자열 대입연산 : strcpy_s
void exam5()
{
	int num1 = 10;
	int num2;
	num2 = num1;
	
	char arr1[5] = "abcd";
	char arr2[5]; // ="AAAA"; 라면 덮어쓰여짐 >> abcd로 나옴
	//arr2 = arr1;  //? 배열의 이름은 주소다, 배열은 L value에 사용할 수 없다. 배열의 이름은 상수주소이기 때문에
	
	//arr2[0] = arr1[0];
	//arr2[1] = arr1[1]; //하나 하나 일일이 옮겨야함 이 귀찮은 일 때문에 strcpy_s가 있다
	strcpy_s(arr2, sizeof(arr2), arr1);

	printf("%s\n", arr2);
}

//문자열 더하기 : strcat_s
void exam6()
{
	char str1[] = "abcd";
	char str2[20] = "ABCD";
	strcat_s(str2, sizeof(str2), str1);
	printf("%s\n", str2);
}

//문자열 비교 : strcmp
//첫번째 문자열이 작냐? 음수가 반환
//첫번째 문자열이 같냐? 0이 반환
//첫번째 문자열이 크냐? 양수가 반환
void exam7()
{
	char str1[] = "ABCD";
	char str2[] = "ABc"; // 0 0 음수(아스키코드)

	if (strcmp(str1, str2) == 0)
	{
		printf("문자열이 같다\n");
	}
	
	if (str1 != str2)
	{
		printf("무엇을 비교하는 것일까?\n");
	}
}

//문자열의 길이 : strlen() : byte 반환
void exam8()
{
	char str1[20] = "1";
	char str2[20] = "홍1";

	printf("%dbyte, %dbyte\n",
		sizeof(str1), strlen(str1));  //20, 1(널문자 제외)
	
	printf("%dbyte, %dbyte\n",
		sizeof(str2), strlen(str2));  //20, 3(한글은 2바이트, 널문제 제외)
}