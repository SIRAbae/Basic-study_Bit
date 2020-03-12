#include <stdio.h>
#include "exam.h"

/*
char ch  => char , 1개 1byte
char* ch2 => char* , 1개 4byte
char arr1[5] => char , 5개 4byte
char *arr2[5] => char* , 5개 20byte  arr2기준으로 양쪽으로 연산자가 있음, 우선순위는 배열연산자이다(대괄호) 포인터연산자가 아니라..
*/
void exam1()
{
	char ch1; // char, 1개 1byte
	char* ch2; // char*, 1개 4byte
	char arr1[5]; // char, 5개 4byte
	char *arr2[5]; // char*, 5개 20byte
	//=======================================
	//ch1의 주소 100, ch2는 104, arr1은 108, arr2는 113(5바이트가 올라감)
	ch1 = 'A';	//'A'
	ch2 = &ch1;	//100

	arr1[0] = 'B';	//'B'
	arr1[1] = 'C';	//'C'

	arr2[0] = &ch1;	//100 //ch1는 0차 주소(&)가 붙었으므로 1차
	//arr2[1] = &ch2; //ch2는 1차 주소(&)가 붙었으므로 2차
	arr2[1] = ch2;	//100 &ch1
	arr2[3] = arr1;	//108

	printf("%c\n", ch1);		//'A' 0차
	printf("%c\n", *ch2);		//'A' 0차
	printf("%c\n", arr1[1]);	//'C' 0차
	//printf("%c\n", arr2[0]);	//주소값을 반환, arr2는 2차
	printf("%c\n", *(arr2[0]));	//'A'

}

/*
2차원배열과 포인터
*/
void exam2()
{
	//2차의 핵심은 열의 크기이다
	int arr[2][3] = { {1,2,3},
					   {4,5,6} };
	int (*pp)[3];

	pp = arr; 
	printf("%d, %d\n", arr + 1, pp + 1);				
}

/*
함수의 인자전달 책 p106를 봐
1. Call by value : 
2. Call by address(reference) : 
*/
void foo(int num, int *num1)  //()안에는 매개변수 2개가 선언되어야함 int의 0차 int의 1차
{
	int num2 = num;

	printf("foo:num2 => %d\n", num2);   // 10이 나온다

	*num1 = 15;  //0차와 0차 문법적으로 맞음
}

void exam3()
{
	int num = 10;
	foo(num, &num); //Call by value, Call by address

	printf("%d\n", num);  //15
}
/*
void add(int num1, int num2, int *result)
{
	*result = num1 + num2;
}
void exam4()
{
	int num1 = 10;
	int num2 = 20;
	int result;
	add(num1, num2, &result);

	printf("%d + %d = %d\n", num1, num2, result);
	//10 + 20 = 30
}
*/

void add(int num1, int num2, int *result)
{
	*result = num1 + num2;
}
void sub(int num1, int num2, int *result)
{
	*result = num1 - num2;
}
void mul(int num1, int num2, int *result)
{
	*result = num1 * num2;
}
void exam5()
{
	int num1 = 10;
	int num2 = 20;
	int result;
	add(num1, num2, &result);
	printf("%d + %d = %d\n", num1, num2, result);
	//10 + 20 = 30
	sub(num1, num2, &result);
	printf("%d - %d = %d\n", num1, num2, result);
	//10 - 20 = -10
	int arr[3] = { 10,20,0 };
	mul(arr[0], arr[1], &arr[2]);
	printf("%d * %d = %d\n", arr[0], arr[1], arr[2]);
	//10 * 20 = 200
}